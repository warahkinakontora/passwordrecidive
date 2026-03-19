#ifndef WEX_H
#define WEX_H

#include <QWidget>

namespace Ui {
class wex;
}

class wex : public QWidget
{
    Q_OBJECT

public:
    explicit wex(QWidget *parent = nullptr);
    ~wex();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wex *ui;
};

#endif // WEX_H
