#include <QtGui>
#include <QString>
#include <iostream>
#include "decompressorplugin.h"
//#include "Windows.h"


DecompressorPlugin::DecompressorPlugin()
{
    ::AttachConsole(ATTACH_PARENT_PROCESS);
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
    Q_UNUSED(triggeredByUser);

    if(msg.getType() == QDltMsg::DltTypeLog)
        return true;
    return false;
}

bool DecompressorPlugin::decodeMsg(QDltMsg &msg, int triggeredByUser)
{
    Q_UNUSED(triggeredByUser);
    QDltArgument argument;
    QString text = "!!!MODIFIED PAYLOAD!!!";

    arrayReplacement(0, msg, text);
    //addNewArgument(0, msg, text);
    //alterArgument(0, msg, text);

    return true;
}

void DecompressorPlugin::arrayReplacement(int index, QDltMsg& msg, const QString& text)
{
    QDltArgument argument;
    msg.getArgument(index, argument);
    QString combined = text + argument.toString(false);
    QByteArray text_in_bytes;
    text_in_bytes.prepend(combined.toUtf8());

    std::vector<QDltArgument> new_sequence;
    if(msg.sizeArguments() >= 1)
    {
        for (int var = 0; var < msg.sizeArguments(); var++)
        {
            QDltArgument arg_variable;
            msg.getArgument(var, arg_variable);
            new_sequence.push_back(arg_variable);
        }

        new_sequence[index].setData(text_in_bytes);
        msg.clearArguments();
        for(const QDltArgument& arg : new_sequence)
        {
            msg.addArgument(arg);
        }
    }


}

void DecompressorPlugin::addNewArgument(int index, QDltMsg& msg, const QString& text)
{
    QDltArgument argument;
    msg.getArgument(index, argument);
    QByteArray text_in_bytes;
    text_in_bytes.prepend(text.toUtf8());
    argument.setData(text_in_bytes);
    msg.addArgument(argument, index);
}

void DecompressorPlugin::alterArgument(int index, QDltMsg& msg, const QString& text)
{
    QDltArgument argument;
    msg.getArgument(index, argument);
    QString combined = text + argument.toString();
    QByteArray text_in_bytes;
    text_in_bytes.prepend(combined.toUtf8());
    argument.setData(text_in_bytes);
    msg.removeArgument(index);
    msg.addArgument(argument, index);
}

#ifndef QT5
Q_EXPORT_PLUGIN2(decompessorplugin, DecompressorPlugin);
#endif
