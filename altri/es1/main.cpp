#include <iostream>
using namespace std;

// http://www-db.deis.unibo.it/courses/FIL-A/ESERCIZI/BONDI/eserciziaggiuntivi.pdf

//Scrivere un programma in linguaggio C che legga da tastiera una sequenza di lunghezza ignota a priori di numeri interi positivi.
//Il programma, a partire dal primo numero introdotto, stampa ogni volta la media di tutti i numeri introdotti.
//Terminare quando il numero inserito è negativo.


int main() {
    int num, i = 1;
    float sum;

    cout << "INSERIRE UN NUMERO < 0 PER TERMINARE\n\n";

    do {
        cout << "\nInserire il " << i << " numero: ";
        cin >> num;

        if(num > 0){
            sum += num;
            cout << "La media dei primi " << i << " numeri e': " << sum/i << endl;
            i++;
        }

    } while (num > 0);

    cout << "\nFINE PROGRAMMA";

    return 0;
}
