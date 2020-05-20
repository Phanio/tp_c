#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
    public:
        Vecteur (int dim); // on donne la taille du vecteur
        Vecteur (int dim, int *tab);
        void display(); // [ x1 ... xN ]
        double& nieme(int i); // acc`es `a xi
        Vecteur somme(Vecteur v); // somme de deux vecteurs
        double scalaire(Vecteur v);
        bool isOrthogonal(Vecteur v);


    protected:
        double * _tab;
        int _dimension;


    private:
};

#endif // VECTEUR_H
