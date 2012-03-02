#include "Importations.h"

using namespace std;

Importations::Importations(){
    
    //IMPORTATION DES ARRETS
    
    string continuer="non",nomfichier,s;
    int x,y,indiceArret=0;
    /*
    do {
        cout<<"Saisir le nom du fichier contenant les arrets a importer : ";
        cin>>nomfichier;
        ifstream fin(nomfichier.c_str());
        if(fin){
            fin>>d_nbArrets;
            TabArrets=new Arret[d_nbArrets];
            while(!fin.eof()) {
                getline(fin,s,'.');
                fin>>x;
                fin>>y;
                TabArrets[indiceArret] = Arret(x,y,s);
                indiceArret++;
            }
            continuer = "non";
         }
         else {
            cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'orthographe."<<endl;
            continuer = "oui";
        }
    } while(continuer == "oui");
    */
    
    
    //IMPORTATION DES LIGNES
    
    do{
        cout<<"Saisir le nom du fichier contenant la ligne a importer : "<<endl;
        cin>>nomfichier;
        
        int indiceLigne,nbreArrets,nbmaxlignes=11;
        indiceArret=0;
        
        TabLignes = new Ligne[nbmaxlignes];
        
        ifstream fin(nomfichier.c_str());
        if(fin){
            fin>>indiceLigne;
            TabLignes[indiceLigne].numLigne(indiceLigne);
            fin>>nbreArrets;
            TabLignes[indiceLigne].nbArrets(nbreArrets);
    
            TabLignes[indiceLigne].initTab(TabLignes[indiceLigne].nombreArrets()-1);
            while(!fin.eof()) {
                getline(fin,s,'.');
                fin>>x;
                fin>>y;
                TabLignes[indiceLigne].ajouterArret(indiceArret,x,y,s);
                indiceArret++;
            }
        }
        else
            cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'orthographe."<<endl;
        
        cout<<"Voulez vous importer une autre ligne? (oui/non) : ";
        cin>>continuer;
    } while(continuer == "oui");
    
}

Importations::~Importations(){
    delete[] TabArrets;
    delete[] TabLignes;
}

void Importations::afficherArrets(){
    for(int i=0; i < d_nbArrets ; i++)
        cout << TabArrets[i];
}

const int Importations::nombreArrets(){
    return d_nbArrets;
}

const int Importations::nombreLignes(){
    return d_nbLignes;
}
