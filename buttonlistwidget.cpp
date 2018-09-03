#include "buttonlistwidget.h"
#include "QHBoxLayout"
#include "QPushButton"
#include "QVBoxLayout"
#include "QLabel"
#include "QTextEdit"

buttonListWidget::buttonListWidget(QWidget *parent) : QWidget(parent)
{

}

void buttonListWidget::initWidget()
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label1 = new QLabel("Year",this);
    layout->addWidget(label1);
    QTextEdit *TextEdit1 = new QTextEdit("str", this);
    layout->addWidget(TextEdit1);

    QLabel *label2 = new QLabel("Author",this);
    layout->addWidget(label2);
    QTextEdit *TextEdit2 = new QTextEdit(this);
    layout->addWidget(TextEdit2);

    QLabel *label3 = new QLabel("Title",this);
    layout->addWidget(label3);
    QTextEdit *TextEdit3 = new QTextEdit(this);
    layout->addWidget(TextEdit3);

    this->setLayout(layout);
}
