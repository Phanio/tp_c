#ifndef FICHIER_H
#define FICHIER_H

#include <string>
class Fichier
{
    public:
        Fichier();

        int Get_id() { return _id; }
        void Set_id(int val) { _id = val; }
        int Get_nom() { return _nom; }
        void Set_nom(int val) { _nom = val; }
        int Get_taille() { return _taille; }
        void Set_taille(int val) { _taille = val; }

        void renommer(std::string nom);
        bool supprimer();

    protected:

    private:
        int _id;
        int _nom;
        int _taille;
};

#endif // FICHIER_H
