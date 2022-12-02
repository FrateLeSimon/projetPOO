#include "tools.h"

class Commande
{
private:
	int id_commande;
	System::String^ reference;
	System::String^ date_livraison;
	System::String^ date_emission;
	int montant_ht;
	int montant_ttc;
public:
	Commande();
	Commande(int, System::String^, System::String^, System::String^, int, int);
	void setId_Commande(int);
	void setReference(System::String^);
	void setDate_Livraison(System::String^);
	void setDate_Emission(System::String^);
	void setMontant_HT(int);
	void setMontant_TTC(int);
	int getId_Commande();
	System::String^ getReference();
	System::String^ getDate_Livraison();
	System::String^ getDate_Emission();
	int getMontant_HT();
	int getMontant_TTC();
	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};