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
            TabArret=new Arrets[d_nbArrets];
            while(!fin.eof()) {
                getline(fin,s,'.');
                fin>>x;
                fin>>y;
                TabArret[i] = Arrets(x,y,s);
                i++;
            }
    }
    else
        cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'orthographe."<<endl;
}

void Ligne::afficheLigneTexte()
{
   if(d_nbArrets != 0 )
     for(int i=0 ; i < d_nbArrets ; i++ )
                cout << TabArret[i].nomarret()<<' '<< TabArret[i].posx() << ' ' << TabArret[i].posy() <<' '<<endl ;
     else
         cout<<"Aucun arret a afficher.";  
}

void Ligne::afficheLigneGraphique()
{
    initwindow(1300, 400, "Tramways" );
    outtextxy(650,20,"Ligne 2");
    setcolor(WHITE);

    int xi = TabArret[0].posx(), yi= TabArret[0].posy(), xf = TabArret[d_nbArrets-1].posx(), yf = TabArret[d_nbArrets-1].posy() ;

    line(xi,yi,xf,yf);

    for(int i=0; i<d_nbArrets; i++){
        xi = TabArret[i].posx(); yi = TabArret[i].posy();
        if(i%2==0)
            outtextxy(xi-10,yi-30, const_cast<char *>(TabArret[i].nomarret().c_str() ) );
        else
            outtextxy(xi-10,yi+30, const_cast<char *>(TabArret[i].nomarret().c_str() ) );
        line(xi,yi-10,xi,yi+10);
    }

    while (!kbhit( ))
    {
        delay(200);
    }
}

Arret& Ligne::coordArret(int i){
    return TabArret[i];
}

string Ligne::nomArret(int i){
    return TabArret[i].nomarret();
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

Ligne& Ligne::operator<<(const string& s){
    //A CODER   
}

const ostream& operator<<(ostream& os , Ligne& l ){
         l.afficheLigneTexte() ; 
         return os ; 
} 

