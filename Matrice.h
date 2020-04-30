//
// Created by Delia on 4/12/2020.
//

#ifndef MATRICE_MOSTENIRE_MATRICE_H
#define MATRICE_MOSTENIRE_MATRICE_H

#include <iostream>
#include "Vector.h"
using namespace std;

class Matrice
{
protected:
    int m;
    Vector *v;

public:
    explicit Matrice(int m = 0, int n = 0);
    Matrice(const Matrice& x);
    virtual ~Matrice();
    Matrice& operator = (Matrice const &x);
    Vector& operator[] (int i);
    friend istream& operator >> (istream& in, Matrice &x);
    friend ostream& operator << (ostream& o, Matrice &x);
    virtual void verif_diagonala() = 0;
    int get_m() { return m; }
};

#endif //MATRICE_MOSTENIRE_MATRICE_H
