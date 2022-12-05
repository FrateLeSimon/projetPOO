#include "CLmap.h"

clientMap::clientMap() 
	:id_client(0), nom(""), prenom(""), num_rue_livraison(""), num_rue_facturation(""), nom_rue_livraison(""), nom_rue_facturation(""),
	ville_livraison(""), ville_facturation(""), code_postal_livraison(0), code_postal_facturation(0), date_naissance(""), date_premier_achat("")
{}
clientMap::clientMap(int id_cl, System::String^ v_nom, System::String^ v_prenom, System::String^ num_r_l, System::String^ num_r_f, System::String^ nom_r_l, 
	System::String^ nom_r_f, System::String^ ville_l, System::String^ ville_f, System::Int32^ code_post_l, System::Int32^ code_post_f, System::String^ date_n, System::String^ date_p_a)
	:id_client(id_cl), nom(v_nom), prenom(v_prenom), num_rue_livraison(num_r_l), num_rue_facturation(num_r_f), nom_rue_livraison(nom_r_l), nom_rue_facturation(nom_r_f),
	ville_livraison(ville_l), ville_facturation(ville_f), code_postal_livraison(code_post_l), code_postal_facturation(code_post_f), date_naissance(date_n), date_premier_achat(date_p_a)
{}
void clientMap::setId_Client(int a){this->id_client = a;}
void clientMap::setNom(System::String^ a){this->nom = a;}
void clientMap::setPrenom(System::String^ a){this->prenom = a;}
void clientMap::setNum_Rue_Livraison(System::String^ a){this->num_rue_livraison = a;}
void clientMap::setNum_Rue_Facturation(System::String^ a){this->num_rue_facturation = a;}
void clientMap::setNom_Rue_Livraison(System::String^ a){this->nom_rue_livraison = a;}
void clientMap::setNom_Rue_Facturation(System::String^ a){this->nom_rue_facturation = a;}
void clientMap::setVille_Livraison(System::String^ a){this->ville_livraison = a;}
void clientMap::setVille_Facturation(System::String^ a){this->ville_facturation = a;}
void clientMap::setCode_Postal_Facturation(System::Int32^ a){this->code_postal_facturation = a;}
void clientMap::setCode_Postal_Livraison(System::Int32^ a){this->code_postal_livraison = a;}
void clientMap::setDate_Naissance(System::String^ a){this->date_naissance = a;}
void clientMap::setDate_Premier_Achat(System::String^ a){this->date_premier_achat = a;}
int clientMap::getId_Client(){return this->id_client;}
System::String^ clientMap::getNom(){return this->nom;}
System::String^ clientMap::getPrenom(){return this->prenom;}
System::String^ clientMap::getNum_Rue_Livraison(){return this->num_rue_livraison;}
System::String^ clientMap::getNum_Rue_Facturation(){return this->num_rue_facturation;}
System::String^ clientMap::getNom_Rue_Facturation(){return this->nom_rue_facturation;}
System::String^ clientMap::getNom_Rue_Livraison(){return this->nom_rue_livraison;}
System::String^ clientMap::getVille_Livraison(){return this->ville_livraison;}
System::String^ clientMap::getVille_Factorisation(){return this->ville_facturation;}
System::Int32^ clientMap::getCode_Postal_Facturation(){return this->code_postal_facturation;}
System::Int32^ clientMap::getCode_Postal_Livraison(){return this->code_postal_livraison;}
System::String^ clientMap::getDate_Naissance(){return this->date_naissance;}
System::String^ clientMap::getDate_Premier_Achat(){return this->date_premier_achat;}

System::String^ clientMap::Select(){
	return "SELECT prenom, nom, a1.num_rue AS num_rue_livraison, a1.nom_rue AS nom_rue_livraison, v1.code_postal AS code_postal_livraison, v1.nom_ville AS ville_livraison, a2.num_rue AS num_rue_facturation, a2.nom_rue AS nom_rue_facturation, v2.code_postal AS code_postal_facturation, v2.nom_ville AS ville_facturation, cal1.c_date AS date_naissance, d.c_date AS date_premier_achat FROM client AS c INNER JOIN humain AS h ON c.id_humain = h.id_humain INNER JOIN adresse AS a1 ON c.id_adresse_livraison = a1.id_adresse INNER JOIN ville AS v1 ON a1.id_ville = v1.id_ville INNER JOIN adresse AS a2 ON c.id_adresse_facturation = a2.id_adresse INNER JOIN ville AS v2 ON a2.id_ville = v2.id_ville INNER JOIN calendrier AS cal1 ON c.id_date_naissance = cal1.id_calendrier left JOIN(SELECT TOP 100 co.id_client, cal2.c_date FROM commande AS co INNER JOIN calendrier AS cal2 ON co.id_date_emission = cal2.id_calendrier ORDER BY cal2.c_date) AS d ON c.id_client = d.id_client";
}




