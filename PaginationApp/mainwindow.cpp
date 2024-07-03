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

void MainWindow::paginate() {
    if (input.size() > 0) {
        if (output.isEmpty()) output = QString("out");
        string outputName = output.toStdString();
        outputName = outputName + ".txt";

        QDir directory = input.dir();
        string dirName = directory.absolutePath().toStdString();

        string inputPath = input.absoluteFilePath().toStdString();
        string outputPath = dirName + "/" + outputName;

        qDebug() << QString::fromStdString(inputPath);
        qDebug() << QString::fromStdString(outputPath);

        p.paginateSourceToDestination(inputPath, outputPath);
    }
}

