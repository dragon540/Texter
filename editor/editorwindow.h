#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#include "editor/newfile.h"

#include <QMainWindow>

namespace Ui {
class EditorWindow;
}

class EditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditorWindow(QWidget *parent = 0);
    ~EditorWindow();

private slots:
    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionSave_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_Existing_triggered();

    void openExisting();
    void openExisting(std::string path);

    void openNew(QString filepath);

    void setName(QString text);
private:
    Ui::EditorWindow *ui;
    Newfile *nf;
    QString filename;
    QString file;
};

#endif // EDITORWINDOW_H