System::String^ clientMap::Insert(){
	return "INSERT INTO humain VALUES(this->nom, this->prenom) INSERT INTO calendrier VALUES(this->date_naissance) INSERT INTO adresse VALUES (this->num_rue_facturation, this->nom_rue_facturation, this->ville_facturation), (this->num_rue_livraison, this->nom_rue_livraison, this->ville_livraison) INSERT INTO client VALUES ((SELECT id_calendrier FROM calendrier WHERE c_date = this->date_naissance), (SELECT id_adresse FROM adresse WHERE(num_rue = this->num_rue_livraison and nom_rue = this->nom_rue_livraison and id_ville = this->ville_livraison)), (SELECT id_adresse FROM adresse WHERE(num_rue = this->num_rue_facturation and nom_rue = this->nom_rue_facturation and id_ville = this->ville_facturation)), (SELECT id_humain FROM humain WHERE nom = this->nom and prenom = this->prenom)); ";
}
System::String^ clientMap::Update(){return "update";}
System::String^ clientMap::Delete(){return "delete";}



personnelMap::personnelMap()
	: id_personnel(0), nom(""), prenom(""), id_superieur(0), num_rue(""), nom_rue(""), ville(""), date_embauche(""), admin(false)

{}
personnelMap::personnelMap(int id_pers, System::String^ v_nom, System::String^ v_prenom, System::Int32^ id_sup, System::String^ num_r, System::String^ nom_r, System::String^ v_ville, System::Int32^ code_p, System::String^ date_e, System::Boolean^ v_admin)
	: id_personnel(id_pers), nom(v_nom), prenom(v_prenom), id_superieur(id_sup), num_rue(num_r), nom_rue(nom_r), ville(v_ville), code_postal(code_p), date_embauche(date_e), admin(v_admin)
{}
void personnelMap::setId_Personnel(int a) { this->id_personnel = a; }
void personnelMap::setNom(System::String^ a) { this->nom = a; }
void personnelMap::setPrenom(System::String^ a) { this->prenom = a; }
void personnelMap::setId_Superieur(System::Int32^ a) { this->id_superieur = a; }
void personnelMap::setNum_Rue(System::String^ a) { this->num_rue = a; }
void personnelMap::setNom_Rue(System::String^ a) { this->nom_rue = a; }
void personnelMap::setVille(System::String^ a) { this->ville = a; }
void personnelMap::setCode_Postal(System::Int32^ a) { this->code_postal = a; }
void personnelMap::setDate_Embauche(System::String^ a) { this->date_embauche = a; }
void personnelMap::setAdmin(System::Boolean^ a) { this->admin = a; }
int personnelMap::getId_Personnel() { return this->id_personnel; }
System::String^ personnelMap::getNom() { return this->nom; }
System::String^ personnelMap::getPrenom() { return this->prenom; }
System::Int32^ personnelMap::getId_Superieur() { return this->id_superieur; }
System::String^ personnelMap::getNum_Rue() { return this->num_rue; }
System::String^ personnelMap::getNom_Rue() { return this->nom_rue; }
System::String^ personnelMap::getVille() { return this->ville; }
System::Int32^ personnelMap::getCode_Postal() { return this->code_postal; }
System::String^ personnelMap::getDate_Embauche() { return this->date_embauche; }
System::Boolean^ personnelMap::getAdmin() { return this->admin; }

System::String^ personnelMap::Insert() { return "insert"; }
System::String^ personnelMap::Select() { return "select"; }
System::String^ personnelMap::Update() { return "update"; }
System::String^ personnelMap::Delete() { return "delete"; }



