#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFileInfo>
#include <QDir>
#include "paginate.hpp"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void fileName(const QString &filename);

public slots:
    void browse();
    void receiveOutputName(const QString &output);
    void paginate();

private:
    Ui::MainWindow *ui;
    QFileInfo input;
    QString output;
    Paginate p = Paginate();
    Dialog message;
};
#endif // MAINWINDOW_H
