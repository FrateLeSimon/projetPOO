  #include "CLservices.h"

clientServices::clientServices()
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oClient = gcnew clientMap();
}
System::Data::DataSet^ clientServices::selectionnerTousLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void clientServices::ajouterUnClient(System::String^ v_nom, System::String^ v_prenom, System::String^ num_r_l, System::String^ num_r_f, System::String^ nom_r_l,
	System::String^ nom_r_f, System::String^ ville_l, System::String^ ville_f, System::String^ code_post_l, System::String^ code_post_f, System::String^ date_n)
{
	System::String^ sql;

	this->oClient->setNom(v_nom);
	this->oClient->setPrenom(v_prenom);
	this->oClient->setNum_Rue_Livraison(num_r_l);
	this->oClient->setNum_Rue_Facturation(num_r_f);
	this->oClient->setNom_Rue_Livraison(nom_r_l);
	this->oClient->setNom_Rue_Facturation(nom_r_f);
	this->oClient->setVille_Livraison(ville_l);
	this->oClient->setVille_Facturation(ville_f);
	this->oClient->setCode_Postal_Livraison(code_post_l);
	this->oClient->setCode_Postal_Facturation(code_post_f);
	this->oClient->setDate_Naissance(date_n);

	
	sql = this->oClient->Insert();

	this->oCad->actionRows(sql);
}
void clientServices::modifierUnClient(System::String^ id,System::String^ v_nom, System::String^ v_prenom, System::String^ num_r_l, System::String^ num_r_f, System::String^ nom_r_l,
	System::String^ nom_r_f, System::String^ ville_l, System::String^ ville_f, System::String^ code_post_l, System::String^ code_post_f, System::String^ date_n)
{
	System::String^ sql;

	this->oClient->setNom(v_nom);
	this->oClient->setPrenom(v_prenom);
	this->oClient->setNum_Rue_Livraison(num_r_l);
	this->oClient->setNum_Rue_Facturation(num_r_f);
	this->oClient->setNom_Rue_Livraison(nom_r_l);
	this->oClient->setNom_Rue_Facturation(nom_r_f);
	this->oClient->setVille_Livraison(ville_l);
	this->oClient->setVille_Facturation(ville_f);
	this->oClient->setCode_Postal_Livraison(code_post_l);
	this->oClient->setCode_Postal_Facturation(code_post_f);
	this->oClient->setDate_Naissance(date_n);

	
	this->oClient->setId_Client(id);
	sql = this->oClient->Update();

	this->oCad->actionRows(sql);
}
void clientServices::supprimerUnClient(System::String^ id)
{
	System::String^ sql;

	this->oClient->setId_Client(id);
	sql = this->oClient->Delete();

	this->oCad->actionRows(sql);
}



personnelServices::personnelServices()
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oPersonnel = gcnew personnelMap();
}
System::Data::DataSet^ personnelServices::selectionnerTousLesPersonnels(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oPersonnel->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void personnelServices::ajouterUnPersonnel(System::String^ v_nom, System::String^ v_prenom, System::String^ id_sup, System::String^ num_r, 
	System::String^ nom_r, System::String^ v_ville, System::String^ code_p, System::String^ date_e, System::String^ v_admin)
{
	System::String^ sql;

	this->oPersonnel->setNom(v_nom);
	this->oPersonnel->setPrenom(v_prenom);
	this->oPersonnel->setId_Superieur(id_sup);
	this->oPersonnel->setNum_Rue(num_r);
	this->oPersonnel->setNom_Rue(nom_r);
	this->oPersonnel->setVille(v_ville);
	this->oPersonnel->setCode_Postal(code_p);
	this->oPersonnel->setDate_Embauche(date_e);
	this->oPersonnel->setAdmin(v_admin);
	
	sql = this->oPersonnel->Insert();

	this->oCad->actionRows(sql);
}
void personnelServices::modifierUnPersonnel(System::String^ id, System::String^ v_nom, System::String^ v_prenom, System::String^ id_sup, System::String^ num_r,
	System::String^ nom_r, System::String^ v_ville, System::String^ code_p, System::String^ date_e, System::String^ v_admin)
{
	System::String^ sql;

	this->oPersonnel->setNom(v_nom);
	this->oPersonnel->setPrenom(v_prenom);
	this->oPersonnel->setId_Superieur(id_sup);
	this->oPersonnel->setNum_Rue(num_r);
	this->oPersonnel->setNom_Rue(nom_r);
	this->oPersonnel->setVille(v_ville);
	this->oPersonnel->setCode_Postal(code_p);
	this->oPersonnel->setDate_Embauche(date_e);
	this->oPersonnel->setAdmin(v_admin);

	this->oPersonnel->setId_Personnel(id);
	sql = this->oPersonnel->Update();

	this->oCad->actionRows(sql);
}
void personnelServices::supprimerUnPersonnel(System::String^ id)
{
	System::String^ sql;

	this->oPersonnel->setId_Personnel(id);
	sql = this->oPersonnel->Delete();

	this->oCad->actionRows(sql);
}



commandeServices::commandeServices()
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oCommande = gcnew commandeMap();
}
System::Data::DataSet^ commandeServices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void commandeServices::ajouterUneCommande(System::String^ i_client,  System::String^ v_ref, System::String^ v_date_liv, System::String^ v_date_em, System::String^ v_montant_ht, System::String^ v_montant_ttc)
{
	System::String^ sql;

	this->oCommande->setId_Client(i_client);
	this->oCommande->setReference(v_ref);
	this->oCommande->setDate_Livraison(v_date_liv);
	this->oCommande->setDate_Emission(v_date_em);
	this->oCommande->setMontant_HT(v_montant_ht);
	this->oCommande->setMontant_TTC(v_montant_ttc);
	
	sql = this->oCommande->Insert();

	this->oCad->actionRows(sql);
}
void commandeServices::modifierUneCommande(System::String^ id, System::String^ i_client, System::String^ v_ref, System::String^ v_date_liv, System::String^ v_date_em, System::String^ v_montant_ht, System::String^ v_montant_ttc)
{
	System::String^ sql;

	this->oCommande->setId_Client(i_client);
	this->oCommande->setReference(v_ref);
	this->oCommande->setDate_Livraison(v_date_liv);
	this->oCommande->setDate_Emission(v_date_em);
	this->oCommande->setMontant_HT(v_montant_ht);
	this->oCommande->setMontant_TTC(v_montant_ttc);

	this->oCommande->setId_Commande(id);
	sql = this->oCommande->Update();

	this->oCad->actionRows(sql);
}
void commandeServices::supprimerUneCommande(System::String^ id)
{
	System::String^ sql;

	this->oCommande->setId_Commande(id);
	sql = this->oCommande->Delete();

	this->oCad->actionRows(sql);
}



