//
// Created by Delia on 4/12/2020.
//

#include <iostream>
#include "Matrice.h"
using namespace std;

Matrice::Matrice (int m, int n)
{
    this -> m = m;
    Vector val(n);
    this -> v = new Vector[m];
    for (int i = 0; i < m; i++)
        this -> v[i] = val;
}

Matrice::Matrice(const Matrice& x)
{
    this -> m = x.m;
    this -> v = new Vector[m];
    for (int i = 0; i < m; i++)
        this -> v[i] = x.v[i];
}

Matrice::~Matrice()
{
    m = 0;
    delete[] v;
}

Matrice& Matrice::operator = (Matrice const &x)
{
    if (this == &x)
        return *this;

    delete[] v;
    this -> m = x.m;
    v = new Vector[m];
    for (int i = 0; i < m; i++)
        this -> v[i] = x.v[i];
    return *this;
}

Vector& Matrice::operator[](int i)
{
    return v[i];
}

istream& operator >> (istream& in, Matrice& x)
{
    delete[] x.v;
    in >> x.m;
    x.v = new Vector[x.m];
    for (int i = 0; i < x.m; i++)
        in >> x.v[i];
    return in;
}

ostream& operator << (ostream& o, Matrice &x)
{
    for (int i = 0; i < x.m; i++)
        o << x.v[i] << '\n';
    return o;
}

void Matrice::verif_diagonala()
{
    int ok = 1;
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i; j++)
            if (v[i][j] != 0)
            {
                cout << "Matricea nu este diagonala" <<endl;
                ok = 0;
                break;
            }
        if (ok == 0)
            break;
    }
    if (ok == 1)
        cout << "Matricea este diagonala" << endl;
}