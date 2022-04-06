#include <iostream>
using namespace std;

// Si scriva un programma in C++ che, dati in input due numeri interi a e b, calcoli il massimo
// comune divisore fra a e b utilizzando l'algoritmo di Euclide (wiki algoritmo di Euclide: https://it.wikipedia.org/wiki/Algoritmo_di_Euclide).

int main() {
    int a,b;

    cout << "MASSIMO COMUNE DIVISORE\n" << endl;

    do{
        cout << "Inserire il primo numero: ";
        cin >> a;
    } while (a < 1);

    do{
        cout << "Inserire il secondo numero: ";
        cin >> b;
    } while (b < 1);

    cout << "\nIl MCD tra " << a << " e " << b << " e': ";

    int r;

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }

    cout << a;

    return 0;
}
