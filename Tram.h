#ifndef TRAM_H
#define TRAM_H

#include <iostream>
#include <string>
#include <fstream>
#include <graphics.h>
#include "Ligne.h"

class Tram{
    public:
        Tram();
        Tram(const string& nomfichier) ; 
        int numLigne();
        int capacite();
        int vitesse();
        bool marche();
        bool sens();
        // void importationTram(const string& nomfichier, int i);
        void infoTram() ;  
        const int posx() ; 
        const int posy() ;      
    private:
        int d_id, d_x, d_y, d_ligne, d_capacite, d_vitesse;
        bool d_marche;
        bool d_sens;
        Arret d_arret;         
};

const ostream& operator<<(ostream& os ,const Tram& t1 ) ; 

#endif
