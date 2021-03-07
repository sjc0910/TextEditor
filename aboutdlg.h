#ifndef ABOUTDLG_H
#define ABOUTDLG_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class AboutDlg;
}

class AboutDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDlg(QWidget *parent = nullptr);
    ~AboutDlg();

private slots:
    void on_close_clicked();

private:
    Ui::AboutDlg *ui;

protected:
    void closeEvent(QCloseEvent *) override;
};

#endif // ABOUTDLG_H
