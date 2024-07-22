QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    creditos.cpp \
    error.cpp \
    filtros.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    creditos.h \
    error.h \
    filtros.h \
    mainwindow.h

FORMS += \
    creditos.ui \
    error.ui \
    filtros.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    nasm.s

nasm.name = nasm ${QMAKE_FILE_IN}
nasm.input = ASM_FILES
nasm.variable_out = OBJECTS
nasm.commands = nasm -f elf64 ${QMAKE_FILE_IN} -o ${QMAKE_FILE_OUT}
nasm.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_IN_BASE}$${first(QMAKE_EXT_OBJ)}
nasm.CONFIG += target_predeps

QMAKE_EXTRA_COMPILERS  += nasm

ASM_FILES += nasm.s
