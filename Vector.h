//
// Created by Delia on 4/12/2020.
//

#ifndef MATRICE_MOSTENIRE_VECTOR_H
#define MATRICE_MOSTENIRE_VECTOR_H

#include <iostream>
using namespace std;

class Vector
{
    int n, *a;

public:

    explicit Vector (int n = 0, int val = 0);
    Vector (const Vector& x);
    ~Vector();
    int& operator [] (int i);
    Vector& operator = (Vector const &x);
    friend istream& operator >> (istream& in, Vector &x);
    friend ostream& operator << (ostream& o, Vector &x);
    int get_n() { return n; };
};

#endif //MATRICE_MOSTENIRE_VECTOR_H
