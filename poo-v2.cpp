#include <fstream>
#include <iostream>
#include <string>

using namespace std;    


int main()
{

    //ofstream outFile{ "demo.txt" };

    //if (!outFile)
    //{
    //    cerr << "impossible d'écrire dans le fichier";
    //    return -1;
    //}

    //outFile << "Ma ligne 1 \n";
    //outFile << "Ma ligne 2 \n";
    //outFile << "Ma ligne 3 \n";

    //cout << "Fin du programme" << endl;

    ifstream inFile{ "demo.txt" };

    if (!inFile)
    {
        cerr << "impossible d'écrire dans le fichier";
        return -1;
    }

    while (inFile)
    {
        string txt;
        getline(inFile, txt);
        cout << txt << endl;
    }

    cout << "Fin du programme" << endl;


    return 0;
}

