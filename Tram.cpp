#include "Tram.h"

using namespace std;

Tram::Tram():d_ligne(0),d_capacite(0),d_vitesse(0),d_x(0),d_y(0){
      d_sens = false ; 
      d_marche=false;                                                                  
}

Tram::Tram(const string& nomfichier) {}

int Tram::numLigne(){
     return d_ligne ; 
}

int Tram::capacite(){
    return d_capacite ; 
}

int Tram::vitesse(){
     return d_vitesse ;
}

bool Tram::sens(){
     return d_sens ;
}

bool Tram::marche(){
     return d_marche ; 
}

/*void Tram::ImportationTram(const string& nomfichier, int i){
    string s;
    ifstream fin(nomfichier.c_str());
    if(fin){
            fin>>d_id>>d_ligne>>d_capacite>>d_vitesse>>d_marche>>d_sens;
            fin>>s;
            }
    }
    else
        cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'orthographe."<<endl;
}*/

void Tram::infoTram() 
{
     cout << "Ligne : " << d_ligne << endl ;
     cout << "Capacite : " << d_capacite << endl ;
     cout << "Vitesse : " << d_vitesse << endl ; 
     cout << "Position en x : " << d_x << endl ; 
     cout << "Position en y : " << d_y<< endl ; 
     cout << d_marche ; 
     if(d_marche) 
        cout <<"Le tram circule."<< endl ; 
     else
        cout <<"Le tram est a l'arret."<< endl ;   
}

const ostream& operator<<(ostream& os ,Tram& t1 ){
      t1.infoTram() ; 
      return os ; 
}
const int Tram::posx(){
      return d_x ; 
} 
const int Tram::posy(){
      return d_y ; 
} 
