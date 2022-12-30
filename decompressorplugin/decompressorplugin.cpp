#include <QtGui>

#include "decompressorplugin.h"


DecompressorPlugin::DecompressorPlugin()
{

}

DecompressorPlugin::~DecompressorPlugin()
{

}

QString DecompressorPlugin::name()
{
    return QString("Decompressor Plugin");
}

QString DecompressorPlugin::pluginVersion()
{
    return DECOMPRESSOR_PLUGIN_VERSION;
}

QString DecompressorPlugin::pluginInterfaceVersion()
{
    return DECOMPRESSOR_PLUGIN_VERSION;
}
QString DecompressorPlugin::description()
{
    return QString();
}

QString DecompressorPlugin::error()
{
    return QString();
}

bool DecompressorPlugin::loadConfig(QString filename)
{
    return true;
}

bool DecompressorPlugin::saveConfig(QString filename)
{
    return true;
}

QStringList DecompressorPlugin::infoConfig()
{
    return QStringList();
}

bool DecompressorPlugin::isMsg(QDltMsg & msg, int triggeredByUser)
{
    Q_UNUSED(msg);
    Q_UNUSED(triggeredByUser);

    return false;
}

bool DecompressorPlugin::decodeMsg(QDltMsg &msg, int triggeredByUser)
{
    Q_UNUSED(msg);
    Q_UNUSED(triggeredByUser);

    return false;
}

#ifndef QT5
Q_EXPORT_PLUGIN2(decompessorplugin, DecompressorPlugin);
#endif
