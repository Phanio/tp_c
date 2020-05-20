#include <iostream>
#include "Vecteur.h"
using namespace std;
Vecteur::Vecteur (int dim)
{
    _dimension = dim;
    _tab = new double[dim];
    for (int i = 0; i<dim; i++)
        _tab[i] = 0;
}

Vecteur::Vecteur (int dim, int *tab)
{
    _dimension = dim;
    _tab = new double[dim];
    for (int i = 0; i<dim; i++)
        _tab[i] = tab[i];
}

void Vecteur::display()
{
    cout << "[ ";
    for (int i = 0; i < _dimension; i++){
        cout <<_tab[i]<< " " ;
    }
    cout << "]\n";
}

double& Vecteur::nieme(int i)
{
    return _tab[i-1];
}

Vecteur Vecteur::somme(Vecteur v)
{
    Vecteur res (_dimension);
    for (int i = 0; i<_dimension; i++)
        res._tab[i] = _tab[i] + v._tab[i];
    return res;
}

double Vecteur::scalaire(Vecteur v)
{
    double res = 0;
    for (int i = 0; i < _dimension; i++)
        res += _tab[i] * v._tab[i];
    return res;
}

bool Vecteur::isOrthogonal(Vecteur v)
{
   int res = scalaire(v);
   return res==0;
}



