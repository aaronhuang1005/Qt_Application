#include "dialog.h"
#include "./ui_dialog.h"
#include <QDesktopServices>
#include <QKeyEvent>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui-> setupUi(this);
    ui -> anser -> setText(tr("Hello World !!"));
    showtext = "";
    status = false;

    connect(ui -> clean,SIGNAL(clicked()),this,SLOT(cleanText()));
    connect(ui -> super_2,SIGNAL(clicked()),this,SLOT(surprise()));
    connect(ui -> num0,SIGNAL(clicked()),this,SLOT(add0()));
    connect(ui -> num1,SIGNAL(clicked()),this,SLOT(add1()));
    connect(ui -> num2,SIGNAL(clicked()),this,SLOT(add2()));
    connect(ui -> num3,SIGNAL(clicked()),this,SLOT(add3()));
    connect(ui -> num4,SIGNAL(clicked()),this,SLOT(add4()));
    connect(ui -> num5,SIGNAL(clicked()),this,SLOT(add5()));
    connect(ui -> num6,SIGNAL(clicked()),this,SLOT(add6()));
    connect(ui -> num7,SIGNAL(clicked()),this,SLOT(add7()));
    connect(ui -> num8,SIGNAL(clicked()),this,SLOT(add8()));
    connect(ui -> num9,SIGNAL(clicked()),this,SLOT(add9()));
    connect(ui -> dot,SIGNAL(clicked()),this,SLOT(add_dot()));
    connect(ui -> del,SIGNAL(clicked()),this,SLOT(delete_text()));
    connect(ui -> plus,SIGNAL(clicked()),this,SLOT(plusnum()));
    connect(ui -> minus,SIGNAL(clicked()),this,SLOT(minusnum()));
    connect(ui -> time,SIGNAL(clicked()),this,SLOT(timenum()));
    connect(ui -> divide,SIGNAL(clicked()),this,SLOT(dividenum()));
    connect(ui -> cal,SIGNAL(clicked()),this,SLOT(enter()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::surprise(){
    QString link = "https://www.youtube.com/watch?v=xvFZjo5PgG0";
    QDesktopServices::openUrl(QUrl(link));
}

void Dialog::cleanText(){
    ui -> anser -> setText(tr(""));
    showtext = "";
    numbers.clear();
    qDebug() << numbers;
}

void Dialog::add9(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "9";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add0(){
    showtext += "0";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add8(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "8";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add7(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "7";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add6(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "6";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add5(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "5";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add4(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "4";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add3(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "3";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add2(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "2";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add1(){
    if(showtext.startsWith("0") && showtext.contains(".",Qt::CaseSensitive) == false){
        showtext = showtext.right(showtext.size()-1);
    }
    showtext += "1";
    ui -> anser -> setText(showtext);
    check();
}

void Dialog::add_dot(){
    if(showtext.contains(".",Qt::CaseSensitive) == true){
        showtext.replace(".","");
        ui -> anser -> setText(showtext);
    }else if(showtext.isEmpty() == true){
        showtext += "0.";
        ui -> anser -> setText(showtext);
    }else{
        showtext+=".";
        ui -> anser -> setText(showtext);
    }
}

void Dialog::delete_text(){
    if(showtext.isEmpty() != true){
        showtext = showtext.left(showtext.size()-1);
        //qDebug() << showtext.left(showtext.size()-1);
        ui -> anser -> setText(showtext);
        check();
    }

}

void Dialog::plusnum(){
    if(showtext.isEmpty() != true && QString::compare(showtext, "0.", Qt::CaseSensitive) != 0){
        numbers.append(showtext);
        numbers.append("+");
        showtext = "";
        //ui -> anser -> setText(showtext);
        qDebug() << numbers;
    }
}

void Dialog::minusnum(){
    if(showtext.isEmpty() != true && QString::compare(showtext, "0.", Qt::CaseSensitive) != 0){
        numbers.append(showtext);
        numbers.append("-");
        showtext = "";
        //ui -> anser -> setText(showtext);
        qDebug() << numbers;
    }
}

void Dialog::timenum(){
    if(showtext.isEmpty() != true && QString::compare(showtext, "0.", Qt::CaseSensitive) != 0){
        numbers.append(showtext);
        numbers.append("*");
        showtext = "";
        //ui -> anser -> setText(showtext);
        qDebug() << numbers;
    }
}

void Dialog::dividenum(){
    if(showtext.isEmpty() != true && QString::compare(showtext, "0.", Qt::CaseSensitive) != 0){
        numbers.append(showtext);
        numbers.append("/");
        showtext = "";
        //ui -> anser -> setText(showtext);
        qDebug() << numbers;
    }
}

void Dialog::enter(){
    if(showtext.isEmpty() != true && QString::compare(showtext, "0.", Qt::CaseSensitive) != 0){
        numbers.append(showtext);
        qDebug() << numbers;
    }
    int i,n = numbers.size();
    double a,b;
    for(i = 0; i < n-1; i++){
        qDebug() << i << numbers[i] << numbers;
        if(QString::compare(numbers[i], "+", Qt::CaseSensitive) == 0){
            a = numbers[i-1].toDouble();
            b = numbers[i+1].toDouble();
            numbers[i+1] = QString::number(a+b);
        }else if(QString::compare(numbers[i], "-", Qt::CaseSensitive) == 0){
            a = numbers[i-1].toDouble();
            b = numbers[i+1].toDouble();
            numbers[i+1] = QString::number(a-b);
        }else if(QString::compare(numbers[i], "*", Qt::CaseSensitive) == 0){
            a = numbers[i-1].toDouble();
            b = numbers[i+1].toDouble();
            numbers[i+1] = QString::number(a*b);
        }else if(QString::compare(numbers[i], "/", Qt::CaseSensitive) == 0){
            a = numbers[i-1].toDouble();
            b = numbers[i+1].toDouble();
            numbers[i+1] = QString::number(a/b);
        }
    }
    showtext = numbers[numbers.size()-1];
    ui -> anser -> setText(showtext);
    numbers.clear();
    showtext = "";

}

void Dialog::check(){
    QString link;
    if(QString::compare(showtext, "11025111", Qt::CaseSensitive) == 0){
        ui -> anser -> setText(tr("It's me XD"));
        link = "https://hackmd.io/@aaronhuang1005";
        QDesktopServices::openUrl(QUrl(link));
    }else if(QString::compare(showtext, "222", Qt::CaseSensitive) == 0){
        ui -> anser -> setText(tr("Sure it's Cat's Day :)"));
        link = "https://www.lovecats.tw/";
        QDesktopServices::openUrl(QUrl(link));
    }else if(QString::compare(showtext, "504", Qt::CaseSensitive) == 0){
        ui -> anser -> setText(tr("Star War !!!"));
        link = "https://www.starwars.com/";
        QDesktopServices::openUrl(QUrl(link));
    }else if((QString::compare(showtext, "8964", Qt::CaseSensitive) == 0) || (QString::compare(showtext, "64", Qt::CaseSensitive) == 0) || (QString::compare(showtext, "1989", Qt::CaseSensitive) == 0)){
        ui -> anser -> setText(tr("...Sensitive right...？"));
        link = "https://zh.wikipedia.org/zh-tw/%E5%85%AD%E5%9B%9B%E4%BA%8B%E4%BB%B6";
        QDesktopServices::openUrl(QUrl(link));
    }else if(QString::compare(showtext, "1005", Qt::CaseSensitive) == 0){
        ui -> anser -> setText(tr("Happy birthday to me !!!"));
        link = "https://www.instagram.com/aaron.huang1005?igsh=MXJzd2g2Y2ZoOHpqYQ==";
        QDesktopServices::openUrl(QUrl(link));
    }else if(QString::compare(showtext, "980049", Qt::CaseSensitive) == 0){
        ui -> anser -> setText("******");
        status = true;
    }else if(QString::compare(showtext, "11025123", Qt::CaseSensitive) == 0){
        link = "https://www.instagram.com/joy_yu.jie?igsh=b2loeXNteXRvdmpy";
        QDesktopServices::openUrl(QUrl(link));
    }else if(QString::compare(showtext, "11025212", Qt::CaseSensitive) == 0){
        link = "https://www.instagram.com/hank455326?igsh=MWc4NWhoejJ1OGd4Mg==";
        QDesktopServices::openUrl(QUrl(link));
    }
    else if(QString::compare(showtext, "11025112", Qt::CaseSensitive) == 0){
        link = "https://www.instagram.com/_jeterl?igsh=MXFmencxOXBrcndocw==";
        QDesktopServices::openUrl(QUrl(link));
    }
    else if(QString::compare(showtext, "11025129", Qt::CaseSensitive) == 0){
        link = "https://www.instagram.com/_nuyil__?igsh=MXhtMDVqeGs0b3NiZQ==";
        QDesktopServices::openUrl(QUrl(link));
    }
    else if(QString::compare(showtext, "11025116", Qt::CaseSensitive) == 0){
        link = "https://www.instagram.com/ian___75?igsh=dHFwbDdoOXQ2MXJi";
        QDesktopServices::openUrl(QUrl(link));
    }
    else if(QString::compare(showtext, "1314", Qt::CaseSensitive) == 0){
        ui -> anser -> setText("Love you too :)");
    }
}

void Dialog::keyPressEvent(QKeyEvent *e) {
    //qDebug() << e->key();
    switch (e->key()) {
    case 48:
        add0();
        break;
    case 49:
        add1();
        break;
    case 50:
        add2();
        break;
    case 51:
        add3();
        break;
    case 52:
        add4();
        break;
    case 53:
        add5();
        break;
    case 54:
        add6();
        break;
    case 55:
        add7();
        break;
    case 56:
        add8();
        break;
    case 57:
        add9();
        break;
    case 46:
        add_dot();
        break;
    case 43:
        plusnum();
        break;
    case 45:
        minusnum();
        break;
    case 47:
        dividenum();
        break;
    case 42:
        timenum();
        break;
    case 61:
        enter();
        break;
    case Qt::Key_Enter:
        enter();
        break;
    case Qt::Key_Return:
        enter();
        break;
    case Qt::Key_Backspace:
        delete_text();
        break;
    case Qt::Key_Delete:
        delete_text();
        break;
    case Qt::Key_C:
        cleanText();
        break;
    default:
        ui -> anser -> setText("Not a number... It's hard to write code, bro");
        break;
    }
}

