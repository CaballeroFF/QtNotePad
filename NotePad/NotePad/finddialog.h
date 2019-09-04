#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class FindDialog;
}

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindDialog(QWidget *parent = nullptr);
    ~FindDialog();

signals:
    void sendFindValue(QString& s);
    void sendDirectionValue(bool& direction);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);
    void on_pushButton_2_clicked();
    void on_findNextButton_clicked();

    void on_downRadioButton_toggled(bool checked);

private:
    Ui::FindDialog *ui;
};

#endif // FINDDIALOG_H
