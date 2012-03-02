#include "Tram.h"


Tram::Tram():d_ligne(0),d_capacite(0),d_vitesse(0),d_x(0),d_y(0){
      d_sens = false ; 
      d_marche=false;                                                                  
}

Tram::Tram(const string& nomfichier) 

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

void Tram::ImportationTram(const string& nomfichier, int i){
    string s;
    ifstream fin(nomfichier.c_str());
    if(fin){
            fin>>d_id>>d_ligne>>d_capacite>>d_vitesse>>d_marche>>d_sens;
            fin>>s;
            }
    }
    else
        cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'orthographe."<<endl;
}

void Tram::infoTram() 
{
     std::cout << "ligne : " << d_ligne << std::endl ;
     std::cout << "capacite : " << d_capacite << std::endl ;
     std::cout << "vitesse : " << d_vitesse <<std::endl ; 
     std::cout << "Position en x : " << d_x <<std::endl ; 
     std::cout << "Position en y : " << d_y<<std::endl ; 
     std::cout << d_marche ; 
     if(d_marche) 
        std::cout << " Le tram circule " << std::endl ; 
     else
        std::cout << " Le tram est a l'arret " << std::endl ;   
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
