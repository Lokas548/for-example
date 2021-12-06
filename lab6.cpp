//Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100. Если в матрице есть два одинаковых столбца и есть хотя 
//бы один элемент, абсолютная величина которого - простое число, 
//упорядочить строки матрицы по неубыванию суммы модулей элементов

#include<iostream>
#include<stdio.h>
#include<cmath>
#include "headers/lab6.hpp"
using namespace std;



int main() {
    int a[m][m];
    int n;
    cout << "print size :";
    cin >> n;
    bool prime = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (isPrime(a[i][j]))prime = true;
        }
    }
    if (equal_columns(n, a) && prime) {
        sort(n, a);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}