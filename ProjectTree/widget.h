#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDir>     //包含文件夹相关类

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    QDir tempDir;
    //项目文件名
    QString projectName;

    //定义一个文件夹路径
    QString dirName;

    //创建文件夹路径
    void creatDirectory();
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButtonDirSlect_clicked();

    void on_pushButtonConfirm_clicked();

    void on_pushButtonDelet_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
