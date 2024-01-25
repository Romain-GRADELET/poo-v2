
#include <iostream>

using namespace std;    

class Perso
{
public:
    int xp;
    int power;

    // *** Constructeur ***
    Perso(int xp2 = 0) 
    {
        xp = xp2;
        power = 10;
    }
    // ********************

private:
    int gold;


protected:


};

class Archer : public Perso
{
public:
    int dist;

private:

};

class Guerrier : public Perso
{
public:
    int bouclier;

private:

};

int main()
{
    // nom, xp, or, for, def

    Archer personnage1;
    Guerrier personnage2;
    personnage2.xp = 5;

    cout << "xp perso 1 : " << personnage1.xp << endl;
    cout << "xp perso 1 : " << personnage2.xp << endl;

    personnage1.dist = 40;
    personnage2.bouclier = 100;

    cout << "dist perso 1 : " << personnage1.dist << endl;
    cout << "bouclier perso 1 : " << personnage2.bouclier << endl;

    return 0;
}

