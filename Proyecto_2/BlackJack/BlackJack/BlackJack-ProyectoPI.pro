QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    credits.cpp \
    main.cpp \
    mainwindow.cpp \
    oneplayer.cpp \
    options.cpp \
    rules.cpp \
    twoplayers.cpp

HEADERS += \
    credits.h \
    mainwindow.h \
    oneplayer.h \
    options.h \
    rules.h \
    twoplayers.h

FORMS += \
    credits.ui \
    mainwindow.ui \
    oneplayer.ui \
    options.ui \
    rules.ui \
    twoplayers.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

nasm.name = nasm ${QMAKE_FILE_IN}
nasm.input = ASM_FILES
nasm.variable_out = OBJECTS
nasm.commands = nasm -f elf64 ${QMAKE_FILE_IN} -o ${QMAKE_FILE_OUT}
nasm.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_IN_BASE}$${first(QMAKE_EXT_OBJ)}
nasm.CONFIG += target_predeps

QMAKE_EXTRA_COMPILERS  += nasm

ASM_FILES += game.s

DISTFILES += \
    cartas.inc \
    game.s \
    ganador.inc \
    turnoCPU.inc \
    turnoJug.inc
