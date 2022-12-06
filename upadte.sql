
Update de la table client
----

UPDATE client
SET id_client = (this->id_client)
WHERE id_humain = (SELECT id_humain FROM humain WHERE nom = (this->nom))

UPDATE client
SET id_date_naissance = (SELECT id_date FROM calendrier WHERE c_date = this->date_naissance)
WHERE id_client = (this->id_client)

UPDATE client
SET id_adresse_livraison = (SELECT id_adresse FROM adresse WHERE nom_rue_livraison = this->nom_rue_livraison)
WHERE id_client = (this->id_client)

UPDATE client 
SET id_adresse_facturation = (SELECT id_adresse FROM adresse WHERE nom_rue_livraison = this->nom_rue_facturation)
WHERE id_client = (this->id_client)

UPDATE client 
SET id_humain = (SELECT id_humain FROM humain WHERE id_client = this->id_client)
WHERE id_client = (this->id_client)

----

Update de la table commande
----
UPDATE commande
SET id_commande = (this->id_commande)
WHERE id_facture = (this->id_facture)

UPDATE commande
SET id_facture = (this->id_facture)
WHERE id_commande = (this->id_commande)

UPDATE commande
SET id_date_emission = (SELECT id_date FROM calendrier WHERE c_date = (this->date_emission))
WHERE id_commande = (this->id_commande)

UPDATE commande
SET id_date_livraison = (SELECT id_date FROM calendrier WHERE c_date = (this->date_livraison))
WHERE id_commande = (this->id_commande)

UPDATE facture 
SET montant_total_ht = (this->montant_ht)
WHERE id_facture = (SELECT id_facture FROM commande WHERE id_commande = (this->id_commande))
----

Update de la table personnel
----
UPDATE humain
SET nom = (this->nom)
WHERE id_humain = (SELECT id_humain FROM personnel WHERE id_personnel = (this->id_personnel))

UPDATE humain
SET prenom = (this->prenom)
WHERE id_humain = (SELECT id_humain FROM personnel WHERE id_personnel = (this->id_personnel))

UPDATE adresse
SET num_rue = (this->num_rue)
WHERE id_adresse = (SELECT id_adresse FROM personnel WHERE id_personnel = (this->id_personnel))

UPDATE adresse
SET nom_rue = (this->nom_rue)
WHERE id_adresse = (SELECT id_adresse FROM personnel WHERE id_personnel = (this->id_personnel))

UPDATE adresse
SET id_ville = (SELECT id_ville FROM ville WHERE nom_ville = (this->ville))
WHERE id_adresse = (SELECT id_adresse FROM personnel WHERE id_personnel = (this->id_personnel))

UPDATE ville
SET code_postal = (this->code_postal)
WHERE id_ville = (SELECT id_ville FROM ville WHERE nom_ville = (this->ville))

UPDATE personnel
SET id_personnel_1 = (this->id_superieur)
WHERE id_personnel = (this->id_personnel)

UPDATE personnel
SET adminnistrateur = (this->admin)
WHERE id_personnel = (this->id_personnel)

UPDATE personnel
SET id_calendrier = (SELECT id_date FROM calendrier WHERE c_date = (this->date_embauche)
WHERE id_personnel = (this->id_personnel)
----

Update de la table article
----
UPDATE article
SET nom = (this->nom_article)
WHERE id_article = (this->id_article)

UPDATE article
SET quantite_stock = (this->quantite_stock)
WHERE id_article = (this->id_article)

UPDATE article
SET prix_article_ht = (this->prix_article)
WHERE id_article = (this->id_article)

UPDATE article
SET seuil = (this->seuil)
WHERE id_article = (this->id_article)

UPDATE article
SET couleur = (this->couleur)
WHERE id_article = (this->id_article)
----