#include "editor.h"
#include "aboutdlg.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}


void Editor::on_actionAbout_TextEditor_triggered()
{
    AboutDlg *about = new AboutDlg();
    about->show();
}
