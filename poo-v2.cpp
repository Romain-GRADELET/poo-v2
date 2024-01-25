
#include <iostream>

using namespace std;    


int main()
{
    int demo[] = { 10, 20, 30, 40, 50 };
    int nb{};

    cout << "Saisir un nombre : " << endl;
    cin >> nb;

    if (nb < 5)
    {
        cout << "demo[nb] = " << demo[nb] << endl;
    }
    else
    {
        try
        {
            throw - 1;
        }
        catch (int error)
        {
            cout << "Probleme. Code erreur : " << error << endl;
        }
    }

    cout << "Fin du programme" << endl;

    return 0;
}

