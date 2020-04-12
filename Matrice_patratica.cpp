//
// Created by Delia on 4/12/2020.
//

#include <iostream>
#include <cmath>
#include "Matrice_patratica.h"
using namespace std;

int determinant(int m, Matrice_patratica p)
{   int d = 0;
    Matrice_patratica subm(m-1);

    if (m == 2)
        return ((p[0][0] * p[1][1]) - (p[1][0] * p[0][1]));
    else
    {
        for (int c = 0; c < m; c++)
        {
            int subi = 0;
            for (int i = 1; i < m; i++)
            {
                int subj = 0;
                for (int j = 0; j < m; j++)
                {
                    if (j == c)
                        continue;
                    subm[subi][subj] = p[i][j];
                    subj++;
                }
                subi++;
            }
            d = d + (pow(-1, c) * p[0][c] * determinant(m - 1, subm));
        }
    }
    return d;
}

ostream& operator << (ostream& o, Matrice_patratica &x)
{
    Matrice &y = x;
    o << y;

    o << "Determinantul este " << determinant(x.m, x) << endl;


    return o;
}

void Matrice_patratica::f()
{
    int ok = 1;
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
            if (v[i][j] != 0)
            {
                cout << "Matricea nu este triunghiulara" << endl;
                ok = 0;
                break;
            }
        if (ok == 0)
            break;
    }
    if (ok == 1)
        Matrice::f();
}

