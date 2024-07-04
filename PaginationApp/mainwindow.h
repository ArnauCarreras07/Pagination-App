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
    //Action: sending the input filename to other
    //        widgets.
    void fileName(const QString &filename);

public slots:
    //Action: Opens a QFileDialog to search for the
    //        input file in the system file browser.
    void browse();

    //Action: Receives the output file name and stores
    //        it in "output".
    void receiveOutputName(const QString &output);

    //Action: Calls the Paginate module p to paginate
    //        the input file(if provided one) and search
    //        the result in the same directory as input,
    //        with name "output" (format: .txt).
    void paginate();

private:
    Ui::MainWindow *ui;
    QFileInfo input;
    QString output;
    Paginate p = Paginate();
    Dialog message;
};
#endif // MAINWINDOW_H
