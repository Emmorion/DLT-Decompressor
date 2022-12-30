include ( ../plugin.pri)


MOC_DIR     = build/moc
OBJECTS_DIR = build/obj
RCC_DIR     = build/rcc
UI_DIR      = build/ui

TARGET = $$qtLibraryTarget(decompressorplugin)


HEADERS += decompressorplugin.h

SOURCES += decompressorplugin.cpp


FORMS +=
