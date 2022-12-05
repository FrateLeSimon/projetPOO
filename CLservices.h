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
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnClient(System::String^);
	};


ref class personnelServices
{
private:
	NS_Comp_Data::CLcad^ oCad;
	personnelMap^ oPersonnel;
public:
	personnelServices(void);
	System::Data::DataSet^ selectionnerTousLesPersonnels(System::String^);
	void ajouterUnPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void modifierUnPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimerUnPersonnel(System::String^);
};


ref class commandeServices
{
private:
	NS_Comp_Data::CLcad^ oCad;
	commandeMap^ oCommande;
public:
	commandeServices(void);
	System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
	void ajouterUneCommande(System::String^, System::String^, System::String^, System::String^, System::String^);
	void modifierUneCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimerUneCommande(System::String^);
};


ref class articleServices
{
private:
	NS_Comp_Data::CLcad^ oCad;
	articleMap^ oArticle;
public:
	articleServices(void);
	System::Data::DataSet^ selectionnerTousLesArticles(System::String^);
	void ajouterUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^);
	void modifierUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimerUnArticle(System::String^);
};