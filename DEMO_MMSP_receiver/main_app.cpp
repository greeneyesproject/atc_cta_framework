#include "main_app.h"
#include "testbedGUI.h"

IMPLEMENT_APP(wxWidgetsApp)

wxWidgetsApp::wxWidgetsApp()
{
}

wxWidgetsApp::~wxWidgetsApp()
{
}

bool wxWidgetsApp::OnInit()
{
	testbedGUI* dialog = new testbedGUI( (wxWindow*)NULL );
    dialog ->Show();
    SetTopWindow( dialog );
    return true;
}
