/***************************************************************
 * Name:      MissRenameAidApp.cpp
 * Purpose:   Code for Application Class
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

#include "MissRenameAidApp.h"
#include "MissRenameAidMain.h"

IMPLEMENT_APP(MissRenameAidApp);

bool MissRenameAidApp::OnInit()
{
    MissRenameAidFrame* frame = new MissRenameAidFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}
