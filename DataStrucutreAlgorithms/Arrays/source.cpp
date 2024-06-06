// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n = 9;
    int** M = new int* [n];
    for (int i = 0; i < n; i++) {

        M[i] = new int[n];
        *M[i] = i;
    }
    for (int j = 0; j < n; j++) std::cout << *M[j]  << "\n";

    for (int i = 0; i < n; i++) {
        delete[] M[i];
    }
    delete[] M;
}
