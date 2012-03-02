#ifndef IMPORTATIONS_H
#define IMPORTATIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <graphics.h>
#include "Arret.h"
#include "Ligne.h"
#include "Tram.h"

class Importations{
    public:
        Importations();
        ~Importations();
        void afficherArrets();
        const int nombreArrets();
        const int nombreLignes();
    private:
        int d_nbArrets;
        int d_nbLignes;
        Arret* TabArrets;
        Ligne* TabLignes;
};


#endif
