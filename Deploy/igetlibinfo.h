#ifndef IGETLIBINFO_H
#define IGETLIBINFO_H

#include "deployutils.h"
#include "libinfo.h"

class IGetLibInfo
{
public:
    IGetLibInfo() = default;
    virtual bool getLibInfo(const QString& lib, LibInfo& info) = 0;
    virtual ~IGetLibInfo() = default;

};

#endif // IGETLIBINFO_H
