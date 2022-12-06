#include "CLmap.h"

clientMap::clientMap() 
	:id_client(""), nom(""), prenom(""), num_rue_livraison(""), num_rue_facturation(""), nom_rue_livraison(""), nom_rue_facturation(""),
	ville_livraison(""), ville_facturation(""), code_postal_livraison(""), code_postal_facturation(""), date_naissance(""), date_premier_achat("")
{}
clientMap::clientMap(System::String^ id_cl, System::String^ v_nom, System::String^ v_prenom, System::String^ num_r_l, System::String^ num_r_f, System::String^ nom_r_l, 
	System::String^ nom_r_f, System::String^ ville_l, System::String^ ville_f, System::String^ code_post_l, System::String^ code_post_f, System::String^ date_n, System::String^ date_p_a)
	:id_client(id_cl), nom(v_nom), prenom(v_prenom), num_rue_livraison(num_r_l), num_rue_facturation(num_r_f), nom_rue_livraison(nom_r_l), nom_rue_facturation(nom_r_f),
	ville_livraison(ville_l), ville_facturation(ville_f), code_postal_livraison(code_post_l), code_postal_facturation(code_post_f), date_naissance(date_n), date_premier_achat(date_p_a)
{}
void clientMap::setId_Client(System::String^ a){this->id_client = a;}
void clientMap::setNom(System::String^ a){this->nom = a;}
void clientMap::setPrenom(System::String^ a){this->prenom = a;}
void clientMap::setNum_Rue_Livraison(System::String^ a){this->num_rue_livraison = a;}
void clientMap::setNum_Rue_Facturation(System::String^ a){this->num_rue_facturation = a;}
void clientMap::setNom_Rue_Livraison(System::String^ a){this->nom_rue_livraison = a;}
void clientMap::setNom_Rue_Facturation(System::String^ a){this->nom_rue_facturation = a;}
void clientMap::setVille_Livraison(System::String^ a){this->ville_livraison = a;}
void clientMap::setVille_Facturation(System::String^ a){this->ville_facturation = a;}
void clientMap::setCode_Postal_Facturation(System::String^ a){this->code_postal_facturation = a;}
void clientMap::setCode_Postal_Livraison(System::String^ a){this->code_postal_livraison = a;}
void clientMap::setDate_Naissance(System::String^ a){this->date_naissance = a;}
void clientMap::setDate_Premier_Achat(System::String^ a){this->date_premier_achat = a;}
System::String^ clientMap::getId_Client(){return this->id_client;}
System::String^ clientMap::getNom(){return this->nom;}
System::String^ clientMap::getPrenom(){return this->prenom;}
System::String^ clientMap::getNum_Rue_Livraison(){return this->num_rue_livraison;}
System::String^ clientMap::getNum_Rue_Facturation(){return this->num_rue_facturation;}
System::String^ clientMap::getNom_Rue_Facturation(){return this->nom_rue_facturation;}
System::String^ clientMap::getNom_Rue_Livraison(){return this->nom_rue_livraison;}
System::String^ clientMap::getVille_Livraison(){return this->ville_livraison;}
System::String^ clientMap::getVille_Factorisation(){return this->ville_facturation;}
System::String^ clientMap::getCode_Postal_Facturation(){return this->code_postal_facturation;}
System::String^ clientMap::getCode_Postal_Livraison(){return this->code_postal_livraison;}
System::String^ clientMap::getDate_Naissance(){return this->date_naissance;}
System::String^ clientMap::getDate_Premier_Achat(){return this->date_premier_achat;}

