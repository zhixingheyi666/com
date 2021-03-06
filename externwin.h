#ifndef EXTERNWIN_H
#define EXTERNWIN_H

#include <QWidget>

namespace Ui {
class ExternWin;
}

class ExternWin : public QWidget
{
    Q_OBJECT

public:
    explicit ExternWin(QWidget *parent = 0);
    ~ExternWin();
protected:
        virtual void mousePressEvent(QMouseEvent *event);
        virtual void mouseReleaseEvent(QMouseEvent *event);
public:
    void initForm();
    void initConfig();
private slots:
    void write();
    void load();
private:
    Ui::ExternWin *ui;
};

#endif // EXTERNWIN_H
