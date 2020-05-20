#include <iostream>
#include "Etudiant.h"
#include "Personne.h"

Etudiant::Etudiant()
{
   // Personne::Personne();
}

double Etudiant::calculerMoyen(Examen tableau[], int taille)
{
    double somme=0;
    for(int i=0;i<taille; i++){
        somme = somme+ tableau[i].Getnote() ;
    }
    return somme/taille;
}
