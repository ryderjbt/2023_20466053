#ifndef OPTIONDIALOG_H
#define OPTIONDIALOG_H

#include <QDialog>


namespace Ui {
class OptionDialog;
}

class OptionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OptionDialog(QWidget *parent = nullptr);
    ~OptionDialog();
    void setName( QString );
    QString getName();
    void setR( unsigned int );
    unsigned int getR();
    void setG( unsigned int );
    unsigned int getG();
    void setB( unsigned int );
    unsigned int getB();
    void setVisibleDialog( bool );
    bool getVisible();


private:
    Ui::OptionDialog *ui;
};

#endif // OPTIONDIALOG_H
