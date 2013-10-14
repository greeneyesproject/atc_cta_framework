///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "testbed_gui.h"

///////////////////////////////////////////////////////////////////////////

ATC_CTA_testbed::ATC_CTA_testbed( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("CTA parameters") ), wxVERTICAL );
	
	ck_CTA = new wxCheckBox( this, wxID_ANY, wxT("CTA on/off"), wxDefaultPosition, wxDefaultSize, 0 );
	ck_CTA->SetValue(true); 
	sbSizer3->Add( ck_CTA, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("JPEG q.f."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer24->Add( m_staticText23, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	txt_qf = new wxTextCtrl( this, wxID_ANY, wxT("75"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE|wxTE_PROCESS_ENTER );
	bSizer24->Add( txt_qf, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	sbSizer3->Add( bSizer24, 1, wxEXPAND, 5 );
	
	
	bSizer9->Add( sbSizer3, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("ATC parameters") ), wxVERTICAL );
	
	ck_ATC = new wxCheckBox( this, wxID_ANY, wxT("ATC on/off"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( ck_ATC, 0, wxALL, 5 );
	
	ck_coding = new wxCheckBox( this, wxID_ANY, wxT("Entropy coding"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( ck_coding, 0, wxALL, 5 );
	
	
	bSizer9->Add( sbSizer5, 0, wxEXPAND, 5 );
	
	bt_startstop = new wxButton( this, wxID_ANY, wxT("START"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( bt_startstop, 1, wxALL|wxEXPAND|wxALIGN_BOTTOM, 5 );
	
	
	bSizer7->Add( bSizer9, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( ATC_CTA_testbed::onMainStart ) );
	ck_CTA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onCTA_on_off ), NULL, this );
	txt_qf->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ATC_CTA_testbed::onJPEGqf ), NULL, this );
	ck_ATC->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onATC_on_off ), NULL, this );
	ck_coding->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onEntropyCoding ), NULL, this );
	bt_startstop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onStartStop ), NULL, this );
}

ATC_CTA_testbed::~ATC_CTA_testbed()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( ATC_CTA_testbed::onMainStart ) );
	ck_CTA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onCTA_on_off ), NULL, this );
	txt_qf->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ATC_CTA_testbed::onJPEGqf ), NULL, this );
	ck_ATC->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onATC_on_off ), NULL, this );
	ck_coding->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onEntropyCoding ), NULL, this );
	bt_startstop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ATC_CTA_testbed::onStartStop ), NULL, this );
	
}
