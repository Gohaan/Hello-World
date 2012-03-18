#include "Arret.h"

using namespace std;

Arret::Arret(string nom) : d_nom(nom), d_suivant(0), d_precedent(0), d_corr_suiv(this) ,d_corr_prec(this) {}

string Arret::nom_arret() { 
    return d_nom; 
}
