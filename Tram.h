#ifndef LIGNE_H
#define LIGNE_H

#include <iostream>
#include <string>
#include <fstream>
#include <graphics.h>
#include "Ligne.h"

class Tram {
    public:
        Tram();
        int numLigne();
        int capacite();
        int vitesse();
        bool marche();
        bool sens();        
    private:
        int d_ligne;
        int d_capacite;
        int d_vitesse;
        bool d_marche;
        bool d_sens;      
};

#endif
