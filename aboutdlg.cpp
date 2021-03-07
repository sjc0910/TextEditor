#include "aboutdlg.h"
#include "ui_aboutdlg.h"

AboutDlg::AboutDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDlg)
{
    ui->setupUi(this);
}

AboutDlg::~AboutDlg()
{
    delete ui;
}

void AboutDlg::on_close_clicked()
{
    this->close();
    this->deleteLater();
}

void AboutDlg::closeEvent(QCloseEvent *event) {
    this->close();
    this->deleteLater();
    event->accept();
}
