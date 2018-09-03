#ifndef BUTTONLISTWIDGET_H
#define BUTTONLISTWIDGET_H

#include <QWidget>

class buttonListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit buttonListWidget(QWidget *parent = nullptr);
    void initWidget();

signals:

public slots:
};

#endif // BUTTONLISTWIDGET_H
