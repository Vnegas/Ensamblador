QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    blackjack.cpp \
    main.cpp \
    mainwindow.cpp \
    mydialog.cpp

HEADERS += \
    blackjack.h \
    mainwindow.h \
    mydialog.h

FORMS += \
    blackjack.ui \
    mainwindow.ui \
    mydialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=  game.s

game.name = nasm ${QMAKE_FILE_IN}
game.input = ASM_FILES
game.variable_out = OBJECTS
game.commands = nasm -f elf64 ${QMAKE_FILE_IN} -o ${QMAKE_FILE_OUT}
game.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_IN_BASE}$${first(QMAKE_EXT_OBJ)}
game.CONFIG += target_predeps

QMAKE_EXTRA_COMPILERS  += nasm

ASM_FILES += game.s




