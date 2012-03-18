#ifndef ARRET_H
#define ARRET_H

#include <string>

class Arret{
    public:
        Arret(std::string nom);
        
        std::string nom_arret();
        Arret* d_suivant;
        Arret* d_precedent;
        Arret* d_corr_suiv;
        Arret* d_corr_prec;
    private:
        std::string d_nom;
};

#endif
