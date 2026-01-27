/*
Esercizio 1 (8pt). Scrivere una funzione getZeroSubsequences che 
prenda come parametri un array di numeri interi e la sua lunghezza 
e ritorna il numero di sottosequenze nell’array la cui somma `e 
pari a zero. Per esempio, se l’array passato come parametro
 `e [2, 3, -2, 1, -2, 5], la funzione dovr`a ritornare 1.
*/
#include <iostream>
using namespace std;
int getZeroSubsequences(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        int somma = 0;
        for(int j = i; j < n; j++){
            somma += arr[j];
            if( somma == 0)
                count++;
        }
    }
    return count;
}