//
// Created by Delia on 4/12/2020.
//

#include <iostream>
#include <cmath>
#include "Matrice_patratica.h"
using namespace std;

int determinant(int m, Matrice_patratica p)
{
    if (p.get_triunghiulara() == -1)
    {
        p.verif_triunghiulara(false);
    }

    if (p.get_triunghiulara() == 1)
    {
        int d = 1;
        for (int i = 0; i < p.get_m(); i++)
            d = d * p[i][i];
        return d;
    }
    else {
        int d = 0;
        Matrice_patratica subm(m - 1);

        if (m == 2)
            return ((p[0][0] * p[1][1]) - (p[1][0] * p[0][1]));
        else {
            for (int c = 0; c < m; c++) {
                int subi = 0;
                for (int i = 1; i < m; i++) {
                    int subj = 0;
                    for (int j = 0; j < m; j++) {
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
}

ostream& operator << (ostream& o, Matrice_patratica &x)
{
    Matrice &y = x;
    o << y;

    o << "Determinantul este " << determinant(x.m, x) << endl;


    return o;
}

void Matrice_patratica::verif_triunghiulara(bool afis)
{
    if (this -> triunghiulara == -1)
    {
        this -> triunghiulara = 1;
        for (int i = 0; i < m - 1; i++) {
            for (int j = i + 1; j < m; j++)
                if (v[i][j] != 0)
                {
                    if (afis)
                        cout << "Matricea nu este triunghiulara" << endl;
                    this -> triunghiulara = 0;
                    break;
                }
            if (this -> triunghiulara == 0)
                break;
        }
    }
    if (this -> triunghiulara == 1 and afis)
        verif_diagonala();
}

