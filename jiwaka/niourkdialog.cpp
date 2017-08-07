#include "niourkdialog.h"
#include "ui_niourkdialog.h"

NiourkDialog::NiourkDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NiourkDialog)
{
    ui->setupUi(this);
}

NiourkDialog::~NiourkDialog()
{
    delete ui;
}
