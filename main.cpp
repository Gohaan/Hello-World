#include <iostream>
#include "Ligne.h"

using namespace std;

int main()
{
	/* string s; cin >> s;
	Arret* a = new Arret(s);
	cout<<a->nom_arret(); */
    Ligne ligne("Ligne 1","Nessel","Universite");
    ligne.ajouter_arret("Test2");
    Arret* crt=ligne.d_terminus;
    cout<<crt->nom_arret();

	system("PAUSE");
}
