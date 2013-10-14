///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __TESTBED_GUI_H__
#define __TESTBED_GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/checkbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ATC_CTA_testbed
///////////////////////////////////////////////////////////////////////////////
class ATC_CTA_testbed : public wxFrame 
{
	private:
	
	protected:
		wxCheckBox* ck_CTA;
		wxStaticText* m_staticText23;
		wxTextCtrl* txt_qf;
		wxCheckBox* ck_ATC;
		wxCheckBox* ck_coding;
		wxButton* bt_startstop;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onMainStart( wxActivateEvent& event ) { event.Skip(); }
		virtual void onCTA_on_off( wxCommandEvent& event ) { event.Skip(); }
		virtual void onJPEGqf( wxCommandEvent& event ) { event.Skip(); }
		virtual void onATC_on_off( wxCommandEvent& event ) { event.Skip(); }
		virtual void onEntropyCoding( wxCommandEvent& event ) { event.Skip(); }
		virtual void onStartStop( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ATC_CTA_testbed( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 452,118 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ATC_CTA_testbed();
	
};

#endif //__TESTBED_GUI_H__
