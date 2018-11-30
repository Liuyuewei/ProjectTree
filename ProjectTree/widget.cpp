#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFileDialog>
#include <QDesktopServices>

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
void Widget::creatDirectory()
{

    //临时保存程序当前路径
    QString currentDir = tempDir.currentPath();
    qDebug() << currentDir << endl;

    //打开上面获取的目录
//    QDesktopServices::openUrl(QUrl(currentDir));

    //定义一个文件夹路径
    QString dirName;
    //通过文件对话框选择一个路径回来
    dirName = QFileDialog::getExistingDirectory(NULL,currentDir,".");
    qDebug() << dirName << endl;

    //在项目路径lineEdit中显示路径
    ui->lineEditDirpah->setText(dirName + "/" + Widget::projectName);
    //进入到该路径
    tempDir.cd(dirName);

}
//打开计算机选择路径
void Widget::on_pushButtonDirSlect_clicked()
{
    //获取项目文件夹名称
    Widget::projectName = ui->lineEditProName->text();
    qDebug() << projectName << endl;
    creatDirectory();
}
//确认按键
void Widget::on_pushButtonConfirm_clicked()
{
    QString currentDir;
    //如果路径不存在，则创建它
    if(!tempDir.exists(Widget::projectName))
    {
        qDebug() << "该路径不存在" << endl;
        //创建文件夹
        tempDir.mkdir(Widget::projectName);
        qDebug() << "创建该文件夹" << endl;
        //获取当前路径
        currentDir = tempDir.currentPath();
        currentDir += "/";
        currentDir += Widget::projectName;
        qDebug() << currentDir << endl;
        //跳到当前路径
        tempDir.cd(currentDir);
        //创建文件夹
        if(!tempDir.exists("Design"))
        tempDir.mkdir("Design");
        if(!tempDir.exists("项目计划"))
        tempDir.mkdir("项目计划");

    }
    this->close();
}
//取消按键
void Widget::on_pushButtonDelet_clicked()
{
    this->close();
}
