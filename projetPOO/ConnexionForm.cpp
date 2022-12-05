#include "ConnexionForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(cli::array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    projetPOO::ConnexionForm monFormulaire;
    Application::Run(% monFormulaire);
}
