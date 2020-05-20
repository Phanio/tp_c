#include <iostream>
#include "Car.h"

using namespace std;
void afficher(string nom);
int main()
{
    int  age = -1;
    double salaire;
    float nb ;
    string nom = "EKPON 12";

    Car c;
    afficher("EKPON");
    return 0;
}


void afficher(string nom){
    cout << "Hello world!" << endl;
}

int somme(int a, int b){
    return a+b;
}
