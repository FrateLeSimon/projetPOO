#include "tools.h"

ref class clientMap
{
private:
	System::String^ sSql;
	
	System::String^ id_client;
	System::String^ nom;
	System::String^ prenom;
	System::String^ num_rue_livraison;
	System::String^ num_rue_facturation;
	System::String^ nom_rue_livraison;
	System::String^ nom_rue_facturation;
	System::String^ ville_livraison;
	System::String^ ville_facturation;
	System::String^ code_postal_livraison;
	System::String^ code_postal_facturation;
	System::String^ date_naissance;
	System::String^ date_premier_achat;
public:
	clientMap();
	clientMap(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void setId_Client(System::String^);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setNum_Rue_Livraison(System::String^);
	void setNum_Rue_Facturation(System::String^);
	void setNom_Rue_Livraison(System::String^);
	void setNom_Rue_Facturation(System::String^);
	void setVille_Livraison(System::String^);
	void setVille_Facturation(System::String^);
	void setCode_Postal_Facturation(System::String^);
	void setCode_Postal_Livraison(System::String^);
	void setDate_Naissance(System::String^);
	void setDate_Premier_Achat(System::String^);
	System::String^ getId_Client();
	System::String^ getNom();
	System::String^ getPrenom();
	System::String^ getNum_Rue_Livraison();
	System::String^ getNum_Rue_Facturation();
	System::String^ getNom_Rue_Livraison();
	System::String^ getNom_Rue_Facturation();
	System::String^ getVille_Livraison();
	System::String^ getVille_Factorisation();
	System::String^ getCode_Postal_Livraison();
	System::String^ getCode_Postal_Facturation();
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
	
	System::String^ id_personnel;
	System::String^ nom;
	System::String^ prenom;
	System::String^ id_superieur;
	System::String^ num_rue;
	System::String^ nom_rue;
	System::String^ ville;
	System::String^ code_postal;
	System::String^ date_embauche;
	System::String^ admin;
public:
	personnelMap();
	personnelMap(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void setId_Personnel(System::String^);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setId_Superieur(System::String^);
	void setNum_Rue(System::String^);
	void setNom_Rue(System::String^);
	void setVille(System::String^);
	void setCode_Postal(System::String^);
	void setDate_Embauche(System::String^);
	void setAdmin(System::String^);
	System::String^ getId_Personnel();
	System::String^ getNom();
	System::String^ getPrenom();
	System::String^ getId_Superieur();
	System::String^ getNum_Rue();
	System::String^ getNom_Rue();
	System::String^ getVille();
	System::String^ getCode_Postal();
	System::String^ getDate_Embauche();
	System::String^ getAdmin();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};


ref class commandeMap
{
private:
	System::String^ sSql;
	
	System::String^ id_commande;
	System::String^ id_client;
	System::String^ reference;
	System::String^ date_livraison;
	System::String^ date_emission;
	System::String^ montant_ht;
	System::String^ montant_ttc;
public:
	commandeMap();
	commandeMap(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void setId_Commande(System::String^);
	void setId_Client(System::String^);
	void setReference(System::String^);
	void setDate_Livraison(System::String^);
	void setDate_Emission(System::String^);
	void setMontant_HT(System::String^);
	void setMontant_TTC(System::String^);
	System::String^ getId_Commande();
	System::String^ getId_Client();
	System::String^ getReference();
	System::String^ getDate_Livraison();
	System::String^ getDate_Emission();
	System::String^ getMontant_HT();
	System::String^ getMontant_TTC();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};



ref class articleMap
{
private:
	System::String^ sSql;

	System::String^ id_article;
	System::String^ nom_article;
	System::String^ quantite_stock;
	System::String^ prix_article;
	System::String^ seuil;
	System::String^ couleur;
public:
	articleMap();
	articleMap(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void setId_Article(System::String^);
	void setNom_Article(System::String^);
	void setQuantite_Stock(System::String^);
	void setPrix_Article(System::String^);
	void setSeuil(System::String^);
	void setCouleur(System::String^);
	System::String^ getId_Article();
	System::String^ getNom_Article();
	System::String^ getQuantite_Stock();
	System::String^ getPrix_Article();
	System::String^ getSeuil();
	System::String^ getCouleur();

	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};


ref class statsMap
{
private:
	System::String^ sSql;

	System::String^ mois;
	System::String^ nom;
	System::String^ prenom;
	System::String^ id;
	System::String^ TVA;
	System::String^ marge;
	System::String^ remise;
	System::String^ demarque;

public:
	void setMois(System::String^);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setId(System::String^);
	void setTVA(System::String^);
	void setMarge(System::String^);
	void setRemise(System::String^);
	void setDemarque(System::String^);
	System::String^ getMois();
	System::String^ getNom();
	System::String^ getPrenom();
	System::String^ getId();
	System::String^ getTVA();
	System::String^ getMarge();
	System::String^ getRemise();
	System::String^ getDemarque();

	System::String^ SelectPanierMoyen();
	System::String^ SelectChiffreAffaire();
	System::String^ SelectSeuilAppro();
	System::String^ SelectMontantTotalAchat();
	System::String^ SelectArticlePlusVendu();
	System::String^ SelectArticleMoinsVendu();
	System::String^ SelectValComStock();
	System::String^ SelectValAchatStock();
	System::String^ SelectSimulation();
	
};

