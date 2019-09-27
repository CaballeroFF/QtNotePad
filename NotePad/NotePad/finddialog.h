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
    void sendMatchCaseState(bool matchCase);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);
    void on_pushButton_2_clicked();
    void on_findNextButton_clicked();

    void on_downRadioButton_toggled(bool checked);

    void on_matchCase_stateChanged(int arg1);

private:
    Ui::FindDialog *ui;
};

#endif // FINDDIALOG_H
