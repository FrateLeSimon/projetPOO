#include "tools.h"

class Client
{
private:
	int id_client;
	System::String^ nom;
	System::String^ prenom;
	System::String^ num_rue_livraison;
	System::String^ num_rue_facturation;
	System::String^ nom_rue_livraison;
	System::String^ nom_rue_facturation;
	System::String^ ville_livraison;
	System::String^ ville_facturation;
	int code_postal_livraison;
	int code_postal_facturation;
	System::System::String^^ date_naissance;
	System::String^ date_premier_achat;
public:
	Client();
	Client(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int, int, System::String^, System::String^);
	void setId_Client(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setNum_Rue_Livraison(System::String^);
	void setNum_Rue_Facturation(System::String^);
	void setNom_Rue_Livraison(System::String^);
	void setNom_Rue_Facturation(System::String^);
	void setVille_Livraison(System::String^);
	void setVille_Facturation(System::String^);
	void setCode_Postal_Facturation(int);
	void setCode_Postal_Livraison(int);
	void setDate_Naissance(System::String^);
	void setDate_Premier_Achat(System::String^);
	int getId_Client();
	System::String^ getNom();
	System::String^ getPrenom();
	System::String^ getNum_Rue_Livraison();
	System::String^ getNum_Rue_Facturation();
	System::String^ getNom_Rue_Livraison();
	System::String^ getNom_Rue_Facturation();
	System::String^ getVille_Livraison();
	System::String^ getVille_Factorisation();
	int getCode_Postal_Livraison();
	int getCode_Postal_Facturation();
	System::String^ getDate_Naissance();
	System::String^ getDate_Premier_Achat();
	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};