/*
Esercizio 1 (8pt). Scrivere una funzione che prenda come parametri un array di numeri interi, la sua lunghezza e un
parametro di tipo intero k e ritorna il numero di sottosequenze nell’array la cui somma `e pari a k. Per esempio, se l’array
passato come parametro `e [1, 2, -3, 7, -1, 4, 3] e k = 3, la funzione dovr`a ritornare 3.
*/
#include <iostream>
using namespace std;

#define MAX 50
int sottosequenze(int arr[], int len, int k){
    int count = 0;
    for(int i = 0; i < len; i++){
        int sum = 0;
        for(int j = i; j < len; j++){
            sum += arr[j];
            if(sum == k)
                count++;
        }
    }
    return count;
}