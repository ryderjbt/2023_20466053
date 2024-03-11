#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

#include <vtkRenderer.h>
#include <vtkGenericOpenGLRenderWindow.h>

#include "ModelPartList.h"
#include "ModelPart.h"
#include "optiondialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void handleButton1();
    void handleButton2();
    void handleTreeClicked();

signals:
    void statusUpdateMessage( const QString & message, int timeout );

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_File_triggered();
    void on_actionItem_Options_triggered();

private:
    Ui::MainWindow *ui;
    ModelPartList* partList;

    vtkSmartPointer<vtkRenderer> renderer;
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> renderWindow;
};
#endif // MAINWINDOW_H
