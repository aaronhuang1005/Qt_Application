#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QString showtext;
    QList<QString> numbers;
    void check();
    bool status;

private slots:
    void surprise();
    void cleanText();
    void add9();
    void add0();
    void add8();
    void add7();
    void add6();
    void add5();
    void add4();
    void add3();
    void add2();
    void add1();
    void add_dot();
    void delete_text();
    void plusnum();
    void minusnum();
    void timenum();
    void dividenum();
    void enter();

protected:
    void keyPressEvent(QKeyEvent *);
};
#endif // DIALOG_H
