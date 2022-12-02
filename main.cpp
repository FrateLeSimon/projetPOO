#include "Client.h"
#include "tools.h"

int main()
{
	Client client;
	Client();
	Client(01, "John", "Smith", "1a", "5c", "Rue de Paris", "Boulevard de Napoléon", "Lyon", "Paris", 69000, 75000, "01/01/1998", "12/11/2022");
	cout << client.getId_Client() << endl;
	cout << client.getPrenom() << client.getNom() << endl;
	cout << client.getNom_Rue_Livraison() << endl;
}