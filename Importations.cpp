#include "Importations.h"

using namespace std;

void Importations::importerArrets() {
    string s;
    int x,y,i=0;
    cout<<"Saisir le nom du fichier contenant les arrets a importer : ";
    cin>>s;
    ifstream fin(s.c_str());
    if(fin){
        fin>>x;
        TabArret=new Arrets[x-1];
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

void Importations::importerLigne()
    string s;
    int numLigne, nbArrets, i=0;
    cout<<"Saisir le nom du fichier contenant les arrets a importer : ";
    cin>>s;
    ifstream fin(s.c_str());
    if(fin){
        fin>>TabLignes[numLigne].d_nbArrets;
        fin>>TabLignes[numLigne].d_numLigne;

        while(!fin.eof()) {
            getline(fin,s,'.');
            // CODER TOUTE LA PARTIE AJOUT DE L'ARRET DANS LA LIGNE AVEC <<
            L1<<s;
        }
    }
    else
        cerr<<"Impossible d'ouvrir le fichier! Veuillez verifier l'orthographe."<<endl;
}
