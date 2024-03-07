#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect( ui->pushButton, &QPushButton::released, this, &MainWindow::handleButton1);
    connect( ui->pushButton_2, &QPushButton::released, this, &MainWindow::handleButton2);
    connect( ui->treeView, &QTreeView::clicked, this, &MainWindow::handleTreeClicked);
    connect( this, &MainWindow::statusUpdateMessage, ui->statusbar, &QStatusBar::showMessage );

    /* Create / allocate the ModelList */
    this -> partList = new ModelPartList("PartsList");

    /* Link it to the treeview in the GUI */
    ui->treeView->setModel(this->partList);

    /*Manually create a model tree - there a much better and more flexible ways of doing
      this,
      e.g. with nested functions. This is just a quick example of a starting point. */
    ModelPart *rootItem = this->partList->getRootItem();

    /* Add 3 top level items */
    for(int i = 0; i<3; i++){
        /* Create strings for both data columns */
        QString name = QString("TopLevel %1").arg(i);
        QString visible("true");

        /* Create child item */
        ModelPart *childItem = new ModelPart({ name, visible });

        /* Append to tree top-level */
        rootItem->appendChild(childItem);

        /* Add 5 sub-items */
        for(int j = 0; j<5; j++){
            QString name = QString("Item %1,%2").arg(i).arg(j);
            QString visible("true");

            ModelPart *childChildItem = new ModelPart({ name, visible });

            /* Append to parent */
            childItem->appendChild(childChildItem);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButton1() {
    emit statusUpdateMessage( QString("Button 1 was clicked"), 0 );
}

void MainWindow::handleButton2() {
    emit statusUpdateMessage( QString("Button 2 was clicked"), 0 );
}

void MainWindow::handleTreeClicked() {
    /* Get the index of the selected item */
    QModelIndex index = ui->treeView->currentIndex();

    /* Get a pointer to the item from the index */
    ModelPart *selectedPart = static_cast<ModelPart*>(index.internalPointer());

    /* In this case, we will retrieve the name string from the internal QVariant data array */
    QString text = selectedPart->data(0).toString();

    emit statusUpdateMessage(QString("The seledcted item is: ")+text, 0);
}

void MainWindow::on_actionOpen_File_triggered()
{
    // Checking action works
    emit statusUpdateMessage( QString( "Open file action triggered" ),0 );
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open File"),
        "C:\\",
        tr("STL Files(*.stl);;Text Files(*.txt)") );
    emit statusUpdateMessage( QString(fileName),0 );
}

