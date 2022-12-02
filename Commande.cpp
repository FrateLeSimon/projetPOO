#include "tools.h"
#include "Commande.h"

Commande::Commande()
{
	id_commande = 0;
	reference = "";
	date_livraison = "";
	date_emission = "";
	montant_ht = 0;
	montant_ttc = 0;
}

Commande::Commande(int id_com, System::String^ ref, System::String^ date_l, System::String^ date_em, int mont_ht, int mont_ttc)
{
	id_commande = id_com;
	reference = ref;
	date_livraison = date_l;
	date_emission = date_em;
	montant_ht = mont_ht;
	montant_ttc = mont_ttc;
}

void Commande::setId_Commande(int a)
{
	this->id_commande = a;
}

void Commande::setReference(System::String^ a)
{
	this->reference = a;
}

void Commande::setDate_Livraison(System::String^ a)
{
	this->date_livraison = a;
}

void Commande::setDate_Emission(System::String^ a)
{
	this->date_emission = a;
}

void Commande::setMontant_HT(int a)
{
	this->montant_ht = a;
}

void Commande::setMontant_TTC(int a)
{
	this->montant_ttc = a;
}

int Commande::getId_Commande()
{
	return this->id_commande;
}

System::String^ Commande::getReference()
{
	return this->reference;
}

System::String^ Commande::getDate_Emission()
{
	return this->date_emission;
}

System::String^ Commande::getDate_Livraison()
{
	return this->date_livraison;
}

int Commande::getMontant_HT()
{
	return this->montant_ht;
}

int Commande::getMontant_TTC()
{
	return this->montant_ttc;
}

System::String^ Commande::Insert()
{
	return "insert";
}

System::String^ Commande::Select()
{
	return "select";
}

System::String^ Commande::Update()
{
	return "update";
}

System::String^ Commande::Delete()
{
	return "delete";
}