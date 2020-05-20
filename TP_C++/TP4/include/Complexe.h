#ifndef COMPLEXE_H
#define COMPLEXE_H

#define PI 3.141592535897
class Complexe
{
    protected :
        double _re, _im ;
    public :
        Complexe(double re =0, double im=0);
        double module() ;
        double argument() ;
        double partieReelle() ;
        double partieImaginaire() ;
        Complexe somme (Complexe z) ;
        Complexe produit(Complexe z) ;
};

#endif // COMPLEXE_H
