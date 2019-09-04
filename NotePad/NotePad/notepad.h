#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QCloseEvent>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextStream>

#include "finddialog.h"

/*
 * fix direction up
 * functionality of match case
 * make selection blue when focused on find dialog
 */

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
    void receiveFindValue(QString& s);
    void receiveDirectionValue(bool& directionDown);

    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_actionPrint_triggered();
    void on_actionExit_triggered();

    void on_actionCopy_triggered();
    void on_actionPaste_triggered();
    void on_actionCut_triggered();
    void on_actionUndo_triggered();
    void on_actionDelete_triggered();
    void on_actionRedo_triggered();
    void on_actionFind_triggered();
    void on_actionFind_Next_triggered();

    void on_textEdit_textChanged();
    void on_textEdit_copyAvailable(bool b);
    void on_textEdit_cursorPositionChanged();

private:
    void closeEvent(QCloseEvent *event);
    void saveFile(QString& fileName);
    void resetTextChanged();
    void textChangedAsterisk();

    Ui::NotePad *ui;
    QString currentFile = "Untitled";
    QString defaultTitle = "";
    QString tempText = "";
    QString stringTofind = "";

    FindDialog *findDialog;

    bool directionDown = true;
    bool textChangedstart = false;
    bool textChangedend = false;
    bool savedOrOpened = false;

    int findStartingIndex = 0;
};

#endif // NOTEPAD_H
