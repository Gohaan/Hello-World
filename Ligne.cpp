#include "Ligne.h"

using namespace std;

Ligne::Ligne(string nom_ligne) : d_nom(nom_ligne){
}

Ligne::Ligne(string nom_ligne, string nom_depart , string nom_terminus ) : d_nom(nom_ligne)
{
    Arret * arret = new Arret(nom_terminus) ; 
	d_depart = new Arret(nom_depart);
	d_depart = new Arret(nom_terminus);
	d_terminus = arret; 
	d_depart->d_suivant=d_terminus; 
	d_terminus->d_precedent = d_depart;	
}
// Ajoute un nouvelle arrêt en fin de ligne 
void Ligne::ajouter_arret(string nom_arret)
{
	Arret * arret = new Arret(nom_arret) ; 
	arret->d_precedent = d_terminus ; 
	d_terminus->d_suivant=arret ;
	d_terminus = arret ;
}
     
// Méthode qui retourne le ième arret 

Arret* Ligne::arret(int numero) const
{
	Arret* crt=d_depart;
	for(int i = 0 ; crt != 0 && i < numero;i ++ ) 
		crt=crt->d_suivant ; 
	return crt; 
} 
// methode uqi ajouter un arret en position n
void Ligne::ajouter_arret(string nom_arret, int numero)
{
	Arret * nouvel_arret = new Arret(nom_arret) ;
	Arret * crt = arret(numero) ; 
	
	if(crt==d_depart){
		nouvel_arret->d_suivant=d_depart ;
		d_depart->d_precedent = nouvel_arret ; 
		d_depart = nouvel_arret ; 
	}
	else if(crt==0) //fin de chaine
	{
	nouvel_arret-> d_precedent = d_terminus ; 
	d_terminus = nouvel_arret;
	}else 
	{
		nouvel_arret->d_precedent = crt->d_precedent ; 
		nouvel_arret->d_suivant = crt ; 
		crt->d_precedent = nouvel_arret ; 
		nouvel_arret->d_precedent->d_suivant=nouvel_arret ; 
	}
}
// Si arret 1 et arret 2 sont sur la meme ligne 
bool Ligne::meme_ligne(const Arret* arret1,const Arret* arret2 ) 
{
	while(arret1->d_suivant != 0 ) 
        arret1=arret1->d_suivant;
    while(arret2->d_suivant != 0 )
	    arret2=arret2->d_suivant ;
	return arret1==arret2 ; 
}
//Supprime le numero ieme arret de la ligne 
void Ligne::supprimer(int numero)
{
    if(d_depart->d_suivant != d_terminus ) 
    {
    	Arret* as = arret(numero) ;
    	// defaire_correspondance(as) ; 
    	
    	if( as==0 || as == d_terminus)
    	{
    		d_terminus = d_terminus->d_precedent ; 
    		d_terminus->d_suivant = 0 ; 
    	}
    	else if(as == d_depart)
    	{
    		d_depart=d_depart->d_suivant;
    		d_depart->d_precedent = 0 ; 
    	}
    	else 
    	{
    		as->d_precedent->d_suivant = as->d_suivant ; 
    		as->d_suivant->d_precedent = as->d_precedent ; 
    	}
    }
}
//Importer liste d'arret
void Ligne::importerArret() 
{
     string nom_fichier, nom_arret;
     int xcor, ycor;
     int j;
     cout<<"Nom du fichier :";
     cin>>nom_fichier;
     ifstream lect(nom_fichier.c_str());
    
     if(lect)
     {
          lect>>j;
          
          getline(lect,nom_arret,'.');
          lect>>xcor;
          lect>>ycor;
          
          Arret* arret = new Arret(nom_arret,xcor,ycor);
          Arret* tmp = new Arret(nom_arret,xcor,ycor);
          
          arret->d_precedent = 0;
          d_depart=arret; 
          arret = arret->d_suivant;
          
          for( int i=1 ; i < j ; i++ ) 
          {
           getline(lect,nom_arret,'.'); 
           lect>>xcor;
           lect>>ycor;
           
           arret->d_nom=nom_arret;
           arret->d_x=xcor; arret->d_y=ycor ;
           
           arret->afficherArret();
           
           tmp=arret;
           tmp->afficherArret();
           
           if ( i<j-1 ) { 
                arret->d_precedent=tmp;
                arret=arret->d_suivant;
                tmp = tmp->d_suivant;
                cout <<"Test1"; 
           }
           else {
                arret->d_precedent=tmp;
                arret->d_suivant=0;
                d_terminus = arret;
                cout <<"Test2";
           }
           
          }
     }
     else
     {
      cout<<"Ouverture du fichier impossible";
     }
}


/*/ Retourne Vrai si arret 1 et arret 2 correspondent 
bool Ligne::correspondance(const Arret* arret1,const Arret* arret2 ) 
{
	Arret* crt = arret1->d_corr_suiv ; 
	
	while(crt != arret1 && crt != arret2 )
	{
		crt = crt->d_corr_suiv ;
	}
	return crt == arret2; 
}
//Fais correspondre arret1 et arret 2
void Ligne::faire_correspondre(Arret* arret1 , Arret* arret2)
{
	if( arret1 != 0 && arret2 != 0 && !meme_ligne(arret1,arret2) && !correspondance(arret1,arret2) )
	{
		arret1->d_corr_prec -> d_corr_suiv = arret2->d_corr_suiv ; 
		arret2->d_corr_suiv -> d_corr_prec = arret1->d_corr_prec;
		arret2->d_corr_suiv = arret1 ; 
		arret1->d_corr_prec = arret2 ; 
	}
}
// Enlève arret de la liste de correspondance 
void Ligne::defaire_correspondance(Arret * arret ) {
    if(arret != 0 ) {
    	arret->d_corr_prec->d_corr_suiv = arret->d_corr_suiv;
    	arret->d_corr_suiv->d_corr_prec = arret->d_corr_prec;
    	arret->d_corr_prec = arret ;
    	arret->d_corr_suiv = arret ; 
    	}
}*/

