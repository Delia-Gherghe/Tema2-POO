#include <iostream>
#include <fstream>
#include "Matrice_patratica.h"
#include "Matrice_oarecare.h"

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
    auto *Mo = new Matrice_oarecare[mo];
    auto *Mp = new Matrice_patratica[mp];
    for (i = 0; i < mo; i++)
        fin >> Mo[i];
    for (i = 0; i < mp; i++)
        fin >> Mp[i];
    fin.close();

    Matrice_oarecare test_op_egal = Mo[0], test_c_copiere(Mo[0]);
    cout << test_op_egal << endl << test_c_copiere << endl;

    for (i = 0; i < mo; i++)
    {
        cout << Mo[i];
        Mo[i].verif_diagonala();
        cout << endl;
    }

    for (i = 0; i < mp; i++)
    {
        if (epatrat(Mp[i])) {
            cout << Mp[i];
            Mp[i].verif_triunghiulara(true);
            cout << endl;
        } else if (i == 0)
            cout << "Prima matrice declarata patratica nu este patratica" << endl << endl;
        else
            cout << "A " << i + 1 << "-a matrice declarata patratica nu este patratica" << endl << endl;
    }

    delete[] Mo;
    delete[] Mp;

    return 0;
}
