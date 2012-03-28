#include "Arret.h"

using namespace std;

Arret::Arret(string nom) : d_nom(nom), d_x(0), d_y(0), d_suivant(0), d_precedent(0) {}

Arret::Arret(string nom, int x, int y) : d_nom(nom), d_x(x), d_y(y), d_suivant(0), d_precedent(0) {}

string Arret::nom_arret() { 
    return d_nom; 
}

void Arret::changerNom(std::string nom)
{
    d_nom = nom; 
}

void Arret::AffecterCoord(int x ,int y ){
    d_x = x;
    d_y = y;
}

void Arret::afficherArret()
{
    cout<<"Le nom de l'arret est "<<d_nom<<endl;
    cout<<"Ses coordonnes sont "<< d_x << " et " << d_y << endl;
}

Arret& Arret::operator=(const Arret& a) 
{
    if(this == &a ) { return *this; }
    d_nom = a.d_nom;
    d_x = a.d_x ; 
    d_y = a.d_y ; 
}
