#include "Ligne.h"

using namespace std;

Ligne::Ligne(){
    ImportationArret("Templates/Lignes.txt");
}

Ligne::Ligne(const string& nomfichier){
    ImportationArret(nomfichier);
}

void Ligne::ImportationArret(const string& nomfichier){
    string s;
    int x,y,i=0;
    ifstream fin(nomfichier.c_str());
    if(fin){
            fin>>d_nbArrets;
            fin>>d_numLigne;
            TabArret=new Arret[d_nbArrets];
            while(!fin.eof()) {
                getline(fin,s,'.');
                fin>>x;
                fin>>y;
                TabArret[i] = Arret(x,y,s);
                i++;
            }
    }
    else
        cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'ortographe."<<endl;
}

void Ligne::afficheLigne()
{
   if(d_nbArrets != 0 )
     for(int i=0 ; i < d_nbArrets ; i++ )
                cout << TabArret[i].nomarret()<<' '<< TabArret[i].posx() << ' ' << TabArret[i].posy() <<' '<<endl ;
     else
         cout<<"Aucun arret a afficher.";  
}

const int Ligne::nombreArrets(){
      return d_nbArrets;
}

const int Ligne::numeroLigne(){
      return d_numLigne;
}

Ligne::~Ligne(){
      delete[] TabArret;
}


const ostream& operator<<(ostream& os , Ligne& l ){
         l.afficheLigne() ; 
         return os ; 
} 

