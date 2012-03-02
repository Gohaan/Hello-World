#include "Arret.h"

using namespace std;

static int tmpsarret = 1;

Arret::Arret(): d_x(0), d_y(0), d_nom("Arret defaut") {}

Arret::Arret(int x, int y, const string& nom): d_x(x), d_y(y) { 
    d_nom = nom; 
}

const int Arret::posx() {
    return d_x;
}

const int Arret::posy() { 
    return d_y; 
}

const string Arret::nomArret() { 
    return d_nom; 
}

void Arret::afficheArret() {
     cout<<d_nom<<' '<<d_x<<' '<<d_y<<endl;
}

const ostream& operator<<(ostream& os, Arret& Ar) {
    Ar.afficheArret();
    return os;
}
