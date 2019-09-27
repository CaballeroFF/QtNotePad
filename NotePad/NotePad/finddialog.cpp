#include "finddialog.h"
#include "ui_finddialog.h"

FindDialog::FindDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindDialog)
{
    ui->setupUi(this);
    ui->findNextButton->setDisabled(true);

}

FindDialog::~FindDialog()
{
    delete ui;
}

void FindDialog::on_lineEdit_textEdited(const QString &arg1)
{
    if (arg1.isEmpty()) {
        ui->findNextButton->setDisabled(true);
    } else {
        ui->findNextButton->setDisabled(false);
    }
}

void FindDialog::on_pushButton_2_clicked()
{
    QWidget::close();
}

void FindDialog::on_findNextButton_clicked()
{
    QString send = ui->lineEdit->text();
    emit sendFindValue(send);
}

void FindDialog::on_downRadioButton_toggled(bool checked)
{
    emit sendDirectionValue(checked);
}

void FindDialog::on_matchCase_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        emit sendMatchCaseState(true);
    } else {
        emit sendMatchCaseState(false);
    }
}
