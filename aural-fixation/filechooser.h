#ifndef FILECHOOSER_H
#define FILECHOOSER_H

#include <QDialog>

namespace Ui {
class FileChooser;
}

class FileChooser : public QDialog
{
    Q_OBJECT

public:
    explicit FileChooser(QWidget *parent = 0);
    ~FileChooser();

private:
    Ui::FileChooser *ui;
};

#endif // FILECHOOSER_H
