//
// Created by Delia on 4/12/2020.
//

#include <iostream>
#include "Vector.h"
using namespace std;

Vector::Vector(int n, int val)
{
    this -> n = n;
    a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = val;
}

Vector::Vector(const Vector& x)
{
    this -> n = x.n;
    a = new int[n];
    for (int i = 0; i < n; i++)
        this -> a[i] = x.a[i];
}

Vector::~Vector()
{
    n = 0;
    delete[] a;
}

int& Vector::operator [] (int i)
{
    return a[i];
}

Vector& Vector::operator = (Vector const &x)
{
    if (this == &x)
        return *this;

    delete[] a;
    this -> n = x.n;
    a = new int[n];
    for (int i = 0; i < n; i++)
        this -> a[i] = x.a[i];
    return *this;
}

istream& operator >> (istream& in, Vector &x)
{
    delete[] x.a;
    in >> x.n;
    x.a = new int[x.n];
    for (int i = 0; i < x.n; i++)
        in >> x.a[i];
    return in;
}

ostream& operator << (ostream& o, Vector &x)
{
    int n = x.n;
    for (int i = 0; i < n; i++)
        o << x.a[i] << '\t';
    return o;
}