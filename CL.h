#include "tools.h"


class Article
{
private:
	int id_article;
	string nom_article;
	int quantite_stock;
	int prix_article;
	int seuil;
	string couleur;
public:
	Article();
	Article(int, string, int, int, int, string);
	void setId_Article(int);
	void setNom_Article(string);
	void setQuantite_Stock(int);
	void setPrixArticle(int);
	void setSeuil(int);
	void setCouleur(string);
	int getId_Article();
	string getNom_Article();
	int getQuantite_Stock();
	int getPrix_Article();
	int getSeuil();
	string getCouleur();
	string Insert();
	string Select();
	string Update();
	string Delete();
};

class Client
{
private:
	int id_client;
	string nom;
	string prenom;
	string num_rue_livraison;
	string num_rue_facturation;
	string nom_rue_livraison;
	string nom_rue_facturation;
	string ville_livraison;
	string ville_facturation;
	int code_postal_livraison;
	int code_postal_facturation;
	string date_naissance;
	string date_premier_achat;
public:
	Client();
	Client(int, string, string, string, string, string, string, string, string, int, int, string, string);
	void setId_Client(int);
	void setNom(string);
	void setPrenom(string);
	void setNum_Rue_Livraison(string);
	void setNum_Rue_Facturation(string);
	void setNom_Rue_Livraison(string);
	void setNom_Rue_Facturation(string);
	void setVille_Livraison(string);
	void setVille_Facturation(string);
	void setCode_Postal_Facturation(int);
	void setCode_Postal_Livraison(int);
	void setDate_Naissance(string);
	void setDate_Premier_Achat(string);
	int getId_Client();
	string getNom();
	string getPrenom();
	string getNum_Rue_Livraison();
	string getNum_Rue_Facturation();
	string getNom_Rue_Livraison();
	string getNom_Rue_Facturation();
	string getVille_Livraison();
	string getVille_Factorisation();
	int getCode_Postal_Livraison();
	int getCode_Postal_Facturation();
	string getDate_Naissance();
	string getDate_Premier_Achat();
	string Insert();
	string Select();
	string Update();
	string Delete();
};

class Commande
{
private:
	int id_commande;
	string reference;
	string date_livraison;
	string date_emission;
	int montant_ht;
	int montant_ttc;
public:
	Commande();
	Commande(int, string, string, string, int, int);
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

class Personnel {
private:
	int id_personnel;
	string nom;
	string prenom;
	int id_superieur;
	string num_rue;
	string nom_rue;
	string ville;
	int code_postal;
	string date_embauche;
	bool admin;
public:
	Personnel();
	Personnel(int, string, string, int, string, string, string, int, string, bool);
	void setId_Personnel(int);
	void setNom(string);
	void setPrenom(string);
	void setId_Superieur(int);
	void setNum_Rue(string);
	void setNom_Rue(string);
	void setVille(string);
	void setDate_Embauche(string);
	void setAdmin(bool);
	int getId_Personnel();
	string getNom();
	string getPrenom();
	int getId_Superieur();
	string getNum_Rue();
	string getNom_Rue();
	string getVille();
	int getCodePostal();
	string getDate_Embauche();
	bool getAdmin();
	string Insert();
	string Select();
	string Update();
	string Delete();
};