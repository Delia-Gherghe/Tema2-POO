#include <iostream>
#include "Matrice_patratica.h"
#include "Matrice_oarecare.h"
#include <fstream>
using namespace std;

bool epatrat(Matrice_patratica x)
{
    int m = x.get_m();
    for (int i = 0; i < m; i++)
        if (x[i].get_n() != m)
            return false;
    return true;
}

int main()
{
    ifstream fin("matrice.in");
    int mo, mp, i;
    fin >> mo >> mp;
    Matrice_oarecare Mo[mo];
    Matrice_patratica Mp[mp];
    for (i = 0; i < mo; i++)
        fin >> Mo[i];
    for (i = 0; i < mp; i++)
        fin >> Mp[i];
    fin.close();

    for (i = 0; i < mo; i++)
    {
        cout << Mo[i];
        Mo[i].f();
        cout << endl;
    }

    for (i = 0; i < mp; i++)
        if (epatrat(Mp[i]))
        {
            cout << Mp[i];
            Mp[i].f();
            cout << endl;
        }
        else
        if (i == 0)
            cout << "Prima matrice declarata patratica nu este patratica" << endl << endl;
        else
            cout << "A " << i + 1 <<"-a matrice declarata patratica nu este patratica" << endl << endl;

    return 0;
}
