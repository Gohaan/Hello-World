#include "Ligne.h"

using namespace std;

int main()
{
    /*Arret* ar = new Arret("Test");
    ar->changerNom("plop"); ar->AffecterCoord(50,50);
    Arret* bl = new Arret("Test");
    bl=ar;
    bl->afficherArret();
    */
    
    Ligne le("Ligne 1");
    le.importerArret();
    //cout<<ligne.d_departd_nom;
    //ligne.d_depart.afficherArret();
    //ligne.d_terminus.afficherArret();
	system("PAUSE");
}
