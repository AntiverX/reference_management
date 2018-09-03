#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void ProvideContextMenu(const QPoint &point);

private:
    Ui::MainWindow *ui;
    QMenu *menu;

};

#endif // MAINWINDOW_H
