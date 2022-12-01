#include "tools.h"

class Client
{
private:
	int id_client;
	string nom;
	string prenom;
	string num_rue_livraison;
	string num_rue_facturation;
	string nom_rue_livraison;
	string nom_rue_facturation;
	string ville_livraison;
	string ville_facturation;
	int code_postal_livraison;
	int code_postal_facturation;
	string date_naissance;
	string date_premier_achat;
public:
	Client();
	Client(int, string, string, string, string, string, string, string, string, int, int, string, string);
	void setId_Client(int);
	void setNom(string);
	void setPrenom(string);
	void setNum_Rue_Livraison(string);
	void setNum_Rue_Facturation(string);
	void setNom_Rue_Livraison(string);
	void setNom_Rue_Facturation(string);
	void setVille_Livraison(string);
	void setVille_Facturation(string);
	void setCode_Postal_Facturation(string);
	void setCode_Postal_Livraison(string);
	void setDate_Naissance(string);
	void setDate_Premier_Achat(string);
	int getId_Client();
	string getNom();
	string getPrenom();
	string getNum_Rue_Livraison();
	string getNum_Rue_Factorisation();
	string getNom_Rue_Livraison();
	string getNom_Rue_Factorisation();
	void getVille_Livraison();
	void getVille_Factorisation();
	int getCode_Postal_Livraison();
	int getCode_Postal_Facturation();
	string getDate_Naissance();
	string getDate_Premier_Achat();
	string Insert();
	string Select();
	string Update();
	string Delete();
};