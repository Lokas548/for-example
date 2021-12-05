
#include<iostream>
using namespace std;
int const m = 100;



bool equal_columns(int n, int(&arr)[m][m]) {  // одинаковые столбцы
    int c = 0;
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            c = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i][j] != arr[i][k])break;
                else c++;
            }
            if (c == n)return true;
        }
    }
    return false;
}

bool isPrime(int x) { // простое число
    if (x < 2)
        return false;
    for (int d = 2; d <= sqrt(x); d++)
        if (x % d == 0)
            return false;
    return true;
}

int sum(int n, int(&arr)[m][m], int i) { // сумма модулей чисел
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += abs(arr[i][j]);
    }
    return sum;
}

void swap_rows(int n, int(&arr)[m][m], int i, int j) { // смена рядов
    for (int k = 0; k < n; k++) {
        int t = arr[i][k];
        arr[i][k] = arr[j][k];
        arr[j][k] = t;
    }
}

void sort(int n, int(&arr)[m][m]) { // сортировка по сумме модулей 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sum(n, arr, i) > sum(n, arr, j))
                swap_rows(n, arr, i, j);
        }
    }
}