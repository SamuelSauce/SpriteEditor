/********************************************************************************
** Form generated from reading UI file 'spriteview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRITEVIEW_H
#define UI_SPRITEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <spritecanvas.h>

QT_BEGIN_NAMESPACE

class Ui_SpriteView
{
public:
    QAction *actionaddButton;
    QWidget *centralWidget;
    SpriteCanvas *canvas;
    QWidget *layoutWidget;
    QGridLayout *menu;
    QPushButton *blankCanvasButton;
    QPushButton *saveButton;
    QPushButton *playButton;
    QPushButton *addButton;
    QPushButton *openButton;
    QPushButton *undoButton;
    QLabel *title;
    QWidget *layoutWidget_2;
    QGridLayout *tools;
    QPushButton *drawingButton;
    QPushButton *drawSquare;
    QPushButton *onionButton;
    QPushButton *colorButton;
    QPushButton *paintBucketButton;
    QPushButton *eraserButton;
    QFrame *frame;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *previewFrame;
    QButtonGroup *toolButtonGroup;
    QButtonGroup *otherButtonsGroup;

    void setupUi(QMainWindow *SpriteView)
    {
        if (SpriteView->objectName().isEmpty())
            SpriteView->setObjectName(QStringLiteral("SpriteView"));
        SpriteView->resize(750, 639);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SpriteView->sizePolicy().hasHeightForWidth());
        SpriteView->setSizePolicy(sizePolicy);
        SpriteView->setMinimumSize(QSize(750, 530));
        SpriteView->setMaximumSize(QSize(1000, 1000));
        SpriteView->setStyleSheet(QLatin1String(" QPushButton:checked {\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
" }\n"
"\n"
"QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #252526;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinear"
                        "Gradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
""
                        "    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1"
                        "e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as"
                        " the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
""
                        "      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin"
                        ": 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px "
                        "solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    s"
                        "pacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /"
                        "* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
""
                        "    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0,"
                        " y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox:"
                        ":indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        actionaddButton = new QAction(SpriteView);
        actionaddButton->setObjectName(QStringLiteral("actionaddButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/Images/Icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionaddButton->setIcon(icon);
        centralWidget = new QWidget(SpriteView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        canvas = new SpriteCanvas(centralWidget);
        canvas->setObjectName(QStringLiteral("canvas"));
        canvas->setGeometry(QRect(90, 50, 571, 471));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(canvas->sizePolicy().hasHeightForWidth());
        canvas->setSizePolicy(sizePolicy1);
        canvas->setStyleSheet(QLatin1String("border: 3px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"border-radius: 3px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(660, 120, 61, 331));
        menu = new QGridLayout(layoutWidget);
        menu->setSpacing(6);
        menu->setContentsMargins(11, 11, 11, 11);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setHorizontalSpacing(0);
        menu->setVerticalSpacing(1);
        menu->setContentsMargins(0, 0, 0, 0);
        blankCanvasButton = new QPushButton(layoutWidget);
        otherButtonsGroup = new QButtonGroup(SpriteView);
        otherButtonsGroup->setObjectName(QStringLiteral("otherButtonsGroup"));
        otherButtonsGroup->setExclusive(false);
        otherButtonsGroup->addButton(blankCanvasButton);
        blankCanvasButton->setObjectName(QStringLiteral("blankCanvasButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(blankCanvasButton->sizePolicy().hasHeightForWidth());
        blankCanvasButton->setSizePolicy(sizePolicy2);
        blankCanvasButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-left: none;\n"
"	border-radius: 0px;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/Images/Icons/blank-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        blankCanvasButton->setIcon(icon1);
        blankCanvasButton->setIconSize(QSize(40, 40));

        menu->addWidget(blankCanvasButton, 4, 0, 1, 1);

        saveButton = new QPushButton(layoutWidget);
        otherButtonsGroup->addButton(saveButton);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        sizePolicy2.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy2);
        saveButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-left: none;\n"
"	border-radius: 0px;\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/Images/Icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon2);
        saveButton->setIconSize(QSize(40, 40));

        menu->addWidget(saveButton, 2, 0, 1, 1);

        playButton = new QPushButton(layoutWidget);
        toolButtonGroup = new QButtonGroup(SpriteView);
        toolButtonGroup->setObjectName(QStringLiteral("toolButtonGroup"));
        toolButtonGroup->addButton(playButton);
        playButton->setObjectName(QStringLiteral("playButton"));
        sizePolicy2.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy2);
        playButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-left: none;\n"
"	border-radius: 0px;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/Images/Icons/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon3);
        playButton->setIconSize(QSize(40, 40));
        playButton->setCheckable(true);

        menu->addWidget(playButton, 8, 0, 1, 1);

        addButton = new QPushButton(layoutWidget);
        otherButtonsGroup->addButton(addButton);
        addButton->setObjectName(QStringLiteral("addButton"));
        sizePolicy2.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy2);
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QStringLiteral("Add Frame (CTRL + N)"));
#endif // QT_NO_TOOLTIP
        addButton->setToolTipDuration(-5);
        addButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-left: none;\n"
"	border-top-left-radius: 0px;\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/Images/Icons/add_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon4);
        addButton->setIconSize(QSize(40, 40));
        addButton->setFlat(true);

        menu->addWidget(addButton, 1, 0, 1, 1);

        openButton = new QPushButton(layoutWidget);
        otherButtonsGroup->addButton(openButton);
        openButton->setObjectName(QStringLiteral("openButton"));
        sizePolicy2.setHeightForWidth(openButton->sizePolicy().hasHeightForWidth());
        openButton->setSizePolicy(sizePolicy2);
        openButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-left: none;\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius:0px;\n"
"	border-bottom-left-radius: 0px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/Images/Icons/open-folder-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon5);
        openButton->setIconSize(QSize(40, 40));

        menu->addWidget(openButton, 10, 0, 1, 1);

        undoButton = new QPushButton(layoutWidget);
        otherButtonsGroup->addButton(undoButton);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        undoButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(undoButton->sizePolicy().hasHeightForWidth());
        undoButton->setSizePolicy(sizePolicy2);
        undoButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-left: none;\n"
"	border-radius: 0px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/Images/Icons/undo_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoButton->setIcon(icon6);
        undoButton->setIconSize(QSize(40, 40));

        menu->addWidget(undoButton, 3, 0, 1, 1);

        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(260, 10, 211, 31));
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QStringLiteral(""));
        title->setPixmap(QPixmap(QString::fromUtf8(":/icons/Images/Icons/spriteTitle.png")));
        title->setScaledContents(true);
        title->setAlignment(Qt::AlignCenter);
        title->setIndent(-1);
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 120, 61, 331));
        tools = new QGridLayout(layoutWidget_2);
        tools->setSpacing(6);
        tools->setContentsMargins(11, 11, 11, 11);
        tools->setObjectName(QStringLiteral("tools"));
        tools->setHorizontalSpacing(0);
        tools->setVerticalSpacing(1);
        tools->setContentsMargins(0, 0, 0, 0);
        drawingButton = new QPushButton(layoutWidget_2);
        toolButtonGroup->addButton(drawingButton);
        drawingButton->setObjectName(QStringLiteral("drawingButton"));
        sizePolicy2.setHeightForWidth(drawingButton->sizePolicy().hasHeightForWidth());
        drawingButton->setSizePolicy(sizePolicy2);
        drawingButton->setMaximumSize(QSize(59, 16777215));
        drawingButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-right: none;\n"
"	border-top-right-radius: 0px;\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/Images/Icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        drawingButton->setIcon(icon7);
        drawingButton->setIconSize(QSize(40, 40));
        drawingButton->setCheckable(true);
        drawingButton->setChecked(true);

        tools->addWidget(drawingButton, 0, 0, 1, 1);

        drawSquare = new QPushButton(layoutWidget_2);
        toolButtonGroup->addButton(drawSquare);
        drawSquare->setObjectName(QStringLiteral("drawSquare"));
        sizePolicy2.setHeightForWidth(drawSquare->sizePolicy().hasHeightForWidth());
        drawSquare->setSizePolicy(sizePolicy2);
        drawSquare->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-right: none;\n"
"	border-radius: 0px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/Images/Icons/drag.png"), QSize(), QIcon::Normal, QIcon::Off);
        drawSquare->setIcon(icon8);
        drawSquare->setIconSize(QSize(40, 40));
        drawSquare->setCheckable(true);

        tools->addWidget(drawSquare, 6, 0, 1, 1);

        onionButton = new QPushButton(layoutWidget_2);
        otherButtonsGroup->addButton(onionButton);
        onionButton->setObjectName(QStringLiteral("onionButton"));
        sizePolicy2.setHeightForWidth(onionButton->sizePolicy().hasHeightForWidth());
        onionButton->setSizePolicy(sizePolicy2);
        onionButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-right: none;\n"
"	border-radius: 0px;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/Images/Icons/onion (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        onionButton->setIcon(icon9);
        onionButton->setIconSize(QSize(40, 40));
        onionButton->setCheckable(true);

        tools->addWidget(onionButton, 11, 0, 1, 1);

        colorButton = new QPushButton(layoutWidget_2);
        otherButtonsGroup->addButton(colorButton);
        colorButton->setObjectName(QStringLiteral("colorButton"));
        sizePolicy2.setHeightForWidth(colorButton->sizePolicy().hasHeightForWidth());
        colorButton->setSizePolicy(sizePolicy2);
        colorButton->setToolTipDuration(-1);
        colorButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-right: none;\n"
"	border-top-right-radius: 0px;\n"
"	border-top-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/Images/Icons/paint-palette (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        colorButton->setIcon(icon10);
        colorButton->setIconSize(QSize(40, 40));

        tools->addWidget(colorButton, 13, 0, 1, 1);

        paintBucketButton = new QPushButton(layoutWidget_2);
        toolButtonGroup->addButton(paintBucketButton);
        paintBucketButton->setObjectName(QStringLiteral("paintBucketButton"));
        sizePolicy2.setHeightForWidth(paintBucketButton->sizePolicy().hasHeightForWidth());
        paintBucketButton->setSizePolicy(sizePolicy2);
        paintBucketButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-right: none;\n"
"	border-radius: 0px;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/Images/Icons/paintcan.png"), QSize(), QIcon::Normal, QIcon::Off);
        paintBucketButton->setIcon(icon11);
        paintBucketButton->setIconSize(QSize(40, 40));
        paintBucketButton->setCheckable(true);

        tools->addWidget(paintBucketButton, 7, 0, 1, 1);

        eraserButton = new QPushButton(layoutWidget_2);
        toolButtonGroup->addButton(eraserButton);
        eraserButton->setObjectName(QStringLiteral("eraserButton"));
        sizePolicy2.setHeightForWidth(eraserButton->sizePolicy().hasHeightForWidth());
        eraserButton->setSizePolicy(sizePolicy2);
        eraserButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-right: none;\n"
"	border-radius: 0px;\n"
"}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/Images/Icons/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        eraserButton->setIcon(icon12);
        eraserButton->setIconSize(QSize(40, 40));
        eraserButton->setCheckable(true);
        eraserButton->setFlat(true);

        tools->addWidget(eraserButton, 1, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 530, 751, 111));
        frame->setStyleSheet(QLatin1String("QFrame {\n"
"	border-top: 1px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, 	stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(150, 11, 588, 90));
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QLatin1String("QFrame {\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel {\n"
"border: 1px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffaa00, stop: 1 #d7801a);\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 579, 90));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy3);
        scrollAreaWidgetContents->setMinimumSize(QSize(200, 0));
        scrollAreaWidgetContents->setMaximumSize(QSize(579, 16777215));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(15);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(2, 2, 2, 10);
        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);
        previewFrame = new QLabel(frame);
        previewFrame->setObjectName(QStringLiteral("previewFrame"));
        previewFrame->setGeometry(QRect(10, 10, 131, 91));
        sizePolicy1.setHeightForWidth(previewFrame->sizePolicy().hasHeightForWidth());
        previewFrame->setSizePolicy(sizePolicy1);
        previewFrame->setMinimumSize(QSize(131, 91));
        previewFrame->setMaximumSize(QSize(110, 75));
        previewFrame->setStyleSheet(QLatin1String("QLabel {\n"
"border: 1px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"\n"
"}\n"
""));
        previewFrame->setScaledContents(false);
        SpriteView->setCentralWidget(centralWidget);
        layoutWidget->raise();
        title->raise();
        layoutWidget_2->raise();
        frame->raise();
        canvas->raise();

        retranslateUi(SpriteView);

        QMetaObject::connectSlotsByName(SpriteView);
    } // setupUi

    void retranslateUi(QMainWindow *SpriteView)
    {
        SpriteView->setWindowTitle(QApplication::translate("SpriteView", "Vindicators 5: Attack of the Sprite", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        SpriteView->setWhatsThis(QApplication::translate("SpriteView", "Add Frame", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionaddButton->setText(QApplication::translate("SpriteView", "addButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        blankCanvasButton->setToolTip(QApplication::translate("SpriteView", "Blank Canvas", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        blankCanvasButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        blankCanvasButton->setShortcut(QApplication::translate("SpriteView", "N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("SpriteView", "Save (CTRL + S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        saveButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        saveButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        saveButton->setShortcut(QApplication::translate("SpriteView", "V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("SpriteView", "Preview", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        playButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        playButton->setShortcut(QApplication::translate("SpriteView", "P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        addButton->setShortcut(QApplication::translate("SpriteView", "A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        openButton->setToolTip(QApplication::translate("SpriteView", "Open Project", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        openButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        openButton->setShortcut(QApplication::translate("SpriteView", "Meta+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        undoButton->setToolTip(QApplication::translate("SpriteView", "Undo (CTRL + Z)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        undoButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        undoButton->setShortcut(QApplication::translate("SpriteView", "U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        title->setText(QString());
#ifndef QT_NO_TOOLTIP
        drawingButton->setToolTip(QApplication::translate("SpriteView", "Pen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        drawingButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        drawingButton->setShortcut(QApplication::translate("SpriteView", "D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        drawSquare->setToolTip(QApplication::translate("SpriteView", "Draw Square", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        drawSquare->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        drawSquare->setText(QString());
#ifndef QT_NO_SHORTCUT
        drawSquare->setShortcut(QApplication::translate("SpriteView", "S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        onionButton->setToolTip(QApplication::translate("SpriteView", "Onion Skin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        onionButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        onionButton->setShortcut(QApplication::translate("SpriteView", "O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        colorButton->setToolTip(QApplication::translate("SpriteView", "Color Picker", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        colorButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        colorButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        colorButton->setShortcut(QApplication::translate("SpriteView", "C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        paintBucketButton->setToolTip(QApplication::translate("SpriteView", "Paint Bucket", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        paintBucketButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        paintBucketButton->setShortcut(QApplication::translate("SpriteView", "P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        eraserButton->setToolTip(QApplication::translate("SpriteView", "Eraser", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        eraserButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        eraserButton->setShortcut(QApplication::translate("SpriteView", "E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        previewFrame->setToolTip(QApplication::translate("SpriteView", "Preview Window", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        previewFrame->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        previewFrame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpriteView: public Ui_SpriteView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRITEVIEW_H
