#include "optiondialog.h"
#include "ui_optiondialog.h"

OptionDialog::OptionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OptionDialog)
{
    ui->setupUi(this);
}

OptionDialog::~OptionDialog()
{
    delete ui;
}

void OptionDialog::setName( QString name ){
    ui->lineEdit->setText( name );
}

QString OptionDialog::getName(){
    return ui->lineEdit->text();
}

void OptionDialog::setR( unsigned int R ){
    QString Rs = QString::number(R);
    ui->lineEdit_2->setText( Rs );
}

unsigned int OptionDialog::getR(){
    unsigned int Rs = (ui->lineEdit_2->text()).toInt();
    return Rs;
}

void OptionDialog::setG( unsigned int G ){
    QString Gs = QString::number(G);
    ui->lineEdit_3->setText( Gs );
}

unsigned int OptionDialog::getG(){
    unsigned int Gs = (ui->lineEdit_2->text()).toInt();
    return Gs;
}

void OptionDialog::setB( unsigned int B ){
    QString Bs = QString::number(B);
    ui->lineEdit_4->setText( Bs );
}

unsigned int OptionDialog::getB(){
    unsigned int Bs = (ui->lineEdit_2->text()).toInt();
    return Bs;
}

void OptionDialog::setVisibleDialog( bool visible ){
    ui->checkBox->QAbstractButton::setChecked( visible );
}

bool OptionDialog::getVisible(){
    return ui->checkBox->isChecked();
}
