#include "dialog.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

Dialog::Dialog(QWidget *parent) : QDialog(parent)
{
    this->setWindowTitle("About");

    text = new QLabel(tr("О приложении:\nЭмулятор с выбором ПЗУ\nСоздатель: Белков Алексей"), this);
    QVBoxLayout *vlay = new QVBoxLayout();
    vlay->addWidget(text);
    setLayout(vlay);
}
