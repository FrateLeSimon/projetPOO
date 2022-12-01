#include "tools.h"

class Personnel{
private:
    int id_personnel;
    string nom;
    string prenom;
    int id_personnel_superieur;
    string num_rue;
    string nom_rue;
    string ville;
    int code_postal;
    string date_embauche;
    bool admin;
public:
    Personnel();
    Personnel(int, string, string, int, string, string, string, int, string, bool);
    void setId_Personnel();
    void setNom(string);
    void setPrenom(string);
    void setId_Superieur(int);
    void setNum_Rue(string);
    void setNom_Rue(string);
    void setVille(string);
    void setCode_Embauche(string);
    void setAdmin(bool);
    int getId_Personnel();
    string getNom();
    string getPrenom();
    int getId_Superieur();
    int getNum_Rue();
    string getNom_Rue();
    string getVille();
    int getCodePostal();
    string getDate_Embauche();
    bool getAdmin();
    string Insert();
    string Select();
    string Update();
    string Delete();
 };