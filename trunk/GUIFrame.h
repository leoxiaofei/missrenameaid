///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFRAME_H__
#define __GUIFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class MissListCtrl;

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/combobox.h>
#include <wx/spinctrl.h>
#include <wx/choicebk.h>
#include <wx/statbox.h>
#include <wx/listctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define idMenuQuit 1000
#define idMenuAbout 1001

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* helpMenu;
		wxStatusBar* statusBar;
		wxChoicebook* m_cbkFunc;
		wxPanel* m_panReplace;
		wxStaticText* m_lblReplace1;
		wxTextCtrl* m_edtRSrc;
		wxStaticText* m_lblReplace2;
		wxTextCtrl* m_edtRDes;
		wxButton* m_btnReplaceMore;
		wxPanel* m_panSerial;
		wxComboBox* m_comboBox1;
		wxSpinCtrl* m_spinCtrl1;
		wxComboBox* m_comboBox2;
		wxButton* m_btnStart;
		wxButton* m_btnAddFiles;
		wxButton* m_btnUp;
		wxButton* m_btnDown;
		MissListCtrl* m_listFiles;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCbkFuncPageChanged( wxChoicebookEvent& event ) { event.Skip(); }
		virtual void OnEdtRSrcKillFocus( wxFocusEvent& event ) { event.Skip(); }
		virtual void OnBtnReplaceMoreClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnStartClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnAddFilesClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnUpClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBtnDownClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("迷失批量重命名助手"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 502,499 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~GUIFrame();
	
};

#endif //__GUIFRAME_H__
