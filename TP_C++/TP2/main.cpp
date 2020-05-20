#include <iostream>

using namespace std;
void afficher();
int main()
{
    int compteur = 0;
    int *p;
    p = &compteur;
    *p = 3;

    cout << "La valeur de mon compteur est : " << compteur  << endl;

    return 0;
}

void afficher(){
    cout << "Merci pour la compréhension. " << endl;
}
