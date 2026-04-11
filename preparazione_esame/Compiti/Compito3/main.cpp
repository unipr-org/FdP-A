#include <iostream>
using namespace std;

/*
 * 1) Scrivere una funzione di nome COINCIDENTI che, presi come suoi parametri due array di caratteri A e B,
 * e le rispettive lunghezze n ed m, determina e restituisce come suo risultato il numero di caratteri coincidenti
 * presenti nei due array (con "caratteri coincidenti" si intendono due caratteri identici come valore e come
 * posizione occupata all'interno dell’ array).
 */

int coincidenti(char a[], int n, char b[], int m){
    int som = 0, min;

    if(m <= n) min = m;
    else min = n;

    for(int i = 0; i < min; i++)
        if(a[i] == b[i])
            som++;

    return som;
}

void inserisci(char vet[], int& x){
    char car;
    do {
        cout << "Inserisci il " << x + 1 << " carattere (* per terminare): ";
        cin >> car;

        if(car != '*'){
            vet[x] = car;
            x++;
        }
    }while(car != '*' && x < 99);
}

void output(char c[], int len){
    for(int i = 0; i < len; i++) cout << c[i] << " ";
    cout << endl;
}

int main() {
    char a[100];
    char b[100];
    int n = 0, m = 0;

    inserisci(a, n);
    inserisci(b, m);

    cout << "array a: ";
    output(a, n);
    cout << "array b: ";
    output(b, m);

    cout << "Caratteri coincidenti: " << coincidenti(a, n, b, m);

    return 0;
}
