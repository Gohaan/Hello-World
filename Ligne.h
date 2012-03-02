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
     // Ligne(const string& nomfichier);
     ~Ligne();
     // void ImportationArret(const string& nomfichier);
     void afficheLigneTexte();
     void afficheLigneGraphique();
     void numLigne(int num);
     void nbArrets(int nb);
     void initTab(int i);
     void ajouterArret(int i, int x, int y,const string& s);
     Arret& coordArret(int i);
     string nomArret(int i);
     const int nombreArrets();
     const int numeroLigne();
     Ligne& operator<<(const string& s);
  private:
     int d_numLigne;
     int d_nbArrets;
     Arret* TabArret;
};

const ostream& operator<<(ostream& os , Ligne& l ) ; 

#endif
