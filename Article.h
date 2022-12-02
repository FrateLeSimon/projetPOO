#include "tools.h"

class Article
{
private:
	int id_article;
	System::String^ nom_article;
	int quantite_stock;
	int prix_article;
	int seuil;
	System::String^ couleur;
public:
	Article();
	Article(int, System::String^, int, int, int, System::String^);
	void setId_Article(int);
	void setNom_Article(System::String^);
	void setQuantite_Stock(int);
	void setPrixArticle(int);
	void setSeuil(int);
	void setCouleur(System::String^);
	int getId_Article();
	System::String^ getNom_Article();
	int getQuantite_Stock();
	int getPrix_Article();
	int getSeuil();
	System::String^ getCouleur();
	System::String^ Insert();
	System::String^ Select();
	System::String^ Update();
	System::String^ Delete();
};