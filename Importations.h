#ifndef IMPORTATIONS_H
#define IMPORTATIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <graphics.h>
#include "Arret.h"
#include "Ligne.h"
#include "Tram.h"

const int NBMAXLIGNES=11;

class Importations{
    public:
        void importerArrets();
        void importerLigne();
    private:
        int nbLigne;
        Arret* TabArrets;
        Ligne TabLignes[NBMAXLIGNES];
};


#endif
