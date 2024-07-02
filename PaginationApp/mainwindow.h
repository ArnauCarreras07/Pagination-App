#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFileInfo>

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

private:
    Ui::MainWindow *ui;
    QFileInfo input;
    QString output;
};
#endif // MAINWINDOW_H
