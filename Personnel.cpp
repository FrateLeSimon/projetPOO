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

Personnel::Personnel(int id_per, System::String^ v_nom, System::String^ v_prenom, int id_sup, System::String^ num_r, System::String^ nom_r, System::String^ v_ville, int code_post, System::String^ date_emb, 
	bool adm)
{
	id_personnel = id_per;
	nom = v_nom;
	prenom = v_prenom;
	id_superieur = id_sup;
	num_rue = num_r;
	nom_rue = nom_r;
	ville = v_ville;
	code_postal = code_post;
	date_embauche = date_emb;
	admin = adm;
}

void Personnel::setId_Personnel(int a)
{
	this->id_personnel = a;
}

void Personnel::setNom(System::String^ a)
{
	this->nom = a;
}

void Personnel::setPrenom(System::String^ a)
{
	this->prenom = a;
}

void Personnel::setId_Superieur(int a)
{
	this->id_superieur = a;
}

void Personnel::setNum_Rue(System::String^ a)
{
	this->num_rue = a;
}

void Personnel::setNom_Rue(System::String^ a)
{
	this->nom_rue = a;
}

void Personnel::setVille(System::String^ a)
{
	this->ville = a;
}

void Personnel::setDate_Embauche(System::String^ a)
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

System::String^ Personnel::getNom()
{
	return this->nom;
}

System::String^ Personnel::getPrenom()
{
	return this->prenom;
}

int Personnel::getId_Superieur()
{
	return this->id_superieur;
}

System::String^ Personnel::getNum_Rue()
{
	return this->num_rue;
}

System::String^ Personnel::getNom_Rue()
{
	return this->nom_rue;
}

System::String^ Personnel::getVille()
{
	return this->ville;
}

int Personnel::getCodePostal()
{
	return this->code_postal;
}

System::String^ Personnel::getDate_Embauche()
{
	return this->date_embauche;
}

bool Personnel::getAdmin()
{
	return this->admin;
}

System::String^ Personnel::Insert()
{
	return "insert";
}

System::String^ Personnel::Select()
{
	return "select";
}

System::String^ Personnel::Update()
{
	return "update";
}

System::String^ Personnel::Delete()
{
	return "delete";
}