#ifndef ARRET_H
#define ARRET_H

#include <iostream>
#include <string>

class Arret{
    public:
        Arret(std::string nom);
        Arret(std::string nom,int x, int y);
        
        std::string nom_arret();
        Arret* d_suivant;
        Arret* d_precedent;
        void changerNom(std::string nom);
        void AffecterCoord(int x,int y );
        void afficherArret();
        Arret& operator=(const Arret& a);
        std::string d_nom;
        int d_x, d_y;
    private:
        //std::string d_nom;
        //int d_x, d_y;
};

#endif
