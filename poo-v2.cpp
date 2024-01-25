
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
        gold = 10;
    }
    // ********************

    void increaseGold(int po)
    {
        gold += po;
    }

    void setGold(int val)
    {
        gold = val;
    }

    int getGold()
    {
        return gold;
    }

private:
    int gold;

};


int main()
{
    // nom, xp, or, for, def

    Perso personnage1(50);
    Perso personnage2(20);
    Perso personnage3;

    //personnage1.xp = 0;
    personnage1.setGold(10);
    //personnage1.power = 10;

    cout << "xp perso 1 : " << personnage1.xp << endl;
    cout << "xp perso 2 : " << personnage2.xp << endl;
    cout << "xp perso 3 : " << personnage3.xp << endl;

    cout << "Perso1 gold = " << personnage1.getGold() << endl;

    personnage1.increaseGold(40);

    cout << "Perso1 gold = " << personnage1.getGold() << endl;


    return 0;
}

