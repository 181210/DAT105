#include "composewindow.h"
#include "ui_composewindow.h"

ComposeWindow::ComposeWindow()

{
   //Declare all the layouts
    mainLayout = new QHBoxLayout(this);
    spinLayout = new QHBoxLayout();
    leftLayout = new QVBoxLayout();
    editLayout = new QVBoxLayout();
    radioLayout = new QVBoxLayout();
    rightLayout = new QVBoxLayout();
    addressLayout = new QGridLayout();

    //Address area
    QLabel *labelTo = new QLabel("To: ");
    QLabel *labelSubject = new QLabel("Subject:");
    QLabel *labelCC = new QLabel("CC: ");
    lineAddress = new QLineEdit();
    lineSubject = new QLineEdit();
    lineCC = new QLineEdit();
    labelTo->setBuddy(lineAddress);
    labelSubject->setBuddy(lineSubject);
    labelSubject->setBuddy(lineCC);
    addressLayout->addWidget(labelTo, 0, 0);
    addressLayout->addWidget(lineAddress, 0, 1);
    addressLayout->addWidget(labelSubject, 2, 0);
    addressLayout->addWidget(lineSubject, 2, 1);
    addressLayout->addWidget(labelCC, 1, 0);
    addressLayout->addWidget(lineCC, 1, 1);
    leftLayout->addLayout(addressLayout);

    //Spin boxes
    QLabel *labelFont = new QLabel("&Font:");
    comboBoxFont = new QComboBox();
    comboBoxFont->insertItem(0,"Times New Roman");
    comboBoxFont->insertItem(1,"Arial");
    comboBoxFont->insertItem(2,"Courier");
    labelFont->setBuddy(comboBoxFont);
    spinLayout->addWidget(labelFont);
    spinLayout->addWidget(comboBoxFont);
    QLabel* labelStyle = new QLabel("St&yle:");
    comboBoxStyle = new QComboBox();
    comboBoxStyle->insertItem(0,"Heading 1");
    comboBoxStyle->insertItem(1,"Heading 2");
    comboBoxStyle->insertItem(2,"Heading 3");
    labelStyle->setBuddy(comboBoxStyle);
    spinLayout->addWidget(labelStyle);
    spinLayout->addWidget(comboBoxStyle);
    spinLayout->addStretch(10);
    leftLayout->addLayout(spinLayout);

    //Edit Area
    textEdit = new QTextEdit();
    QLabel *label = new QLabel();
    label->setFrameStyle(QFrame::Sunken|QFrame::Box);
    editLayout->addWidget(textEdit);
    editLayout->addWidget(label);
    leftLayout->addLayout(editLayout);

    //Radio buttons
    QLabel *labelMode = new QLabel("Edit mode");
    rbutton1 = new QRadioButton("HTML");
    rbutton2 = new QRadioButton("Rich Text");
    rbutton3 = new QRadioButton("Plain Text");
    buttonGroup1 = new QButtonGroup();
    buttonGroup1->addButton(rbutton1);
    buttonGroup1->addButton(rbutton2);
    buttonGroup1->addButton(rbutton3);
    rightLayout->addWidget(labelMode);
    rightLayout->addWidget(rbutton1);
    rightLayout->addWidget(rbutton2);
    rightLayout->addWidget(rbutton3);

    //Push buttons
    buttonSend = new QPushButton("&Send");
    buttonCancel = new QPushButton("&Cancel");
    rightLayout->addStretch();
    rightLayout->addWidget(buttonCancel);
    rightLayout->addWidget(buttonSend);

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setWindowTitle("Compose Message");
    resize(600,400);

}

ComposeWindow::~ComposeWindow()
{

}
