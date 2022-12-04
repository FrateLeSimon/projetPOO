#include "tools.h"

ref class clientMap
{
private:
	System::String^ sSql;
	
	int id_client;
	System::String^ nom;
	System::String^ prenom;
	System::String^ num_rue_livraison;
	System::String^ num_rue_facturation;
	System::String^ nom_rue_livraison;
	System::String^ nom_rue_facturation;
	System::String^ ville_livraison;
	System::String^ ville_facturation;
	System::Int32^ code_postal_livraison;
	System::Int32^ code_postal_facturation;
	System::String^ date_naissance;
	System::String^ date_premier_achat;
public:
	clientMap();
	clientMap(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::Int32^, System::Int32^, System::String^, System::String^);
	void setId_Client(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setNum_Rue_Livraison(System::String^);
	void setNum_Rue_Facturation(System::String^);
	void setNom_Rue_Livraison(System::String^);
	void setNom_Rue_Facturation(System::String^);
	void setVille_Livraison(System::String^);
	void setVille_Facturation(System::String^);
	void setCode_Postal_Facturation(System::Int32^);
	void setCode_Postal_Livraison(System::Int32^);
	void setDate_Naissance(System::String^);
	void setDate_Premier_Achat(System::String^);
	int getId_Client();
	System::String^ getNom();
	System::String^ getPrenom();
	System::String^ getNum_Rue_Livraison();
	System::String^ getNum_Rue_Facturation();
	System::String^ getNom_Rue_Livraison();
	System::String^ getNom_Rue_Facturation();
	System::String^ getVille_Livraison();
	System::String^ getVille_Factorisation();
	System::Int32^ getCode_Postal_Livraison();
	System::Int32^ getCode_Postal_Facturation();
	System::String^ getDate_Naissance();
	System::String^ getDate_Premier_Achat();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};


ref class personnelMap {
private:
	System::String^ sSql;
	
	int id_personnel;
	System::String^ nom;
	System::String^ prenom;
	System::Int32^ id_superieur;
	System::String^ num_rue;
	System::String^ nom_rue;
	System::String^ ville;
	System::Int32^ code_postal;
	System::String^ date_embauche;
	System::Boolean^ admin;
public:
	personnelMap();
	personnelMap(int, System::String^, System::String^, System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::String^, System::Boolean^);
	void setId_Personnel(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setId_Superieur(System::Int32^);
	void setNum_Rue(System::String^);
	void setNom_Rue(System::String^);
	void setVille(System::String^);
	void setCode_Postal(System::Int32^);
	void setDate_Embauche(System::String^);
	void setAdmin(System::Boolean^);
	int getId_Personnel();
	System::String^ getNom();
	System::String^ getPrenom();
	System::Int32^ getId_Superieur();
	System::String^ getNum_Rue();
	System::String^ getNom_Rue();
	System::String^ getVille();
	System::Int32^ getCode_Postal();
	System::String^ getDate_Embauche();
	System::Boolean^ getAdmin();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};


ref class commandeMap
{
private:
	System::String^ sSql;
	
	int id_commande;
	System::String^ reference;
	System::String^ date_livraison;
	System::String^ date_emission;
	System::Int32^ montant_ht;
	System::Int32^ montant_ttc;
public:
	commandeMap();
	commandeMap(int, System::String^, System::String^, System::String^, System::Int32^, System::Int32^);
	void setId_Commande(int);
	void setReference(System::String^);
	void setDate_Livraison(System::String^);
	void setDate_Emission(System::String^);
	void setMontant_HT(System::Int32^);
	void setMontant_TTC(System::Int32^);
	int getId_Commande();
	System::String^ getReference();
	System::String^ getDate_Livraison();
	System::String^ getDate_Emission();
	System::Int32^ getMontant_HT();
	System::Int32^ getMontant_TTC();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};



ref class articleMap
{
private:
	System::String^ sSql;

	int id_article;
	System::String^ nom_article;
	System::Int32^ quantite_stock;
	System::Int32^ prix_article;
	System::Int32^ seuil;
	System::String^ couleur;
public:
	articleMap();
	articleMap(int, System::String^, System::Int32^, System::Int32^, System::Int32^, System::String^);
	void setId_Article(int);
	void setNom_Article(System::String^);
	void setQuantite_Stock(System::Int32^);
	void setPrix_Article(System::Int32^);
	void setSeuil(System::Int32^);
	void setCouleur(System::String^);
	int getId_Article();
	System::String^ getNom_Article();
	System::Int32^ getQuantite_Stock();
	System::Int32^ getPrix_Article();
	System::Int32^ getSeuil();
	System::String^ getCouleur();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};