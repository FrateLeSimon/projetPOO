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

Commande::Commande(int id_com, string ref, string date_l, string date_em, int mont_ht, int mont_ttc)
{
	this->id_commande = id_com;
	this->reference = ref;
	this->date_livraison = date_l;
	this->date_emission = date_em;
	this->montant_ht = mont_ht;
	this->montant_ttc = mont_ttc;
}

void Commande::setId_Commande(int a)
{
	this->id_commande = a;
}

void Commande::setReference(string a)
{
	this->reference = a;
}

void Commande::setDate_Livraison(string a)
{
	this->date_livraison = a;
}

void Commande::setDate_Emission(string a)
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

string Commande::getReference()
{
	return this->reference;
}

string Commande::getDate_Emission()
{
	return this->date_emission;
}

string Commande::getDate_Livraison()
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

string Commande::Insert()
{
	return "insert";
}

string Commande::Select()
{
	return "select";
}

string Commande::Update()
{
	return "update";
}

string Commande::Delete()
{
	return "delete";
}