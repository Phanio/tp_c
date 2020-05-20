#include "Compte.h"

using namespace std;
Compte::Compte()
{
    _id = 1;
    _login = "AZERTY";
    _password= "azer";
}

void Compte::changerPassword(string password){
    _password = password;
}
