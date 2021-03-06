#ifndef SAILFISHUISET_H
#define SAILFISHUISET_H

#include <QtQml>

#include "localfilebrowser.h"
#include "filedetailshelper.h"

namespace SailfishUiSet {
void registerQmlTypes() {
    qmlRegisterType<LocalFileBrowser>("SailfishUiSet", 1, 0, "LocalFileBrowser");
    qmlRegisterType<FileDetailsHelper>("SailfishUiSet", 1, 0, "FileDetailsHelper");
}
}

#endif // SAILFISHUISET_H
