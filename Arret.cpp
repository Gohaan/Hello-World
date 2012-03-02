#include "Arret.h"

using namespace std;

static int tmpsarret = 1;

Arrets::Arrets(): d_x(0), d_y(0), d_nom("Arret defaut") {}
Arrets::Arrets(int x, int y, const string& nom): d_x(x), d_y(y) { d_nom = nom; }
const int Arrets::posy() { return d_y; }
const string Arrets::nomarret() { return d_nom; }
