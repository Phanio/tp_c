#include <iostream>
#include "Compte.h"
using namespace std;

int main()
{
    Compte c1;
    cout << "Le login de mon compte est : " << c1.Get_login() << endl;
    cout << "Mon ancien mot de passe est : " << c1.Get_password() << endl;
    c1.changerPassword("Sabrina");
    cout << "Mon nouveau mot de passe est : " << c1.Get_password() << endl;
    return 0;
}
