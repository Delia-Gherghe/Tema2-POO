//
// Created by Delia on 4/12/2020.
//

#ifndef MATRICE_MOSTENIRE_MATRICE_OARECARE_H
#define MATRICE_MOSTENIRE_MATRICE_OARECARE_H

#include <iostream>
#include "Matrice.h"
using namespace std;

class Matrice_oarecare : public Matrice
{

public:
    explicit Matrice_oarecare(int m = 0, int n = 0) : Matrice(m,n) {};
    Matrice_oarecare(const Matrice_oarecare &x) = default;
    Matrice_oarecare& operator = (Matrice_oarecare const &x)
            {
                if (this != &x)
                    (*this).Matrice :: operator = (x);
                return *this;
            };
    void verif_diagonala() override;
};

#endif //MATRICE_MOSTENIRE_MATRICE_OARECARE_H
