#ifndef DOCSETINFO_H
#define DOCSETINFO_H

#include <QString>

namespace Zeal {

struct DocsetInfo
{
    explicit DocsetInfo(const QString &filePath = QString());

    bool readDocset(const QString &filePath);

    QString indexPath;
    QString family;
    QString keyword;
    QString bundleName;
    QString bundleIdentifier;
};

} // namespace Zeal

#endif // DOCSETINFO_H
