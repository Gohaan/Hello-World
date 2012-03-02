#ifndef ARRET_H
#define ARRET_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Arret{
      public:
             Arret();
             Arret(int x, int y,const string& nom);
             const int posx();
             const int posy();
             const string nomArret();
             void afficheArret();
      private:
             int d_x,d_y;
             string d_nom;
             static int tmpsarret;
};

const ostream& operator<<(ostream& os, Arret& Ar);

#endif
