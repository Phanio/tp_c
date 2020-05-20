#include <iostream>
#include "Vecteur.h"
using namespace std;

int main()
{
    int tab[3] = {1,2,3};
    int tab1[3] = {2,-1,0};
    Vecteur v1(3, tab), v2(3,tab1);
    v1.display();

    v2.display();

    cout << v1.scalaire(v2) << endl;

    int res =v1.isOrthogonal(v2);
    if(res){
         cout <<"v1 et v2 sont orthogonaux  "<< endl;
    }else{
         cout <<"v1 et v2  ne sont pas orthogonaux  "<< endl;
    }

    return 0;
}
