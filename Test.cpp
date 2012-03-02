#include <iostream>
#include <graphics.h> 
#include "Arret.h"
#include "Ligne.h"

using namespace std;

int main( )
{
    Ligne L2("Ligne 2.txt");
    
    L2.afficheLigneGraphique();
    
    system("PAUSE");
    return 0;
}
