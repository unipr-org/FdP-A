/*
Esercizio 2 (10pt). Scrivere una funzione main che legge una sequenza di interi positivi da tastiera e li memorizza in
un array dinamico di interi a (dimensione massima 1000 elementi). La lettura si interrompe quando l’utente inserisce
da tastiera un intero negativo. La funzione main deve:
I stampare a video l’array a
I creare un nuovo array dinamico b in cui vengono copiati tutti gli elementi dell’array a che compaiono solo una
volta in a
I stampare a video l’array b
I deallocare opportunamente la memoria dinamica utilizzata
Per esempio, se l’array a `e [3 6 2 7 6 2 8], l’array b sar`a [3 7 8];
*/
#include <iostream>
#define MAX 1000
using namespace std;

int main() {
    int* a = nullptr;
    int dim = 0;
    int x;

    // 1) Lettura dei numeri
    do {
        cout << "Inserisci un numero: ";
        cin >> x;

        if (x >= 0) {
            int* temp = new int[dim + 1];

            for (int i = 0; i < dim; i++)
                temp[i] = a[i];

            temp[dim] = x;

            if (a != nullptr)
                delete[] a;

            a = temp;
            dim++;
        }

    } while (x >= 0 && dim < MAX);

    // Se l'array è vuoto
    if (dim == 0) {
        cout << "L'array e' vuoto, di conseguenza anche b." << endl;
        return 0;
    }

    // 2) Stampa array a
    cout << "L'array a e': ";
    for (int i = 0; i < dim; i++)
        cout << a[i] << " ";
    cout << endl;

    // 3) Calcolo dim_b (elementi unici)
    int dim_b = 0;

    for (int i = 0; i < dim; i++) {
        bool isFound = false;

        for (int j = 0; j < dim; j++) {
            if (i != j && a[i] == a[j]) {
                isFound = true;
                break;
            }
        }

        if (!isFound)
            dim_b++;
    }

    // Se b è vuoto
    if (dim_b == 0) {
        cout << "L'array b e' vuoto" << endl;
        delete[] a;
        return 0;
    }

    // 4) Creazione array b
    int* b = new int[dim_b];
    int idx = 0;

    for (int i = 0; i < dim; i++) {
        bool isFound = false;
        for (int j = 0; j < dim; j++) {
            if (i != j && a[i] == a[j]) {
                isFound = true;
                break;
            }
        }

        if (!isFound)
            b[idx++] = a[i];
    }

    // 5) Stampa array b
    cout << "L'array b e': ";
    for (int i = 0; i < dim_b; i++)
        cout << b[i] << " ";
    cout << endl;

    // 6) Deallocazione memoria
    delete[] b;
    delete[] a;

    return 0;
}
