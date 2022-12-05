SELECT prenom, nom, a1.num_rue AS num_rue_livraison, a1.nom_rue AS nom_rue_livraison, v1.code_postal AS code_postal_livraison, v1.nom_ville AS ville_livraison, 
a2.num_rue AS num_rue_facturation, a2.nom_rue AS nom_rue_facturation, v2.code_postal AS code_postal_facturation, v2.nom_ville AS ville_facturation, cal1.c_date AS date_naissance, d.c_date AS date_premier_achat
FROM client AS c 
INNER JOIN humain AS h ON c.id_humain = h.id_humain 
INNER JOIN adresse AS a1 ON c.id_adresse_livraison = a1.id_adresse 
INNER JOIN ville AS v1 ON a1.id_ville = v1.id_ville
INNER JOIN adresse AS a2 ON c.id_adresse_facturation = a2.id_adresse
INNER JOIN ville AS v2 ON a2.id_ville = v2.id_ville
INNER JOIN calendrier AS cal1 ON c.id_date_naissance = cal1.id_calendrier
left JOIN (SELECT TOP 100 co.id_client, cal2.c_date FROM commande AS co 
            INNER JOIN calendrier AS cal2 ON co.id_date_emission = cal2.id_calendrier
            ORDER BY cal2.c_date ) AS d ON c.id_client = d.id_client


SELECT c.id_commande AS "Référence/Commande", c.id_facture AS Facture, h.nom as "Nom", prenom as Prenom, d1.c_date AS "Date de livraison", d2.c_date AS "Date d'émission", art.nom AS "Article", ct.quantite AS "Quantité", f.montant_total_ht AS "Montant HT"
FROM commande AS c 
INNER JOIN facture AS f ON c.id_facture = f.id_facture
INNER JOIN humain AS h ON c.id_client = h.id_humain
INNER JOIN calendrier AS d1 ON c.id_date_livraison = d1.id_calendrier
INNER JOIN calendrier AS d2 ON c.id_date_emission = d2.id_calendrier
INNER JOIN contient AS ct ON c.id_commande = ct.id_commande
INNER JOIN article AS art ON ct.id_article = art.id_article


SELECT nom AS "Nom", prenom AS "Prénom", c.c_date AS "Date d'embauche", a.num_rue AS "Num. Rue", a.nom_rue AS "Nom Rue", v.nom_ville AS "Ville"
FROM personnel AS p
INNER JOIN humain AS h ON p.id_humain = h.id_humain
INNER JOIN calendrier AS c ON p.id_calendrier = c.id_calendrier
INNER JOIN adresse AS a ON p.id_adresse = a.id_adresse
INNER JOIN ville AS v ON a.id_ville = v.id_ville