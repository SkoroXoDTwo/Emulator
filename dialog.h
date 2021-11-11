#ifndef DIALOG_H
#define DIALOG_H

#include <QLabel>
#include <QWidget>
#include <QDialog>

class Dialog : public QDialog
{
    Q_OBJECT
public:
    Dialog (QWidget *parent = 0);

private:
    QLabel *text;


};

#endif // DIALOG_H
