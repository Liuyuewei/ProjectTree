#include "widget.h"
#include "ui_widget.h"
#include <QDir>     //包含文件夹相关类
#include <QDebug>
#include <QFileDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置窗口大小，最大和最小一样，则无法托拽
//    setMinimumSize(284,191);
//    setMaximumSize(284,191);
    //两种方法都可以
    setFixedSize(284,191);


}

Widget::~Widget()
{
    delete ui;
}

//创建文件夹
void creatDirectory(QString dirPash,QString dirNmae)
{
    QDir tempDir;

    //临时保存程序当前路径
    QString currentDir = tempDir.currentPath();
    //如果路径不存在，则创建它
    if(!tempDir.exists(dirPash))
    {
        qDebug() << "该路径不存在" << endl;
        //创建路径
        tempDir.mkpath(dirPash);
    }
}
//打开计算机选择路径
void Widget::on_pushButtonDirSlect_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        NULL,
                                                        tr("txtFile (*.* *.txt)"));
}
//确认按键
void Widget::on_pushButtonConfirm_clicked()
{

}
//取消按键
void Widget::on_pushButtonDelet_clicked()
{

}
