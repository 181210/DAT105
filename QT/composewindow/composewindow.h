#ifndef COMPOSEWINDOW_H
#define COMPOSEWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QGridLayout>
#include <QComboBox>
#include <QTextEdit>
#include <QRadioButton>
#include <QButtonGroup>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QFrame>

namespace Ui {
class ComposeWindow;
}

class ComposeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ComposeWindow();
    ~ComposeWindow();

private:
    Ui::ComposeWindow *ui;
    QHBoxLayout *mainLayout;
    QHBoxLayout *spinLayout;
    QVBoxLayout *leftLayout;
    QVBoxLayout *editLayout;
    QVBoxLayout *radioLayout;
    QVBoxLayout *rightLayout;
    QGridLayout *addressLayout;
    QLineEdit *lineAddress;
    QLineEdit *lineSubject;
    QLineEdit *lineCC;
    QComboBox *comboBoxFont;
    QComboBox *comboBoxStyle;
    QTextEdit *textEdit;
    QRadioButton *rbutton1;
    QRadioButton *rbutton2;
    QRadioButton *rbutton3;
    QButtonGroup *buttonGroup1;
    QPushButton *buttonSend;
    QPushButton *buttonCancel;

};

#endif // COMPOSEWINDOW_H
