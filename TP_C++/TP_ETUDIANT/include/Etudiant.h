#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <Personne.h>
#include "Examen.h"
#include <string>

class Etudiant : public Personne
{
    public:
        Etudiant();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string GetnumeroMatricule() { return numeroMatricule; }
        void SetnumeroMatricule(std::string val) { numeroMatricule = val; }

        double calculerMoyen(Examen tableau[], int taille);

    protected:

    private:
        int id;
        std::string numeroMatricule;
};

#endif // ETUDIANT_H


