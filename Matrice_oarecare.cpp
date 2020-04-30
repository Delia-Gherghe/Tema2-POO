//
// Created by Delia on 4/12/2020.
//

#include <iostream>
#include "Matrice_oarecare.h"
using namespace std;

void Matrice_oarecare::verif_diagonala()
{
    int ok = 1;
    for (int i = 0; i < m; i++)
        if (v[i].get_n() != i + 1)
        {
            ok = 0;
            cout << "Matricea nu este triunghiulara" << endl;
            break;
        }
    if (ok == 1)
        Matrice::verif_diagonala();

}