System::String^ clientMap::Select(){
	return "SELECT prenom, nom, a1.num_rue AS num_rue_livraison, a1.nom_rue AS nom_rue_livraison, v1.code_postal AS code_postal_livraison, v1.nom_ville AS ville_livraison, a2.num_rue AS num_rue_facturation, a2.nom_rue AS nom_rue_facturation, v2.code_postal AS code_postal_facturation, v2.nom_ville AS ville_facturation, cal1.c_date AS date_naissance, d.c_date AS date_premier_achat FROM client AS c INNER JOIN humain AS h ON c.id_humain = h.id_humain INNER JOIN adresse AS a1 ON c.id_adresse_livraison = a1.id_adresse INNER JOIN ville AS v1 ON a1.id_ville = v1.id_ville INNER JOIN adresse AS a2 ON c.id_adresse_facturation = a2.id_adresse INNER JOIN ville AS v2 ON a2.id_ville = v2.id_ville INNER JOIN calendrier AS cal1 ON c.id_date_naissance = cal1.id_calendrier left JOIN(SELECT TOP 1"""" co.id_client, cal2.c_date FROM commande AS co INNER JOIN calendrier AS cal2 ON co.id_date_emission = cal2.id_calendrier ORDER BY cal2.c_date) AS d ON c.id_client = d.id_client";
}




System::String^ clientMap::Insert(){
	System::Console::WriteLine("INSERT INTO humain VALUES(" + this->nom + ',' + this->prenom + ") INSERT INTO calendrier VALUES(" + this->date_naissance + ") INSERT INTO adresse VALUES(" + this->num_rue_facturation + ',' + this->nom_rue_facturation + ',' + this->ville_facturation+"), (" + this->num_rue_livraison + ',' + this->nom_rue_livraison + ',' + this->ville_livraison + ") INSERT INTO client VALUES((SELECT id_calendrier FROM calendrier WHERE c_date = " + this->date_naissance + "), (SELECT id_adresse FROM adresse WHERE(num_rue = " + this->num_rue_livraison + " and nom_rue = " + this->nom_rue_livraison + " and id_ville = " + this->ville_livraison + ")), (SELECT id_adresse FROM adresse WHERE(num_rue = " + this->num_rue_facturation + " and nom_rue = " + this->nom_rue_facturation + " and id_ville = " + this->ville_facturation + ")), (SELECT id_humain FROM humain WHERE nom = " + this->nom + " and prenom = " + this->prenom + "); ");
	return "INSERT INTO humain VALUES(" + this->nom + ',' + this->prenom + ") INSERT INTO calendrier VALUES(" + this->date_naissance + ") INSERT INTO adresse VALUES(" + this->num_rue_facturation + ',' + this->nom_rue_facturation + ',' + this->ville_facturation+"),(" + this->num_rue_livraison + ',' + this->nom_rue_livraison + ',' + this->ville_livraison + ") INSERT INTO client VALUES((SELECT id_calendrier FROM calendrier WHERE c_date = " + this->date_naissance + "), (SELECT id_adresse FROM adresse WHERE(num_rue =" + this->num_rue_livraison + " and nom_rue =" + this->nom_rue_livraison + "and id_ville =" + this->ville_livraison + ")), (SELECT id_adresse FROM adresse WHERE(num_rue =" + this->num_rue_facturation + "and nom_rue =" + this->nom_rue_facturation + "and id_ville =" + this->ville_facturation + ")), (SELECT id_humain FROM humain WHERE nom =" + this->nom + " and prenom =" + this->prenom + "); ";
}
System::String^ clientMap::Update(){return "update";}
System::String^ clientMap::Delete(){return "delete";}



personnelMap::personnelMap()
	: id_personnel(""), nom(""), prenom(""), id_superieur(""), num_rue(""), nom_rue(""), ville(""), date_embauche(""), admin("")

{}
personnelMap::personnelMap(System::String^ id_pers, System::String^ v_nom, System::String^ v_prenom, System::String^ id_sup, System::String^ num_r, System::String^ nom_r, System::String^ v_ville, System::String^ code_p, System::String^ date_e, System::String^ v_admin)
	: id_personnel(id_pers), nom(v_nom), prenom(v_prenom), id_superieur(id_sup), num_rue(num_r), nom_rue(nom_r), ville(v_ville), code_postal(code_p), date_embauche(date_e), admin(v_admin)
{}
void personnelMap::setId_Personnel(System::String^ a) { this->id_personnel = a; }
void personnelMap::setNom(System::String^ a) { this->nom = a; }
void personnelMap::setPrenom(System::String^ a) { this->prenom = a; }
void personnelMap::setId_Superieur(System::String^ a) { this->id_superieur = a; }
void personnelMap::setNum_Rue(System::String^ a) { this->num_rue = a; }
void personnelMap::setNom_Rue(System::String^ a) { this->nom_rue = a; }
void personnelMap::setVille(System::String^ a) { this->ville = a; }
void personnelMap::setCode_Postal(System::String^ a) { this->code_postal = a; }
void personnelMap::setDate_Embauche(System::String^ a) { this->date_embauche = a; }
void personnelMap::setAdmin(System::String^ a) { this->admin = a; }
System::String^ personnelMap::getId_Personnel() { return this->id_personnel; }
System::String^ personnelMap::getNom() { return this->nom; }
System::String^ personnelMap::getPrenom() { return this->prenom; }
System::String^ personnelMap::getId_Superieur() { return this->id_superieur; }
System::String^ personnelMap::getNum_Rue() { return this->num_rue; }
System::String^ personnelMap::getNom_Rue() { return this->nom_rue; }
System::String^ personnelMap::getVille() { return this->ville; }
System::String^ personnelMap::getCode_Postal() { return this->code_postal; }
System::String^ personnelMap::getDate_Embauche() { return this->date_embauche; }
System::String^ personnelMap::getAdmin() { return this->admin; }

System::String^ personnelMap::Insert() { return "insert"; }

System::String^ personnelMap::Select(){ 
	return "SELECT nom AS Nom, prenom AS Prénom, c.c_date AS Date_d_embauche, a.num_rue AS Num_Rue, a.nom_rue AS Nom_Rue, v.nom_ville AS Ville FROM personnel AS p INNER JOIN humain AS h ON p.id_humain = h.id_humain INNER JOIN calendrier AS c ON p.id_calendrier = c.id_calendrier INNER JOIN adresse AS a ON p.id_adresse = a.id_adresse INNER JOIN ville AS v ON a.id_ville = v.id_ville"; 
}

System::String^ personnelMap::Update() { return "update"; }
System::String^ personnelMap::Delete() { return "delete"; }



commandeMap::commandeMap()
	: id_commande(""), id_client(""), reference(""), date_livraison(""), date_emission(""), montant_ht(""), montant_ttc("")
{}
commandeMap::commandeMap(System::String^ id_com, System::String^ id_cli, System::String^ v_ref, System::String^ v_date_liv, System::String^ v_date_em, System::String^ v_montant_ht, System::String^ v_montant_ttc)
	: id_commande(id_com), id_client(id_cli), reference(v_ref), date_livraison(v_date_liv), date_emission(v_date_em), montant_ht(v_montant_ht), montant_ttc(v_montant_ttc)
{}
void commandeMap::setId_Commande(System::String^ a) { this->id_commande = a; }
void commandeMap::setId_Client(System::String^ a) { this->id_client = a; }
void commandeMap::setReference(System::String^ a) { this->reference = a; }
void commandeMap::setDate_Livraison(System::String^ a) { this->date_livraison = a; }
void commandeMap::setDate_Emission(System::String^ a) { this->date_emission = a; }
void commandeMap::setMontant_HT(System::String^ a) { this->montant_ht = a; }
void commandeMap::setMontant_TTC(System::String^ a) { this->montant_ttc = a; }
System::String^ commandeMap::getId_Commande() { return this->id_commande; }
System::String^ commandeMap::getId_Client() { return this->id_client; }
System::String^ commandeMap::getReference() { return this->reference; }
System::String^ commandeMap::getDate_Livraison() { return this->date_livraison; }
System::String^ commandeMap::getDate_Emission() { return this->date_emission; }
System::String^ commandeMap::getMontant_HT() { return this->montant_ht; }
System::String^ commandeMap::getMontant_TTC() { return this->montant_ttc; }

System::String^ commandeMap::Insert() { return "insert"; }
System::String^ commandeMap::Select() { return "SELECT c.id_commande AS Reference_Commande, c.id_facture AS Facture, h.nom as Nom, prenom as Prenom, d1.c_date AS Date_de_livraison, d2.c_date AS Date_d_emission, art.nom AS Article, ct.quantite AS Quantite, f.montant_total_ht AS Montant_HT FROM commande AS c INNER JOIN facture AS f ON c.id_facture = f.id_facture INNER JOIN humain AS h ON c.id_client = h.id_humain INNER JOIN calendrier AS d1 ON c.id_date_livraison = d1.id_calendrier INNER JOIN calendrier AS d2 ON c.id_date_emission = d2.id_calendrier INNER JOIN contient AS ct ON c.id_commande = ct.id_commande INNER JOIN article AS art ON ct.id_article = art.id_article"; }
System::String^ commandeMap::Update() { return "update"; }
System::String^ commandeMap::Delete() { return "delete"; }



articleMap::articleMap()
	: id_article(""), nom_article(""), quantite_stock(""), prix_article(""), seuil(""), couleur("")
{}
articleMap::articleMap(System::String^ id_art, System::String^ v_nom_art, System::String^ v_quantite_stock, System::String^ v_prix_art, System::String^ v_seuil, System::String^ v_couleur)
	: id_article(id_art), nom_article(v_nom_art), quantite_stock(v_quantite_stock), prix_article(v_prix_art), seuil(v_seuil), couleur(v_couleur)
{}

void articleMap::setId_Article(System::String^ a) { this->id_article = a; }
void articleMap::setNom_Article(System::String^ a) { this->nom_article = a; }
void articleMap::setQuantite_Stock(System::String^ a) { this->quantite_stock = a; }
void articleMap::setPrix_Article(System::String^ a) { this->prix_article = a; }
void articleMap::setSeuil(System::String^ a) { this->seuil = a; }
void articleMap::setCouleur(System::String^ a) { this->couleur = a; }
System::String^ articleMap::getId_Article() { return this->id_article; }
System::String^ articleMap::getNom_Article() { return this->nom_article; }
System::String^ articleMap::getQuantite_Stock() { return this->quantite_stock; }
System::String^ articleMap::getPrix_Article() { return this->prix_article; }
System::String^ articleMap::getSeuil() { return this->seuil; }
System::String^ articleMap::getCouleur() { return this->couleur; }

System::String^ articleMap::Insert() { return "insert"; }
System::String^ articleMap::Select() { return "SELECT nom AS Nom_artcile, couleur AS Couleur, prix_article_ht AS Prix, seuil AS Seuil, t.taxe AS Taxe, quantite_stock AS Stock FROM article INNER JOIN taxe AS t ON article.id_taxe = t.id_taxe ORDER BY nom_article DESC"; }
System::String^ articleMap::Update() { return "update"; }
System::String^ articleMap::Delete() { return "delete"; }



void statsMap::setMois(System::String^ a) { this->mois = a; }
void statsMap::setId(System::String^ a) { this->id = a; }
void statsMap::setTVA(System::String^ a) { this->TVA = a; }
System::String^ statsMap::getMois() { return this->mois; }
System::String^ statsMap::getId() { return this->id; }
System::String^ statsMap::getTVA() { return this->TVA; }



System::String^ statsMap::SelectPanierMoyen()
{
	return "SELECT AVG(montant_ttc) FROM commande";
	
}

System::String^ statsMap::SelectChiffreAffaire()
{
	return "SELECT SUM(montant_ttc) FROM commande";
}

System::String^ statsMap::SelectSeuilAppro()
{
	return "SELECT SUM(quantite_stock) FROM article WHERE quantite_stock < seuil";
}

System::String^ statsMap::SelectMontantTotalAchat()
{
	return "SELECT SUM(prix_article) FROM article";
}

System::String^ statsMap::SelectArticlePlusVendu()
{
	return "SELECT nom_article, SUM(quantite) FROM article, commande, ligne_commande WHERE article.id_article = ligne_commande.id_article AND commande.id_commande = ligne_commande.id_commande GROUP BY nom_article ORDER BY SUM(quantite) DESC";
}

System::String^ statsMap::SelectArticleMoinsVendu()
{
	return "SELECT nom_article, SUM(quantite) FROM article, commande, ligne_commande WHERE article.id_article = ligne_commande.id_article AND commande.id_commande = ligne_commande.id_commande GROUP BY nom_article ORDER BY SUM(quantite) ASC";
}

System::String^ statsMap::SelectValComStock()
{
	return "SELECT SUM(prix_article) FROM article WHERE quantite_stock > seuil";
}

System::String^ statsMap::SelectValAchatStock()
{
	return "SELECT SUM(prix_article) FROM article WHERE quantite_stock < seuil";
}

System::String^ statsMap::SelectSimulation()
{
	return "SELECT SUM(prix_article) FROM article WHERE quantite_stock < seuil";
}



	
