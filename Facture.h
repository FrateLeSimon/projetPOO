#include "tools.h"

class Facture
{
private:
	string id_facture;
	string nom_societe;
	string num_rue_societe;
	string nom_rue_societe;
	string ville_societe;
	int code_postal_societe;
	string logo_societe;
	int nbr_paiements;
	int somme_paiements;
	string moyen;
public:
	Facture();
	Facture(string, string, string, string, string, int, string, int, int, string);
	void setId_Facture(string);
	void setNom_Societe(string);
	void setNum_Rue_Societe(string);
	void setNom_Rue_Societe(string);
	void setVille_Societe(string);
	void setCode_Postal_Societe(int);
	void setLogo_Societe(string);
	void setNbr_Paiements(int);
	void setSomme_Paiements(int);
	void setMoyen(string);
	string getId_Facture();
	string getNum_Rue_Societe();
	string getNom_Rue_Societe();
	string getVille_Societe();
	int getCode_Postal();
	string getLogo_Societe();
	int getNbr_Paiements();
	int getSomme_Paiements();
	string getMoyen();
};