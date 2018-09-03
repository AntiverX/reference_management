#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qsplitter.h"
#include "QListView"
#include "QTreeView"
#include "QTextEdit"
#include "QStandardItemModel"
#include "buttonListWidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->menu_close, &QAction::triggered, this, &QMainWindow::close);
    QStandardItemModel *table_model = new QStandardItemModel(this);
    table_model->setColumnCount(3);
    table_model->setHeaderData(0,Qt::Horizontal,u8"作者");
    table_model->setHeaderData(1,Qt::Horizontal,u8"年份");
    table_model->setHeaderData(2,Qt::Horizontal,u8"题目");
    ui->tableView->setModel(table_model);

    ui->tableView->horizontalHeader()->setHighlightSections(false);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->horizontalHeader()->setSectionsMovable(true);
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,100);
    ui->tableView->setColumnWidth(2,400);

    ui->splitter->setStretchFactor(0, 2);
    ui->splitter->setStretchFactor(1, 4);
    ui->splitter->setStretchFactor(2, 1);

    //tableview添加内容
    table_model->setItem(0,0,new QStandardItem(u8"陶耀东、李宁、曾广圣"));
    table_model->setItem(0,1,new QStandardItem(u8"2016"));
    table_model->setItem(0,2,new QStandardItem(u8"工业控制系统安全综述"));

    QStringList strList;
    strList << "hello";
    strList << "world";
    buttonListWidget *buttonList = new buttonListWidget(this);
    buttonList->initWidget(strList);
    ui->scrollArea->setWidget(buttonList);
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_triggered()
{

}
