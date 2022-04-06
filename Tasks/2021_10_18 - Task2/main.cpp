// Merenda Saverio Mattia [MAT. 330503]
#include <iostream>
using namespace std;

/*
 * Scrivere un programma in C++ che stampi un triangolo isoscele, utilizzando come
 * carattere di riempimento il carattere ‘*’, come nell’esempio.

Il programma deve chiedere all’utente di inserire l’altezza h > 0 relativa al lato
 di lunghezza maggiore (nell’esempio sopra, h = 5). Nel caso in cui l’utente inserisca un
 valore h <= 0, il programma deve stampare un opportuno messaggio di errore e l’operazione
 di lettura dovrà essere ripetuta fintanto che l’utente non inserisce un valore valido.
Esempio di esecuzione

Inserire un valore intero (> 0): -1 Input errato.
Inserire un valore intero (> 0): 0 Input errato.
Inserire un valore intero (> 0): -2 Input errato.
Inserire un valore intero (> 0): 4

 */

int main() {
    int h;          //altezza

    cout << "Inserire un valore intero (>0): ";
    cin >> h;

    while (h < 1){
        cout << "Input errato. " << endl << "Inserire un valore intero (>0): ";
        cin >> h;
    }

    int i = 0;      //contatore

    while (i < h){
        int j = 0;
        while (j <= i){
            cout << "* ";
            j++;
        }
        cout << endl;

        i++;
    }

    h--;        //decremento l'altezza di uno altrimenti ho due righe con h '*'

    while (h != 0){
        int y = 0;
        while(y < h){
            cout << "* ";
            y++;
        }
        cout << endl;

        h--;
    }

    return 0;
}
