#include <iostream>
#include "Etudiant.h"
#include "Examen.h"

using namespace std;

int main()
{
    Examen e1;
    e1.Setnote(14.0);
    Examen e2;
    e2.Setnote(15.2);
    Examen e3;
    e3.Setnote(17.0);
    Examen tabExam[] = {e1, e2, e3};

    Etudiant e;
    e.Setnom("AZERTY");
    e.Setprenom("Wqerty");
    double moyen = e.calculerMoyen(tabExam, 3);
    cout << "La moyen de l'etudiant " << e.Getnom()<<" "<< e.Getprenom() <<" est : "<<moyen << endl;
    return 0;
}
