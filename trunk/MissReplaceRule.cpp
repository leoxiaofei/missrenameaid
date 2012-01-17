#include "MissReplaceRule.h"
#include <wx/string.h>

MissReplaceRule::MissReplaceRule()
{
    //ctor
}

MissReplaceRule::~MissReplaceRule()
{
    //dtor
}

void MissReplaceRule::ProcessData(const wxString& strSrc, wxString& strDes)
{
    strDes = strSrc;
    for(RuleContainer::const_iterator citor = m_vecRule.begin();
        citor != m_vecRule.end(); ++citor )
    {
        strDes.Replace(citor->first,citor->second);
    }
}

void MissReplaceRule::SetRule(const RuleContainer& vecRule)
{
    m_vecRule = vecRule;
}
