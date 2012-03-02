#ifndef LIGNE_H
#define LIGNE_H

#include <iostream>
#include <string>
#include <fstream>
#include <graphics.h> 
#include "Arret.h"


using namespace std;

class Ligne{
  public:
     Ligne();
     Ligne(const string& nomfichier);
     ~Ligne();
     void ImportationArret(const string& nomfichier);
     void afficheLigneTexte();
     void afficheLigneGraphique();
     Arret& coordArret(int i);
     string nomArret(int i);
     const int nombreArrets();
     const int numeroLigne();
  private:
     int d_numLigne;
     int d_nbArrets;
     Arret* TabArret;
};

const ostream& operator<<(ostream& os , Ligne& l ) ; 

#endif
