#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "arcrypt.h"
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(434, 336);
    setWindowTitle("AR Crypt 1.1");
    ui->leftEditor->setFont(QFont("Courier New", 10));
    ui->rightEditor->setFont(QFont("Courier New", 10));
    
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(aboutDialog()));
    connect(ui->actionTXTtoXPC, SIGNAL(triggered()), this, SLOT(fileToXPC()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::aboutDialog()
{
    QMessageBox::about(this, "About ARCrypt...", "ARCrypt v1.1\n\nProgrammed by onilink_ with Qt 4.6.\n\n"
                             "AR v1/2/3 code encryption algorithms\nwritten by Parasyte.\n");
}

void MainWindow::fileToXPC()
{
    static QString path = "";
    QString fname = QFileDialog::getOpenFileName(this, "Open", path, "Text files (*.txt);;All files (*.*)", 0);
    if(fname.isEmpty())
        return;
    
    path = fname.left(fname.lastIndexOf("/")+1);
    QMessageBox::about(this, "", path);
}

QString MainWindow::encryptLine(QString in, bool decrypt, bool v3)
{
    bool ok;
    unsigned int adress = in.left(8).toUInt(&ok, 16);
    unsigned int value = in.right(8).toUInt(&ok, 16);
    
    v3enc = v3;
    deadface(0x0000);
    if(decrypt)
        decrypt_code(&adress, &value);
    else
        encrypt_code(&adress, &value);
    
    QString ret, strAdress, strValue;
    strAdress.setNum(adress, 16);
    strValue.setNum(value, 16);
    
    while(strAdress.length() < 8)
        strAdress.prepend("0");
    while(strValue.length() < 8)
        strValue.prepend("0");
    
    return strAdress.toUpper() + strValue.toUpper();
}

void MainWindow::on_pushButton_clicked()
{
    QString in = ui->leftEditor->toPlainText();
    in.replace(" ", "");
    in.replace("\n", "");
    
    // Check code
    bool err = false;
    for(int i=0; i<in.length(); i++)
    {
        QChar c = in.at(i);
        if((c>='0' && c<='9') || (c>='a' && c<='f') || (c>='A' && c<='F'));
        else {
            err = true;
            break;
        }
    }
    
    if(err) {
        ui->rightEditor->setText("");
        return;
    }
    
    QString ret;
    while(in.length() >= 16)
    {
        QString convert = in.left(16);
        in.remove(0, 16);
        
        // Decrypt
        if(ui->radioButtonLeftARv1->isChecked())
            convert = encryptLine(convert, true, false);
        else
        if(ui->radioButtonLeftARv3->isChecked())
            convert = encryptLine(convert, true, true);
        
        // Encrypt
        if(ui->radioButtonRightARv1->isChecked())
            convert = encryptLine(convert, false, false);
        else 
        if(ui->radioButtonRightARv3->isChecked())
            convert = encryptLine(convert, false, true);
        
        // Format
        if(ui->radioButtonFormat2->isChecked())
            convert.insert(8, " ");
        else if(ui->radioButtonFormat3->isChecked())
            convert.insert(8, "\n");
        
        ret += convert + "\n";
    }
    
    ui->rightEditor->setText(ret);
}

void MainWindow::on_pushButton_2_clicked()
{
    int checkL, checkR;
    checkL = ui->radioButtonLeftARv1->isChecked()
           + ui->radioButtonLeftARv3->isChecked()*2
           + ui->radioButtonLeftRAW->isChecked()*3;
    checkR = ui->radioButtonRightARv1->isChecked()
           + ui->radioButtonRightARv3->isChecked()*2
           + ui->radioButtonRightRAW->isChecked()*3;
    switch(checkL) {
        case 1: ui->radioButtonRightARv1->setChecked(true); break;
        case 2: ui->radioButtonRightARv3->setChecked(true); break;
        case 3: ui->radioButtonRightRAW->setChecked(true); break;
    }
    switch(checkR) {
        case 1: ui->radioButtonLeftARv1->setChecked(true); break;
        case 2: ui->radioButtonLeftARv3->setChecked(true); break;
        case 3: ui->radioButtonLeftRAW->setChecked(true); break;
    }
}
