// MWxVersion.h.
// Managed C++ wrapper for WxVersion.

#pragma once

#include "MWx.h"

#pragma unmanaged
#include "shared\basic\wxversion.h"
#pragma managed

public ref class MWxVersion : public MWx
{
public:
    MWxVersion();

    virtual ~MWxVersion();

    static MWxVersion^ CreateWrapper(WxVersion* pNativeNaive, bool privateCopy);

    String^ GetVersionString();

    static Boolean operator<(MWxVersion^ pThis, MWxVersion^ pVer);

    static Boolean operator<=(MWxVersion^ pThis, MWxVersion^ pVer);

    static Boolean operator>(MWxVersion^ pThis, MWxVersion^ pVer);

    static Boolean operator>=(MWxVersion^ pThis, MWxVersion^ pVer);

    void SetVersionFromString(String^ pParam);

    MWxVersion(MWxVersion^ pVersion);

    MWxVersion(Int64 versionNum);

protected:
    virtual void ReleaseNativePointer() override;

    MWxVersion(WxVersion* pWxVersion,  bool privateCopy);

};
