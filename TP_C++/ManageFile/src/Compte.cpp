#include "Compte.h"
#include <string>

using namespace std;

Compte::Compte()
{
    _id = 1;
    _login = "azer";
    _password= "azer";
}

bool Compte::changePassword(string oldpassword, string newpassword)
{
   if(_password==oldpassword){
    _password == newpassword;
    return true;
   }
   return false;
}

