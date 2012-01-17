/***************************************************************
 * Name:      MissRenameAidMain.h
 * Purpose:   Defines Application Frame
 * Author:    leoxiaofei (fox88324@yahoo.com.cn)
 * Created:   2011-10-31
 * Copyright: leoxiaofei (http://www.leoxiaofei.com)
 * License:
 **************************************************************/

#ifndef MISSRENAMEAIDMAIN_H
#define MISSRENAMEAIDMAIN_H



#include "MissRenameAidApp.h"


#include "GUIFrame.h"

class MissRenameAidFrame: public GUIFrame
{
    class MissRenameAidFrameImpl;
    public:
        MissRenameAidFrame(wxFrame *frame);
        ~MissRenameAidFrame();

    protected:
        void LoadReplaceRule();

    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
        virtual void OnBtnStartClick( wxCommandEvent& event );
        virtual void OnBtnAddFilesClick( wxCommandEvent& event );
		virtual void OnBtnUpClick( wxCommandEvent& event );
		virtual void OnBtnDownClick( wxCommandEvent& event );

        virtual void OnCbkFuncPageChanged( wxChoicebookEvent& event );
        virtual void OnEdtRSrcKillFocus( wxFocusEvent& event );

    private:
        std::tr1::shared_ptr<MissRenameAidFrameImpl> m_pImpl;
};

#endif // MISSRENAMEAIDMAIN_H
