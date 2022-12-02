#include "tools.h"

class Personnel{
private:
    int id_personnel;
    System::String^ nom;
    System::String^ prenom;
    int id_superieur;
    System::String^ num_rue;
    System::String^ nom_rue;
    System::String^ ville;
    int code_postal;
    System::String^ date_embauche;
    bool admin;
public:
    Personnel();
    Personnel(int, System::String^, System::String^, int, System::String^, System::String^, System::String^, int, System::String^, bool);
    void setId_Personnel(int);
    void setNom(System::String^);
    void setPrenom(System::String^);
    void setId_Superieur(int);
    void setNum_Rue(System::String^);
    void setNom_Rue(System::String^);
    void setVille(System::String^);
    void setDate_Embauche(System::String^);
    void setAdmin(bool);
    int getId_Personnel();
    System::String^ getNom();
    System::String^ getPrenom();
    int getId_Superieur();
    System::String^ getNum_Rue();
    System::String^ getNom_Rue();
    System::String^ getVille();
    int getCodePostal();
    System::String^ getDate_Embauche();
    bool getAdmin();
    System::String^ Insert();
    System::String^ Select();
    System::String^ Update();
    System::String^ Delete();
 };