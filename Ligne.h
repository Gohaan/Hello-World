#ifndef LIGNE_H
#define LIGNE_H

#include <iostream>
#include "Arret.h"

class Ligne {
    public:
        Ligne(std::string nom_ligne, std::string nom_depart , std::string nom_terminus );
        void ajouter_arret(std::string nom_arret);
        Arret* arret(int numero) const;
        void ajouter_arret(std::string nom_arret, int numero);
        bool meme_ligne(const Arret* arret1,const Arret* arret2 ) ;
        bool correspondance(const Arret* arret1,const Arret* arret2 ) ;
        void faire_correspondre(Arret* arret1 , Arret* arret2);
        void defaire_correspondance(Arret* arret );
        void supprimer(int numero);
        
        Arret* d_depart;
        Arret* d_terminus;
    private:  
        std::string d_nom;
};

#endif
