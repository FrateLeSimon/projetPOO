#include "tools.h"

class Facture
{
private:
	System::String^ id_facture;
	System::String^ nom_societe;
	System::String^ num_rue_societe;
	System::String^ nom_rue_societe;
	System::String^ ville_societe;
	int code_postal_societe;
	System::String^ logo_societe;
	int nbr_paiements;
	int somme_paiements;
	System::String^ moyen;
public:
	Facture();
	Facture(System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^, int, int, System::String^);
	void setId_Facture(System::String^);
	void setNom_Societe(System::String^);
	void setNum_Rue_Societe(System::String^);
	void setNom_Rue_Societe(System::String^);
	void setVille_Societe(System::String^);
	void setCode_Postal_Societe(int);
	void setLogo_Societe(System::String^);
	void setNbr_Paiements(int);
	void setSomme_Paiements(int);
	void setMoyen(System::String^);
	System::String^ getId_Facture();
	System::String^ getNum_Rue_Societe();
	System::String^ getNom_Rue_Societe();
	System::String^ getVille_Societe();
	int getCode_Postal();
	System::String^ getLogo_Societe();
	int getNbr_Paiements();
	int getSomme_Paiements();
	System::String^ getMoyen();
};