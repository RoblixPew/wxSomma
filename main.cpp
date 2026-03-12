#include <wx/wx.h>
#include "MyProjectBase.h"

class AppSomma : public m_frameCalcolatrice
{
public:
    AppSomma(wxWindow* parent) : m_frameCalcolatrice(parent) {}

protected:
    void Somma(wxCommandEvent& event)
    {
        double a = 0, b = 0;

        input1->GetValue().ToDouble(&a);
        input2->GetValue().ToDouble(&b);

        double r = a + b;

        Risultato->SetLabel(wxString::Format("Risultato: %.2f", r));
    }
};

class FinestraSomma : public wxApp
{
public:
    bool OnInit() override
    {
        AppSomma* frame = new AppSomma(nullptr);
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(FinestraSomma);