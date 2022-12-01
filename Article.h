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
	int getId_Article(int);
	string getNom_Article(string);
	int getQuantite_Stock(int);
	int getPrix_Article(int);
	int getSeuil(int);
	string getCouleur(string);
	string Insert();
	string Select();
	string Update();
	string Delete();
};