#include "ConnexionForm.h"
#include "..\tools.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    projetPOO::ConnexionForm monFormulaire;
    Application::Run(% monFormulaire);
}