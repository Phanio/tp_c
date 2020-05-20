#include <iostream>
#include "Complexe.h"

using namespace std;
void printComplexe(Complexe z);
int main()
{
    Complexe z1 ; // = 0
    Complexe z2( 2 ) ; // = 2 + 0 i
    Complexe z3( 1, 1 ) ;  // = 1 + i
    printComplexe( z1 ) ;
    printComplexe( z2 ) ;
    printComplexe( z3 ) ;
    cout << "module = " << z3.module( ) << endl ;
    cout << "argument = " << z3.argument( ) << endl ;
    cout << "somme = " ;
    printComplexe( z3.somme ( z3 ) ) ;
    cout << "produit = " ;
    printComplexe( z3.produit( z3 )) ;
    return 0;
}

void printComplexe(Complexe z)
{
    cout << '('
         << z.partieReelle( )
         <<" +i "
         <<z.partieImaginaire( )
         <<")\n " ;
}
