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
    int triunghiulara;

public:
    explicit Matrice_patratica(int m = 0) : Matrice(m,m) { this -> triunghiulara = -1; };
    Matrice_patratica(const Matrice_patratica &x) : Matrice(x) { this -> triunghiulara = x.triunghiulara; }
    Matrice_patratica& operator = (Matrice_patratica const &x)
            {
                if (this != &x)
                {
                    (*this).Matrice::operator=(x);
                    this -> triunghiulara = x.triunghiulara;
                }
                return *this;
            }
    int get_triunghiulara() { return triunghiulara; }
    void verif_triunghiulara(bool afis);
    void verif_diagonala() override { Matrice :: verif_diagonala(); }
    friend ostream& operator << (ostream& o, Matrice_patratica &x);

};

#endif //MATRICE_MOSTENIRE_MATRICE_PATRATICA_H
