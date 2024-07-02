#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::browse() {
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "",
    tr("All Files (*);;Text Files (*.txt)"));
    QFileInfo fileInfo(filename);
    this->input = fileInfo;
    emit fileName(fileInfo.fileName());
}

void MainWindow::receiveOutputName(const QString &output) {
    this->output = output;
}