commandeMap::commandeMap()
	: id_commande(0), reference(""), date_livraison(""), date_emission(""), montant_ht(0), montant_ttc(0)
{}
commandeMap::commandeMap(int id_com, System::String^ v_ref, System::String^ v_date_liv, System::String^ v_date_em, System::Int32^ v_montant_ht, System::Int32^ v_montant_ttc)
	: id_commande(id_com), reference(v_ref), date_livraison(v_date_liv), date_emission(v_date_em), montant_ht(v_montant_ht), montant_ttc(v_montant_ttc)
{}
void commandeMap::setId_Commande(int a) { this->id_commande = a; }
void commandeMap::setReference(System::String^ a) { this->reference = a; }
void commandeMap::setDate_Livraison(System::String^ a) { this->date_livraison = a; }
void commandeMap::setDate_Emission(System::String^ a) { this->date_emission = a; }
void commandeMap::setMontant_HT(System::Int32^ a) { this->montant_ht = a; }
void commandeMap::setMontant_TTC(System::Int32^ a) { this->montant_ttc = a; }
int commandeMap::getId_Commande() { return this->id_commande; }
System::String^ commandeMap::getReference() { return this->reference; }
System::String^ commandeMap::getDate_Livraison() { return this->date_livraison; }
System::String^ commandeMap::getDate_Emission() { return this->date_emission; }
System::Int32^ commandeMap::getMontant_HT() { return this->montant_ht; }
System::Int32^ commandeMap::getMontant_TTC() { return this->montant_ttc; }

System::String^ commandeMap::Insert() { return "insert"; }
System::String^ commandeMap::Select() { return "select"; }
System::String^ commandeMap::Update() { return "update"; }
System::String^ commandeMap::Delete() { return "delete"; }



articleMap::articleMap()
	: id_article(0), nom_article(""), quantite_stock(0), prix_article(0), seuil(0), couleur("")
{}
articleMap::articleMap(int id_art, System::String^ v_nom_art, System::Int32^ v_quantite_stock, System::Int32^ v_prix_art, System::Int32^ v_seuil, System::String^ v_couleur)
	: id_article(id_art), nom_article(v_nom_art), quantite_stock(v_quantite_stock), prix_article(v_prix_art), seuil(v_seuil), couleur(v_couleur)
{}
void articleMap::setId_Article(int a) { this->id_article = a; }
void articleMap::setNom_Article(System::String^ a) { this->nom_article = a; }
void articleMap::setQuantite_Stock(System::Int32^ a) { this->quantite_stock = a; }
void articleMap::setPrix_Article(System::Int32^ a) { this->prix_article = a; }
void articleMap::setSeuil(System::Int32^ a) { this->seuil = a; }
void articleMap::setCouleur(System::String^ a) { this->couleur = a; }
int articleMap::getId_Article() { return this->id_article; }
System::String^ articleMap::getNom_Article() { return this->nom_article; }
System::Int32^ articleMap::getQuantite_Stock() { return this->quantite_stock; }
System::Int32^ articleMap::getPrix_Article() { return this->prix_article; }
System::Int32^ articleMap::getSeuil() { return this->seuil; }
System::String^ articleMap::getCouleur() { return this->couleur; }

System::String^ articleMap::Insert() { return "insert"; }
System::String^ articleMap::Select() { return "select"; }
System::String^ articleMap::Update() { return "update"; }
System::String^ articleMap::Delete() { return "delete"; }



void statsMap::setMois(System::String^ a) { this->mois = a; }
void statsMap::setNom(System::String^ a) { this->nom = a; }
void statsMap::setPrenom(System::String^ a) { this->prenom = a; }
void statsMap::setId(System::String^ a) { this->id = a; }
void statsMap::setTVA(System::String^ a) { this->TVA = a; }
void statsMap::setMarge(System::String^ a) { this->marge = a; }
void statsMap::setRemise(System::String^ a) { this->remise = a; }
void statsMap::setDemarque(System::String^ a) { this->demarque = a; }
System::String^ statsMap::getMois() { return this->mois; }
System::String^ statsMap::getNom() { return this->nom; }
System::String^ statsMap::getPrenom() { return this->prenom; }
System::String^ statsMap::getId() { return this->id; }
System::String^ statsMap::getTVA() { return this->TVA; }
System::String^ statsMap::getMarge() { return this->marge; }
System::String^ statsMap::getRemise() { return this->remise; }
System::String^ statsMap::getDemarque() { return this->demarque; }

System::String^ statsMap::panier_moy(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::chiffre_affaire(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::seuil_appro(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::montant_total_achat(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::arcticle_plus_vendu(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::article_moins_vendu(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::val_com_stock(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::val_achat_stock(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}
System::String^ statsMap::simulation(void){
	return "select mois, nom, prenom, id, TVA, marge, remise, demarque from stats";
}




	
