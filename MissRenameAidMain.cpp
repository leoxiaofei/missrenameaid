/***************************************************************
 * Name:      MissRenameAidMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    leoxiaofei (fox88324@yahoo.com.cn)
 * Created:   2011-10-31
 * Copyright: leoxiaofei (http://www.leoxiaofei.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "MissRenameAidMain.h"
#include "MissListCtrl.h"

#include <wx/dirdlg.h>
#include <wx/dir.h>

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

class MissRenameAidFrame::MissRenameAidFrameImpl
{
    std::tr1::shared_ptr<MissModifyRuleBase> m_pRule;
};

MissRenameAidFrame::MissRenameAidFrame(wxFrame *frame)
    : GUIFrame(frame),
    m_pImpl(new MissRenameAidFrameImpl)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
    m_listFiles->InsertColumn(0,_T("编号"),wxLIST_FORMAT_LEFT,50);
    m_listFiles->InsertColumn(0,_T("旧文件名"),wxLIST_FORMAT_LEFT,100);
    m_listFiles->InsertColumn(1,_T("新文件名"),wxLIST_FORMAT_LEFT,100);
    m_listFiles->InsertColumn(2,_T("文件路径"),wxLIST_FORMAT_LEFT,220);
    //m_pLists[e]->InsertColumn(3,_T("提醒时间"),wxLIST_FORMAT_LEFT,72);
    //m_pLists[e]->InsertColumn(4,_T("主题内容"),wxLIST_FORMAT_LEFT,220);
    //m_listFiles->SetRule(m_pImpl->m_pRule);
}

MissRenameAidFrame::~MissRenameAidFrame()
{
}

void MissRenameAidFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void MissRenameAidFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void MissRenameAidFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    //wxMessageBox(msg, _("Welcome to..."));
}

void MissRenameAidFrame::OnBtnStartClick(wxCommandEvent& event)
{

}

void MissRenameAidFrame::OnBtnAddFilesClick(wxCommandEvent& event)
{
    const wxString& strDir = wxDirSelector(wxT("选择文件夹"));
    if ( !strDir.empty() )
    {
        wxDir dir(strDir);
        if (dir.IsOpened())
        {
        //std::vector<MissGloble::MissDir> vecDataSrc;
        MissGloble::MissDir mDataSrc;
        mDataSrc.strDirPath = strDir;
        wxString filename;
        bool bExist = dir.GetFirst(&filename, wxEmptyString, wxDIR_FILES);
        while(bExist)
        {
            mDataSrc.vecFiles.push_back(filename);
            bExist = dir.GetNext(&filename);
        }
        if(!mDataSrc.vecFiles.empty())
        {
            m_listFiles->AddDatas(mDataSrc);
        }
        }
    }

}

void MissRenameAidFrame::OnBtnUpClick(wxCommandEvent& event)
{
}

void MissRenameAidFrame::OnBtnDownClick(wxCommandEvent& event)
{
}

void MissRenameAidFrame::OnCbkFuncPageChanged(wxChoicebookEvent& event)
{

}

void MissRenameAidFrame::OnEdtRSrcKillFocus(wxFocusEvent& event)
{
}

void MissRenameAidFrame::LoadReplaceRule()
{
    m_pImpl->m_pRule = new MissReplaceRule;
    static_cast<MissReplaceRule *>(m_pImpl->m_pRule)->
}

