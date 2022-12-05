#include "CAD.h"
#include "CLmap.h"


	ref class clientServices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		clientMap^ oClient;
	public:
		clientServices(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::Int32^, System::Int32^, System::String^, System::String^);
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::Int32^, System::Int32^, System::String^, System::String^);
		void supprimerUnClient(int);
	};


ref class personnelServices
{
private:
	NS_Comp_Data::CLcad^ oCad;
	personnelMap^ oPersonnel;
public:
	personnelServices(void);
	System::Data::DataSet^ selectionnerTousLesPersonnels(System::String^);
	void ajouterUnPersonnel(System::String^, System::String^, System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::String^, System::Boolean^);
	void modifierUnPersonnel(int, System::String^, System::String^, System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::String^, System::Boolean^);
	void supprimerUnPersonnel(int);
};


ref class commandeServices
{
private:
	NS_Comp_Data::CLcad^ oCad;
	commandeMap^ oCommande;
public:
	commandeServices(void);
	System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
	void ajouterUneCommande(System::String^, System::String^, System::String^, System::Int32^, System::Int32^);
	void modifierUneCommande(int, System::String^, System::String^, System::String^, System::Int32^, System::Int32^);
	void supprimerUneCommande(int);
};


ref class articleServices
{
private:
	NS_Comp_Data::CLcad^ oCad;
	articleMap^ oArticle;
public:
	articleServices(void);
	System::Data::DataSet^ selectionnerTousLesArticles(System::String^);
	void ajouterUnArticle(System::String^, System::Int32^, System::Int32^, System::Int32^, System::String^);
	void modifierUnArticle(int, System::String^, System::Int32^, System::Int32^, System::Int32^, System::String^);
	void supprimerUnArticle(int);
};