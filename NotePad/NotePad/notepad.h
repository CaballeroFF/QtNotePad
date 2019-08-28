#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <iostream>

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QCloseEvent>

namespace Ui {
class NotePad;
}

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionPrint_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionExit_triggered();


    void on_textEdit_textChanged();

private:
    void closeEvent(QCloseEvent *event);
    void saveFile(QString& fileName);
    void resetTextChanged();
    Ui::NotePad *ui;
    QString currentFile = "Untitled";
    QString defaultTitle = "";
    QString tempText = "";
    bool textChangedstart = false;
    bool textChangedend = false;
    bool savedOrOpened = false;
};

#endif // NOTEPAD_H
