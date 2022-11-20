#include <iostream>
using namespace std;

int main() {
//    int x = 5, y = 5;
//
//    int* p1 = &x;
//    int* p2 = &y;
//
//    *p1 = *p2 + 1;
//
//    cout << "p1: " << p1 << endl;
//    cout << "*p1: " << *p1 << endl;
//
//    cout << "x: " << x << endl;
//    cout << "y: " << y << endl;

    int* vet = new int[100];

    *(vet) = 1;
    *(vet + 1) = 2;
    *(vet + 2) = 3;
    *(vet + 3) = 4;

    for(int i = 0; i < 10; i++)
        cout << "(*vet + " << i << "): " << *(vet + i) << endl;

    delete []vet;

    for(int i = 0; i < 10; i++)
        cout << "(*vet + " << i << "): " << *(vet + i) << endl;


    return 0;
}
