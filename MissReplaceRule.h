#ifndef MISSREPLACERULE_H
#define MISSREPLACERULE_H

#include "MissModifyRuleBase.h"
#include <vector>

typedef std::vector<std::pair<wxString, wxString> > RuleContainer;
class MissReplaceRule : public MissModifyRuleBase
{
    public:
        MissReplaceRule();
        virtual ~MissReplaceRule();

        virtual void ProcessData(const wxString& strSrc, wxString& strDes);

        void SetRule(const RuleContainer& vecRule);
    protected:
    private:
        RuleContainer m_vecRule;
};

#endif // MISSREPLACERULE_H
