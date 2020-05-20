#include "Complexe.h"
#include <math.h>

Complexe::Complexe( double re, double im )
{
    _re = re ;
    _im = im ;
}

double Complexe::module()
{
    return sqrt(_re*_re + _im*_im) ;
}

double Complexe::argument()
{
    return _re==0?PI/2 : atan(_im/_re) ;
}

double Complexe::partieReelle()
{
    return _re ;
}

double Complexe::partieImaginaire()
{
    return _im ;
}

Complexe Complexe::somme(Complexe z)
{
    Complexe res ;
    res._re = _re + z._re ;
    res._im = _im + z._im;
    return res ;
}

Complexe Complexe::produit(Complexe z)
{
    Complexe res ;
    res._re = _re*z._re - _im*z._im ;
    res._im = _re*z._im + _im*z._re ;
    return res ;
}


