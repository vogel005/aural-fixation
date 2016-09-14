#include "filechooser.h"
#include "ui_filechooser.h"

FileChooser::FileChooser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileChooser)
{
    ui->setupUi(this);
}

FileChooser::~FileChooser()
{
    delete ui;
}
