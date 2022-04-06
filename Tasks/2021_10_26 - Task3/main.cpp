// Merenda Saverio Mattia [MAT. 330503]
// TASK 3

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    cout << "Merenda Saverio Mattia [MAT. 330503]\nTask 3 - 26/10/2021\n\n";
    // --------------------------------------- Numero BITS -------------------------
    int n;

    cout << "Inserire il numero di bits: ";
    cin >> n;

    while(n < 2){
        cout << "Errore! \n";
        cout << "Inserire il numero di bits: ";
        cin >> n;
    }

    // --------------------------------------- Dichiarazione array -----------------
    int vet[n];

    // --------------------------------------- Inserimento valori in array ---------
    for(int i = 0; i < n; i++){
        int x;
        cout << "Inserire il bit nella posizione " << n - i - 1 << ": ";
        cin >> x;

        while(x != 0 && x != 1){
            cout << "Errore! \n";
            cout << "Inserire il bit nella posizione " << n - i - 1 << ": ";
            cin >> x;
        }

        vet[i] = x;
    }

    // --------------------------------------- OUTPUT numero binario inserito ------
//    cout << "\nNumero binario inserito da utente: ";
//    for(int j = 0; j < n; j++) cout << vet[j];
//    cout << endl;

    // --------------------------------------- OUTPUT Menù -------------------------
    int s;
    cout << "\nOperazione:" << endl;
    cout << "\t0 - Stampa binario" << endl;
    cout << "\t1 - Converti in decimale" << endl;
    cout << "\t2 - Calcola opposto" << endl;
    cout << "Inserisci valore: ";
    cin >> s;

    while(s < 0 || s > 2){
        cout << "Errore! \n";
        cout << "Operazione:" << endl;
        cout << "\t0 - Stampa binario" << endl;
        cout << "\t1 - Converti in decimale" << endl;
        cout << "\t2 - Calcola opposto" << endl;
        cout << "Inserisci valore: ";
        cin >> s;
    }

    // --------------------------------------- SWITCH -----------------------------
    switch(s){
        // ------------------------------------------------------------------------ CASE 0
        case 0:
            cout << "Numero binario: ";
            for(int j = 0; j < n; j++) cout << vet[j];
            break;
        // ------------------------------------------------------------------------ CASE 1
        case 1:
            {
                int segno;
                if(vet[0] == 1) segno = -1;
                else segno = 1;

                for (int j = n - 1; j >= 0; j--) {
                    if (vet[j] == 1) {
                        vet[j] = 0;
                        break;
                    } else {
                        if (vet[j - 1] == 1) {
                            vet[j - 1] = 0;
                            vet[j] = 1;
                            break;
                        } else vet[j] = 1;
                    }
                }
//                cout << endl;
//                cout << "SOTTRAGGO 1: ";
//                for(int j = 0; j < n; j++) cout << vet[j];
//                cout << endl;

                for (int i = 0; i < n; i++) {
                    if (vet[i] == 1) vet[i] = 0;
                    else vet[i] = 1;
                }
//                cout << "INVERTO I BIT: ";
//                for(int j = 0; j < n; j++) cout << vet[j];
//                cout << endl;

                int somma = 0;
                for (int i = 0; i < n; i++){
                    //cout << vet[i] * pow(2, n - i - 1) << endl;
                    somma = somma + vet[i] * pow(2, n - 1 - i);
                }
//                cout << "NUMERO DECIMALE (senza controllo segno): " << somma <<endl;

                somma = somma * segno;

                cout << "NUMERO DECIMALE: " << somma <<endl;
            }
            break;
            // ------------------------------------------------------------------------- CASE 2
        case 2:
            {
                int somma = 0;
                for (int i = 0; i < n; i++){
                    //cout << vet[i] * pow(2, n - i - 1) << endl;
                    somma = somma + vet[i] * pow(2, n - 1 - i);
                }
//                cout << "NUMERO DECIMALE: " << somma <<endl;
//                cout << "2 elevato alla " << n  << " fa " << pow(2, n) << endl;

                if(somma >= pow(2, n-1)) cout << "OVERFLOW!\n";
                else {
                    for (int i = 0; i < n; i++) {
                        if (vet[i] == 1) vet[i] = 0;
                        else vet[i] = 1;
                    }
//                    cout << "INVERTO I BIT: ";
//                    for (int j = 0; j < n; j++) cout << vet[j];
//                    cout << endl;

                    for (int j = n - 1; j >= 0; j--) {
                        if (vet[j] == 0) {
                            vet[j] = 1;
                            break;
                        } else {
                            if (vet[j - 1] == 0) {
                                vet[j - 1] = 1;
                                vet[j] = 0;
                                break;
                            } else vet[j] = 0;
                        }
                    }
                    cout << "OPPOSTO: ";
                    for (int j = 0; j < n; j++) cout << vet[j];
                    cout << endl;
                }
            }
            break;
    }

    /*

    for (int j = n-1; j >= 0; j--){
        if(vet[j] == 1){
            vet[j] = 0;
            break;
        }
        else{
            if(vet[j-1] == 1){
                vet[j-1] = 0;
                vet[j] = 1;
                break;
            }
            else vet[j] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(vet[i] == 1) vet[i] = 0;
        else vet[i] = 1;
    }


    for(int j = 0; j < n; j++) cout << vet[j];
    */

    return 0;
}
