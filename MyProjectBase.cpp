///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

m_frameCalcolatrice::m_frameCalcolatrice( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, _("Primo Numero"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer1->Add( m_staticText6, 0, wxALL, 5 );

	input1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( input1, 0, wxALL, 5 );

	m_staticText7 = new wxStaticText( this, wxID_ANY, _("Secondo Numero"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer1->Add( m_staticText7, 0, wxALL, 5 );

	input2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( input2, 0, wxALL, 5 );

	m_button3 = new wxButton( this, wxID_ANY, _("Somma"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_button3, 0, wxALL, 5 );

	Risultato = new wxStaticText( this, wxID_ANY, _("Risultato:"), wxDefaultPosition, wxDefaultSize, 0 );
	Risultato->Wrap( -1 );
	bSizer1->Add( Risultato, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_frameCalcolatrice::Somma ), NULL, this );
}

m_frameCalcolatrice::~m_frameCalcolatrice()
{
}
