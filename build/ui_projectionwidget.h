/********************************************************************************
** Form generated from reading UI file 'projectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTIONWIDGET_H
#define UI_PROJECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *ProjectionWidget)
    {
        if (ProjectionWidget->objectName().isEmpty())
            ProjectionWidget->setObjectName(QString::fromUtf8("ProjectionWidget"));
        ProjectionWidget->resize(800, 600);
        verticalLayout = new QVBoxLayout(ProjectionWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(ProjectionWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(ProjectionWidget);

        QMetaObject::connectSlotsByName(ProjectionWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectionWidget)
    {
        ProjectionWidget->setWindowTitle(QCoreApplication::translate("ProjectionWidget", "ProjectionWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectionWidget: public Ui_ProjectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTIONWIDGET_H
