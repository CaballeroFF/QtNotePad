#include "notepad.h"
#include "ui_notepad.h"

NotePad::NotePad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotePad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    defaultTitle = QWidget::windowTitle();
    setWindowTitle(defaultTitle + " - Untitled");
}

NotePad::~NotePad()
{
    delete ui;
}

// override
void NotePad::closeEvent(QCloseEvent *event) {
    if (tempText != ui->textEdit->toPlainText()) {
        QMessageBox::StandardButton resBtn = QMessageBox::question
                (
                    this, defaultTitle,
                    tr("Do you want to save changes?\n"),
                    QMessageBox::Save | QMessageBox::No | QMessageBox::Cancel,
                    QMessageBox::Save
                );
        if (resBtn == QMessageBox::Cancel) {
            event->ignore();
        } else if (resBtn == QMessageBox::No) {
            event->accept();
        } else {
            NotePad::on_actionSave_triggered();
            event->accept();
        }
    } else {
        event->accept();
    }
}

void NotePad::resetTextChanged() {
    textChangedstart = false;
    textChangedend = false;
}

void NotePad::saveFile(QString& fileName)
{

    if (fileName == "") return;
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannon save file " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(defaultTitle + " - " + fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
    resetTextChanged();
    tempText = ui->textEdit->toPlainText();
}

void NotePad::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
    setWindowTitle(defaultTitle + " - Untitled");
}

void NotePad::on_actionSave_triggered()
{
    if (currentFile.isEmpty() || currentFile == "Untitled") {
        NotePad::on_actionSave_as_triggered();
    } else {
        NotePad::saveFile(currentFile);
    }
}

void NotePad::on_actionSave_as_triggered()
{
    QString selFilter = "Text files (*.txt)";
    QString fileName = QFileDialog::getSaveFileName(this, "Save file", QDir::currentPath(),
                                        "Text files (*.txt);;All files (*.*)", &selFilter);
    NotePad::saveFile(fileName);
}

void NotePad::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open file");
    if (fileName == "") return;
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot Open file " + file.errorString());
        return;
    }
    setWindowTitle(defaultTitle + " - " + fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    savedOrOpened = true;
    tempText = text;
    ui->textEdit->setText(text);
    file.close();
}

void NotePad::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Rejected) {
        QMessageBox::warning(this, "Warning", "Cannot print");
        return;
    }
    ui->textEdit->print(&printer);
}

void NotePad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void NotePad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void NotePad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void NotePad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void NotePad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void NotePad::on_actionExit_triggered()
{
    QApplication::quit();
}

void NotePad::on_textEdit_textChanged()
{
    textChangedstart = true;
    if (textChangedstart != textChangedend) { //&& !savedOrOpened
        setWindowTitle("* " + QWidget::windowTitle());
        textChangedend = textChangedstart;
    }
    if (savedOrOpened) {
        setWindowTitle(defaultTitle + " - " + currentFile);
        resetTextChanged();
        savedOrOpened = false;
    } else {
        if (tempText == ui->textEdit->toPlainText()){
            setWindowTitle(defaultTitle + " - " + currentFile);
            resetTextChanged();
        }
    }
}
