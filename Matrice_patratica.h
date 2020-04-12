//
// Created by Delia on 4/12/2020.
//

#ifndef MATRICE_MOSTENIRE_MATRICE_PATRATICA_H
#define MATRICE_MOSTENIRE_MATRICE_PATRATICA_H

#include <iostream>
#include "Matrice.h"
using namespace std;

class Matrice_patratica : public Matrice
{

public:
    explicit Matrice_patratica(int m = 0) : Matrice(m,m) {};
    Matrice_patratica(const Matrice_patratica &x) = default;
    Matrice_patratica& operator = (Matrice_patratica const &x)
            {
                if (this != &x)
                    (*this).Matrice :: operator = (x);
                return *this;
            };
    void f() override;
    friend ostream& operator << (ostream& o, Matrice_patratica &x);

};

#endif //MATRICE_MOSTENIRE_MATRICE_PATRATICA_H
