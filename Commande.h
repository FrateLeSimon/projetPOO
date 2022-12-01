#include "tools.h"

class Commande
{
private:
	string id_Commande;
	string date_livraison;
	string date_emission;
	int montant_ht;
	int montant_ttc;
public:
	Commande();
	Commande(string, string, string, int, int);
	void setId_Commande(string);
	void setDate_Livraison(string);
	void setDate_Emission(string);
	void setMontant_HT(int);
	void setMontant_TTC(int);
	string getId_Commande();
	string getDate_Livraison();
	string getDate_Emission();
	string getMontant_HT(int);
	string getMontant_TTC(int);
	string Insert();
	string Select();
	string Update();
	string Delete();
};