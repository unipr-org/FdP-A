#include <iostream>
using namespace std;

/*
 * Si scriva un programma in C++ che prende in input un numero intero n e
 * stampa il valore n se n è pari, 2n se n è dispari (senza costrutti di controllo!, e.g., if)
 */

int main() {
    int num;
    cout << "Inserire un numero: ";
    cin >> num;

    cout << (num % 2 + 1) * num;

    return 0;
}
