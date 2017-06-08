////////////////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once

/// Wx includes.
#include "WxKernelDecl.h"

///
/// Current Global system version#
///
///

#define WXVERSIONVERNUM(verMajor, verMinor, buildMajor, buildMinor) \
    (((unsigned __int64)(verMajor)) << 56) + (((unsigned __int64)verMinor) << 48) \
        + (((unsigned __int64)buildMajor) << 24) + (((unsigned __int64)buildMinor))

class VQIAF(SHARED) WxVersion
{
public:
    VQIA(NONE) WxVersion();
    VQIA(NONE) WxVersion(const WxVersion& version) { m_versionNum = version.m_versionNum; }
    VQIA(NONE) WxVersion(__int64 versionNum) { m_versionNum = versionNum; }
    __int64 GetVersionNum() const { return m_versionNum; }
    WxString VQIA(NONE) GetVersionString() const;
    void VQIA(NONE) SetVersionFromString(const WxString&);
    bool VQIA(NONE) operator<(const WxVersion& ver)  const { return m_versionNum < ver.m_versionNum; }
    bool VQIA(NONE) operator>(const WxVersion& ver)  const { return m_versionNum > ver.m_versionNum; }
    bool operator==(const WxVersion& ver) const { return m_versionNum == ver.m_versionNum; }
    bool operator!=(const WxVersion& ver) const { return m_versionNum != ver.m_versionNum; }
    bool VQIA(NONE) operator>=(const WxVersion& ver) const { return m_versionNum >= ver.m_versionNum; }
    bool VQIA(NONE) operator<=(const WxVersion& ver) const { return m_versionNum <= ver.m_versionNum; }
    
private:
    unsigned __int64 m_versionNum;
};
