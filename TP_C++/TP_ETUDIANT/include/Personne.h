#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

class Personne
{
    public:
        Personne();

        Personne(std::string n, std::string p);

        std::string Getnom() { return nom; }
        void Setnom(std::string val) { nom = val; }
        std::string Getprenom() { return prenom; }
        void Setprenom(std::string val) { prenom = val; }
        std::string Getsexe() { return sexe; }
        void Setsexe(std::string val) { sexe = val; }
        std::string Getemail() { return email; }
        void Setemail(std::string val) { email = val; }
        std::string Gettelephone() { return telephone; }
        void Settelephone(std::string val) { telephone = val; }



    protected:
        std::string nom;
        std::string prenom;
        std::string sexe;
        std::string email;
        std::string telephone;

};

#endif // PERSONNE_H
