#include "Article.h"


void Article::setId_Article(int a)
{
	this->id_article = a;
}

void Article::setNom_Article(string a)
{
	this->nom_article = a;
}

void Article::setQuantite_Stock(int a)
{
	this->quantite_stock = a;
}

void Article::setPrixArticle(int a)
{
	this->prix_article = a;
}

void Article::setSeuil(int a)
{
	this->seuil = a;
}

void Article::setCouleur(string a)
{
	this->couleur = a;
}

int Article::getId_Article()
{
	return this->id_article;
}

string Article::getNom_Article()
{
	return this->nom_article;
}

int Article::getQuantite_Stock()
{
	return this->quantite_stock;
}

int Article::getPrix_Article()
{
	return this->prix_article;
}

int Article::getSeuil()
{
	return this->seuil;
}

string Article::getCouleur()
{
	return this->couleur;
}

string Article::Insert()
{
	return "insert";
}

string Article::Select()
{
	return "select";
}

string Article::Update()
{
	return "update";
}

string Article::Delete()
{
	return "delete";
}