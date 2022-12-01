#include "tools.h"
#include "Facture.h"

Facture::Facture()
{
	id_facture = "";
	nom_societe = "";
	num_rue_societe = "";
	nom_rue_societe = "";
	ville_societe = "";
	code_postal_societe = 0;
	logo_societe = "";
	nbr_paiements = 0;
	somme_paiements = 0;
	moyen = "";
}

void Facture::setId_Facture(string a)
{
	this->id_facture = a;
}

void Facture::setNom_Societe(string a)
{
	this->nom_societe = a;
}

void Facture::setNum_Rue_Societe(string a)
{
	this->num_rue_societe = a;
}

void Facture::setNom_Rue_Societe(string a)
{
	this->nom_rue_societe = a;
}

void Facture::setVille_Societe(string a)
{
	this->ville_societe = a;
}

void Facture::setCode_Postal_Societe(int a)
{
	this->code_postal_societe = a;
}

void Facture::setLogo_Societe(string a)
{
	this->logo_societe = a;
}

void Facture::setNbr_Paiements(int a)
{
	this->nbr_paiements = a;
}

void Facture::setSomme_Paiements(int a)
{
	this->somme_paiements = a;
}

void Facture::setMoyen(string a)
{
	this->moyen = a;
}

string Facture::getId_Facture()
{
	return this->id_facture;
}

string Facture::getNum_Rue_Societe()
{
	return this->num_rue_societe;
}

string Facture::getNom_Rue_Societe()
{
	return this->nom_rue_societe;
}

string Facture::getVille_Societe()
{
	return this->ville_societe;
}

int Facture::getCode_Postal()
{
	return this->code_postal_societe;
}

string Facture::getLogo_Societe()
{
	return this->logo_societe;
}

int Facture::getNbr_Paiements()
{
	return this->nbr_paiements;
}

int Facture::getSomme_Paiements()
{
	return this->somme_paiements;
}

string Facture::getMoyen()
{
	return this->moyen;
}

