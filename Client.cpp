#include "tools.h"
#include "Client.h"

Client::Client()
{
	id_client = 0;
	nom = "";
	prenom = "";
	num_rue_livraison = "";
	num_rue_facturation = "";
	nom_rue_livraison = "";
	nom_rue_facturation = "";
	ville_livraison = "";
	ville_facturation = "";
	code_postal_livraison = 0;
	code_postal_facturation = 0;
	date_naissance = "";
	date_premier_achat = "";
}

Client::Client(int id_cl, System::String^ v_nom, System::String^ v_prenom, System::String^ num_r_l, System::String^ num_r_f, System::String^ nom_r_l, System::String^ nom_r_f, System::String^ ville_l, System::String^ ville_f, 
	int code_post_l, int code_post_f, System::String^ date_n, System::String^ date_p_a)
{
	id_client = id_cl;
	nom = v_nom;
	prenom = v_prenom;
	num_rue_livraison = num_r_l;
	num_rue_facturation = num_r_f;
	nom_rue_livraison = nom_r_l;
	nom_rue_facturation = nom_r_f;
	ville_livraison = ville_l;
	ville_facturation = ville_f;
	code_postal_livraison = code_post_l;
	code_postal_facturation = code_post_f;
	date_naissance = date_n;
	date_premier_achat = date_p_a;
}

void Client::setId_Client(int a)
{
	this->id_client = a;
}

void Client::setNom(System::String^ a)
{
	this->nom = a;
}

void Client::setPrenom(System::String^ a)
{
	this->prenom = a;
}

void Client::setNum_Rue_Livraison(System::String^ a)
{
	this->num_rue_livraison = a;
}

void Client::setNum_Rue_Facturation(System::String^ a)
{
	this->num_rue_facturation = a;
}

void Client::setNom_Rue_Livraison(System::String^ a)
{
	this->nom_rue_livraison = a;
}

void Client::setNom_Rue_Facturation(System::String^ a)
{
	this->nom_rue_facturation = a;
}

void Client::setVille_Livraison(System::String^ a)
{
	this->ville_livraison = a;
}

void Client::setVille_Facturation(System::String^ a)
{
	this->ville_facturation = a;
}

void Client::setCode_Postal_Facturation(int a)
{
	this->code_postal_facturation = a;
}

void Client::setCode_Postal_Livraison(int a)
{
	this->code_postal_livraison = a;
}

void Client::setDate_Naissance(System::String^ a)
{
	this->date_naissance = a;
}

void Client::setDate_Premier_Achat(System::String^ a)
{
	this->date_premier_achat = a;
}

int Client::getId_Client()
{
	return this->id_client;
}

System::String^ Client::getNom()
{
	return this->nom;
}

System::String^ Client::getPrenom()
{
	return this->prenom;
}

System::String^ Client::getNum_Rue_Livraison()
{
	return this->num_rue_livraison;
}

System::String^ Client::getNum_Rue_Facturation()
{
	return this->num_rue_facturation;
}

System::String^ Client::getNom_Rue_Facturation()
{
	return this->nom_rue_facturation;
}

System::String^ Client::getNom_Rue_Livraison()
{
	return this->nom_rue_livraison;
}

System::String^ Client::getVille_Livraison()
{
	return this->ville_livraison;
}

System::String^ Client::getVille_Factorisation()
{
	return this->ville_facturation;
}

int Client::getCode_Postal_Facturation()
{
	return this->code_postal_facturation;
}

int Client::getCode_Postal_Livraison()
{
	return this->code_postal_livraison;
}

System::String^ Client::getDate_Naissance()
{
	return this->date_naissance;
}

System::String^ Client::getDate_Premier_Achat()
{
	return this->date_premier_achat;
}

System::String^ Client::Insert()
{
	return "insert";
}

System::String^ Client::Select()
{
	return "select";
}

System::String^ Client::Update()
{
	return "update";
}

System::String^ Client::Delete()
{
	return "delete";
}