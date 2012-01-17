///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "MissListCtrl.h"

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	mbar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("退出(&Q)") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
	fileMenu->Append( menuFileQuit );
	
	mbar->Append( fileMenu, wxT("文件(&F)") ); 
	
	helpMenu = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("关于(&A)") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
	helpMenu->Append( menuHelpAbout );
	
	mbar->Append( helpMenu, wxT("帮助(&H)") ); 
	
	this->SetMenuBar( mbar );
	
	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("设置") ), wxHORIZONTAL );
	
	m_cbkFunc = new wxChoicebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT|wxCHB_LEFT );
	m_panReplace = new wxPanel( m_cbkFunc, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_lblReplace1 = new wxStaticText( m_panReplace, wxID_ANY, wxT("将"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblReplace1->Wrap( -1 );
	bSizer6->Add( m_lblReplace1, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_edtRSrc = new wxTextCtrl( m_panReplace, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_edtRSrc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_lblReplace2 = new wxStaticText( m_panReplace, wxID_ANY, wxT("替换成"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblReplace2->Wrap( -1 );
	bSizer6->Add( m_lblReplace2, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_edtRDes = new wxTextCtrl( m_panReplace, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_edtRDes, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_btnReplaceMore = new wxButton( m_panReplace, wxID_ANY, wxT("更多"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_btnReplaceMore, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_panReplace->SetSizer( bSizer6 );
	m_panReplace->Layout();
	bSizer6->Fit( m_panReplace );
	m_cbkFunc->AddPage( m_panReplace, wxT("替换"), true );
	m_panSerial = new wxPanel( m_cbkFunc, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_comboBox1 = new wxComboBox( m_panSerial, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer1->Add( m_comboBox1, 1, wxALL, 5 );
	
	m_spinCtrl1 = new wxSpinCtrl( m_panSerial, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	m_spinCtrl1->SetMinSize( wxSize( 40,-1 ) );
	
	fgSizer1->Add( m_spinCtrl1, 0, wxALL, 5 );
	
	m_comboBox2 = new wxComboBox( m_panSerial, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer1->Add( m_comboBox2, 0, wxALL, 5 );
	
	bSizer7->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	m_panSerial->SetSizer( bSizer7 );
	m_panSerial->Layout();
	bSizer7->Fit( m_panSerial );
	m_cbkFunc->AddPage( m_panSerial, wxT("序号"), false );
	sbSizer1->Add( m_cbkFunc, 1, wxEXPAND | wxALL, 5 );
	
	m_btnStart = new wxButton( this, wxID_ANY, wxT("开始"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btnStart->SetDefault(); 
	sbSizer1->Add( m_btnStart, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer1->Add( sbSizer1, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_btnAddFiles = new wxButton( this, wxID_ANY, wxT("添加"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btnAddFiles, 0, wxALL, 5 );
	
	
	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_btnUp = new wxButton( this, wxID_ANY, wxT("上"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btnUp, 0, wxALL, 5 );
	
	m_btnDown = new wxButton( this, wxID_ANY, wxT("下"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btnDown, 0, wxALL, 5 );
	
	
	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer4->Add( bSizer5, 0, wxEXPAND, 5 );
	
	m_listFiles = new MissListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VIRTUAL );
	bSizer4->Add( m_listFiles, 1, wxEXPAND, 5 );
	
	bSizer1->Add( bSizer4, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_cbkFunc->Connect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( GUIFrame::OnCbkFuncPageChanged ), NULL, this );
	m_edtRSrc->Connect( wxEVT_KILL_FOCUS, wxFocusEventHandler( GUIFrame::OnEdtRSrcKillFocus ), NULL, this );
	m_edtRDes->Connect( wxEVT_KILL_FOCUS, wxFocusEventHandler( GUIFrame::OnEdtRSrcKillFocus ), NULL, this );
	m_btnReplaceMore->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnReplaceMoreClick ), NULL, this );
	m_btnStart->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnStartClick ), NULL, this );
	m_btnAddFiles->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnAddFilesClick ), NULL, this );
	m_btnUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnUpClick ), NULL, this );
	m_btnDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnDownClick ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( idMenuQuit, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Disconnect( idMenuAbout, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_cbkFunc->Disconnect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( GUIFrame::OnCbkFuncPageChanged ), NULL, this );
	m_edtRSrc->Disconnect( wxEVT_KILL_FOCUS, wxFocusEventHandler( GUIFrame::OnEdtRSrcKillFocus ), NULL, this );
	m_edtRDes->Disconnect( wxEVT_KILL_FOCUS, wxFocusEventHandler( GUIFrame::OnEdtRSrcKillFocus ), NULL, this );
	m_btnReplaceMore->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnReplaceMoreClick ), NULL, this );
	m_btnStart->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnStartClick ), NULL, this );
	m_btnAddFiles->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnAddFilesClick ), NULL, this );
	m_btnUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnUpClick ), NULL, this );
	m_btnDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnBtnDownClick ), NULL, this );
	
}
