#include "MissListCtrl.h"
#include "MissModifyRuleBase.h"

MissListCtrl::MissListCtrl():wxListCtrl()
{
    //ctor
}

MissListCtrl::~MissListCtrl()
{
    //dtor
}

MissListCtrl::MissListCtrl(wxWindow* parent, wxWindowID id,
            const wxPoint& pos, const wxSize& size, long style,
        const wxValidator& validator, const wxString& name):
wxListCtrl(parent, id, pos, size, style, validator, name)
{
}

wxString MissListCtrl::OnGetItemText(long item, long column) const
{
    static wxString strRet;
    for(std::vector<MissGloble::MissDir>::const_iterator citor = m_vecDataSrc.begin();
        citor != m_vecDataSrc.end(); ++citor)
    {
        if(item < citor->vecFiles.size())
        {
            switch(column)
            {
            case 0:       ///编号
                strRet.Printf(wxT("%d"),item);
                break;
            case 1:       ///旧文件名
                strRet = citor->vecFiles[item];
                break;
            case 2:       ///新文件名
                if(m_pRule != NULL)
                m_pRule->ProcessData(citor->vecFiles[item],strRet);
                break;
            case 3:       ///文件路径
                strRet = citor->strDirPath;
                break;
            default:
                break;
            }
        }
        else
        {
            item -= citor->vecFiles.size();
        }
    }
    return strRet;
}

void MissListCtrl::AddDatas(const MissGloble::MissDir& data)
{
    m_vecDataSrc.push_back(data);
    int nOldCount = GetItemCount();
    SetItemCount(nOldCount + data.vecFiles.size());
    RefreshItems(nOldCount, nOldCount + data.vecFiles.size());
}

void MissListCtrl::ClearData()
{
    std::vector<MissGloble::MissDir> ().swap(m_vecDataSrc);
    SetItemCount(0);
}

const std::vector<MissGloble::MissDir>& MissListCtrl::GetDataSrc()
{
    return m_vecDataSrc;
}

void MissListCtrl::SetRule(std::tr1::shared_ptr<MissModifyRuleBase>& pRule)
{
    m_pRule = pRule;
    RefreshItems(0,GetItemCount());
}
