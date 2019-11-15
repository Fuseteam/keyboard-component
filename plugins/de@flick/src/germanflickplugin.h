#ifndef GERMANFLICKPLUGIN_H
#define GERMANFLICKPLUGIN_H

#include <QObject>
#include "languageplugininterface.h"
#include "westernlanguagesplugin.h"

//#include <presage.h>

class GermanFlickPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_INTERFACES(LanguagePluginInterface)
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.GermanFlickPlugin" FILE "germanflickplugin.json")

public:
    explicit GermanFlickPlugin(QObject* parent = 0)
        : WesternLanguagesPlugin(parent)
    {
    }

    virtual ~GermanFlickPlugin()
    {
    }
};

#endif // GERMANFLICKPLUGIN_H
