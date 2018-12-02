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
    ui->lineEditState->setEnabled(false);
    setFixedSize(284,209);


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


    //通过文件对话框选择一个路径回来
    dirName = QFileDialog::getExistingDirectory(NULL,currentDir,".");
    qDebug() << dirName << endl;

    //在项目路径lineEdit中显示路径
    ui->lineEditDirpah->setText(dirName + "/" + Widget::projectName);
    //进入到该路径
    if(tempDir.cd(dirName))
    {
        qDebug() << "ture:" << dirName << endl;
    }
    else
    {
        qDebug() << "false:" << dirName << endl;
    }
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
    if((NULL != dirName) && (NULL != projectName))
    {
        QString currentDir = dirName;
        //如果路径不存在，则创建它
        if(!tempDir.exists(Widget::projectName))
        {
            qDebug() << "该路径不存在" << endl;
            //创建文件夹
            tempDir.mkdir(Widget::projectName);
            qDebug() << "创建该文件夹" << endl;
            //获取当前路径
    //        currentDir = tempDir.currentPath();
    //        currentDir += "/";
    //        currentDir += Widget::projectName;
    //        qDebug() << currentDir << endl;
            //跳到当前路径
    //        tempDir.setPath(dirName + "/" + Widget::projectName);
    //        //创建文件夹
    //        if(!tempDir.exists("Design"))
    //        tempDir.mkdir("Design");
    //        if(!tempDir.exists("项目计划"))
    //        tempDir.mkdir("项目计划");

    //        currentDir = tempDir.currentPath();
    //        qDebug() << "是否进入相应目录" << currentDir << endl;
    //        QDir dir(currentDir);
            currentDir += "/" + Widget::projectName + "/";
            tempDir.mkpath(currentDir + "Design");//创建多级目录
            tempDir.mkpath(currentDir + "ProPlan");//创建多级目录
            tempDir.mkpath(currentDir + "ProReq");//创建多级目录

            currentDir = currentDir + "/" + "Design" + "/";
            tempDir.mkpath(currentDir + "HardWare");//创建多级目录
            tempDir.mkpath(currentDir + "SoftWare");//创建多级目录
        }
        this->close();
    }
    else
    {
        projectName = ui->lineEditProName->text();
        if(NULL == projectName)
        ui->lineEditState->setText("请选择项目名称!");
        else if(NULL == dirName)
        ui->lineEditState->setText("请选择项目路径!");
//        ui->lineEditState->setText("Place chose project directory!");

    }

}
//取消按键
void Widget::on_pushButtonDelet_clicked()
{
    this->close();
}
