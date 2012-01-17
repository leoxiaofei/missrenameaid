#ifndef MISSLISTCTRL_H
#define MISSLISTCTRL_H

#include <wx/ListCtrl.h>
#include "MissGloble.h"
#include <tr1/memory>

class MissModifyRuleBase;

class MissListCtrl : public wxListCtrl
{
    public:
        MissListCtrl();

        MissListCtrl(wxWindow* parent, wxWindowID id,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxLC_ICON,
            const wxValidator& validator = wxDefaultValidator,
            const wxString& name = wxListCtrlNameStr);

        virtual ~MissListCtrl();

        virtual wxString OnGetItemText(long item, long column) const;

        void AddDatas(const MissGloble::MissDir &data);
        void ClearData();
        void SetRule(std::tr1::shared_ptr<MissModifyRuleBase> &pRule);
        //void SetDataSrc(const std::vector<MissGloble::MissDir>& data);
        const std::vector<MissGloble::MissDir>& GetDataSrc();
    protected:

    private:
        std::vector<MissGloble::MissDir> m_vecDataSrc;
        std::tr1::shared_ptr<MissModifyRuleBase> m_pRule;
};

#endif // MISSLISTCTRL_H
