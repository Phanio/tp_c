#include <iostream>
#include <string>
using namespace std;

//mes fonctions
void affiche(string n);

int main()
{
    int tab[2];
    int tab2[] = {12,34,4,3};
    int *p = new int[2];
    p[0] = 1;
    p[1] = 2;
    p[2] = 6;

    cout << "P " << *(p+2) << " and ";

    return 0;
}

void affiche(string nom)
{
    cout << "A bientot "   << nom << endl;
}





