#ifndef MISSMODIFYRULEBASE_H
#define MISSMODIFYRULEBASE_H

class wxString;
class MissModifyRuleBase
{
    public:
        MissModifyRuleBase();
        virtual ~MissModifyRuleBase();

        virtual void ProcessData(const wxString& strSrc, wxString& strDes) = 0;
    protected:
    private:
};

#endif // MISSMODIFYRULEBASE_H
