#include "tools.h"
#include "Personnel.h"

Personnel::Personnel()
{
    id_personnel = 0;
    nom = "";
    prenom = "";
    id_superieur = 0;
    num_rue = "";
    nom_rue = "";
    ville = "";
    code_postal = 0;
    date_embauche = "";
    admin = false;
}

void Personnel::setId_Personnel(int a)
{
	this->id_personnel = a;
}

void Personnel::setNom(string a)
{
	this->nom = a;
}

void Personnel::setPrenom(string a)
{
	this->prenom = a;
}

void Personnel::setId_Superieur(int a)
{
	this->id_superieur = a;
}

void Personnel::setNum_Rue(string a)
{
	this->num_rue = a;
}

void Personnel::setNom_Rue(string a)
{
	this->nom_rue = a;
}

void Personnel::setVille(string a)
{
	this->ville = a;
}

void Personnel::setDate_Embauche(string a)
{
	this->date_embauche = a;
}

void Personnel::setAdmin(bool a)
{
	this->admin = a;
}

int Personnel::getId_Personnel()
{
	return this->id_personnel;
}

string Personnel::getNom()
{
	return this->nom;
}

string Personnel::getPrenom()
{
	return this->prenom;
}

int Personnel::getId_Superieur()
{
	return this->id_superieur;
}

string Personnel::getNum_Rue()
{
	return this->num_rue;
}

string Personnel::getNom_Rue()
{
	return this->nom_rue;
}

string Personnel::getVille()
{
	return this->ville;
}

int Personnel::getCodePostal()
{
	return this->code_postal;
}

string Personnel::getDate_Embauche()
{
	return this->date_embauche;
}

bool Personnel::getAdmin()
{
	return this->admin;
}

string Personnel::Insert()
{
	return "insert";
}

string Personnel::Select()
{
	return "select";
}

string Personnel::Update()
{
	return "update";
}

string Personnel::Delete()
{
	return "delete";
}