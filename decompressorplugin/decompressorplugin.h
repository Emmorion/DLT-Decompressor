#ifndef DECOMPRESSORPLUGIN_H
#define DECOMPRESSORPLUGIN_H

#include <QObject>
#include "plugininterface.h"

#define DECOMPRESSOR_PLUGIN_VERSION "1.0.1"

class DecompressorPlugin : public QObject, QDLTPluginInterface, QDLTPluginDecoderInterface
{
    Q_OBJECT
    Q_INTERFACES(QDLTPluginInterface)
    Q_INTERFACES(QDLTPluginDecoderInterface)
#ifdef QT5
    Q_PLUGIN_METADATA(IID "org.genivi.DLT.DecompressorPlugin")
#endif

public:
    DecompressorPlugin();
    ~DecompressorPlugin();


    QString name();
    QString pluginVersion();
    QString pluginInterfaceVersion();
    QString description();
    QString error();
    bool loadConfig(QString filename);
    bool saveConfig(QString filename);
    QStringList infoConfig();

    bool isMsg(QDltMsg &msg, int triggeredByUser);
    bool decodeMsg(QDltMsg &msg, int triggeredByUser);

private:
    QString errorText;
};

#endif // DECOMPRESSORPLUGIN_H
