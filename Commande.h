#include "tools.h"

class Commande
{
private:
	int id_Commande;
	string reference;
	string date_livraison;
	string date_emission;
	int montant_ht;
	int montant_ttc;
public:
	Commande();
	Commande(string, string, string, int, int);
	void setId_Commande(int);
	void setReference(string);
	void setDate_Livraison(string);
	void setDate_Emission(string);
	void setMontant_HT(int);
	void setMontant_TTC(int);
	int getId_Commande();
	string getReference();
	string getDate_Livraison();
	string getDate_Emission();
	int getMontant_HT();
	int getMontant_TTC();
	string Insert();
	string Select();
	string Update();
	string Delete();
};