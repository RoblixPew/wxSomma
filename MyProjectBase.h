///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class m_frameCalcolatrice
///////////////////////////////////////////////////////////////////////////////
class m_frameCalcolatrice : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText6;
		wxTextCtrl* input1;
		wxStaticText* m_staticText7;
		wxTextCtrl* input2;
		wxButton* m_button3;
		wxStaticText* Risultato;

		// Virtual event handlers, override them in your derived class
		virtual void Somma( wxCommandEvent& event ) { event.Skip(); }


	public:

		m_frameCalcolatrice( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~m_frameCalcolatrice();

};