articleServices::articleServices()
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oArticle = gcnew articleMap();
}
System::Data::DataSet^ articleServices::selectionnerTousLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oArticle->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void articleServices::ajouterUnArticle(System::String^ v_nom_art, System::String^ v_quantite_stock, System::String^ v_prix_art, System::String^ v_seuil, System::String^ v_couleur)
{
	System::String^ sql;

	this->oArticle->setNom_Article(v_nom_art);
	this->oArticle->setQuantite_Stock(v_quantite_stock);
	this->oArticle->setPrix_Article(v_prix_art);
	this->oArticle->setSeuil(v_seuil);
	this->oArticle->setCouleur(v_couleur);

	sql = this->oArticle->Insert();

	this->oCad->actionRows(sql);
}
void articleServices::modifierUnArticle(System::String^ id, System::String^ v_nom_art, System::String^ v_quantite_stock, System::String^ v_prix_art, System::String^ v_seuil, System::String^ v_couleur)
{
	System::String^ sql;

	this->oArticle->setNom_Article(v_nom_art);
	this->oArticle->setQuantite_Stock(v_quantite_stock);
	this->oArticle->setPrix_Article(v_prix_art);
	this->oArticle->setSeuil(v_seuil);
	this->oArticle->setCouleur(v_couleur);

	this->oArticle->setId_Article(id);
	sql = this->oArticle->Update();

	this->oCad->actionRows(sql);
}
void articleServices::supprimerUnArticle(System::String^ id)
{
	System::String^ sql;

	this->oArticle->setId_Article(id);
	sql = this->oArticle->Delete();

	this->oCad->actionRows(sql);
}



statsServices::statsServices()
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oStats = gcnew statsMap();
}
System::Data::DataSet^  statsServices::selectionnerPanierMoyen(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oStats->SelectPanierMoyen();
	return this->oCad->getRows(sql, dataTableName);
	
}
System::Data::DataSet^ statsServices::selectionnerChiffreAffaire(System::String^ dataTableName, System::String^ mois, System::String^ annee){
	System::String^ sql;

	this->oStats->setMois(mois);
	this->oStats->setAnnee(annee);
	sql = this->oStats->SelectChiffreAffaire();
	return this->oCad->getRows(sql, dataTableName);

}
System::Data::DataSet^  statsServices::selectionnerSeuilAppro(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oStats->SelectSeuilAppro();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^  statsServices::selectionnerMontantTotalAchat(System::String^ dataTableName, System::String^ id_client)
{
	System::String^ sql;

	this->oStats->setId(id_client);
	sql = this->oStats->SelectMontantTotalAchat();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^  statsServices::selectionnerArticlePlusVendu(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oStats->SelectArticlePlusVendu();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^  statsServices::selectionnerArticleMoinsVendu(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oStats->SelectArticleMoinsVendu();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^  statsServices::selectionnerValComStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oStats->SelectValComStock();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^  statsServices::selectionnerValAchatStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oStats->SelectValAchatStock();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^  statsServices::selectionnerSimulation(System::String^ dataTableName, System::String^ tva)
{
	System::String^ sql;

	this->oStats->setTVA(tva);
	sql = this->oStats->SelectSimulation();
	return this->oCad->getRows(sql, dataTableName);
}


