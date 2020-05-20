#include <iostream>
using namespace std;


class Vehicule
{
    public:
    virtual void affiche()  ;  //Affiche une description du Vehicule

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture: public Vehicule  //Une Voiture EST UN Vehicule
{
    public:
    virtual void affiche()  ;

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    virtual void affiche()  ;

    private:
    double m_vitesse;  //La vitesse maximale de la moto
};

void Vehicule::affiche()
{
    cout << "Ceci est un vehicule." << endl;
}

void Voiture::affiche()
{
    cout << "Ceci est une voiture." << endl;
}

void Moto::affiche()
{
    cout << "Ceci est une moto." << endl;
}

void presenter(Vehicule  & v){
    v.affiche();
}

int main()
{
    Vehicule v;
    Voiture vo;
    Moto m;
    presenter(v);
    presenter(vo);
    presenter(m);
    return 0;
}


