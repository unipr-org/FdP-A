/*
Esercizio 1 (6pt). Scrivere una funzione reverse con tipo di ritorno void che, presi come parametri un array di interi
a e la sua dimensione length, inverta l’ordine degli elementi dell’array a. Per esempio se l’array a `e [1, 5, 3, 2, 8],
dopo la chiamata a funzione reverse, l’array sar`a [8, 2, 3, 5, 1].
*/
#include <iostream>
using namespace std;

void reverse(int arr[],int lun){
    for(int i = 0; i < lun/2; i++){
        int temp = arr[i];
        arr[i] = arr[lun - 1-i];
        arr[lun - 1-i] = temp;
    }
}