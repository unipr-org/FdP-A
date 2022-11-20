#include <iostream>
using namespace std;

/*
Si scriva un programma in C++ che richieda all’utente il prezzo di un oggetto e la
percentuale di sconto ad esso applicata, e che stampi a video il cartellino con il prezzo (originale e scontato).

Esempio (in grassetto i valori inseriti in input dall'utente):

Inserisci i dati:

Prezzo: 25
Sconto: 10
Cartellino:
Prezzo: 25.00 euro
Sconto applicato 10%
Prezzo finale: 22.50 euro
 */

int main() {
    double prezzo, sconto;

    do {
        cout << "Inserire il prezzo: ";
        cin >> prezzo;
    } while(prezzo <= 0);

    do {
        cout << "Inserire lo sconto (in percentuale): ";
        cin >> sconto;
    } while(sconto < 0);

    cout << "Prezzo: " << prezzo << endl;
    cout << "Sconto applicato: " << sconto << endl;
    cout << "Prezzo finale: " << prezzo - (prezzo / 100 * sconto) << endl;

    return 0;
}
