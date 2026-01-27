/*
Esercizio 1 (6pt). Scrivere una funzione void shift left(int arr[], int n, int k) che prende come parametro un
array di interi arr, la sua dimensione n e un intero k, e sposta tutti gli elementi dell’array a sinistra di k posizioni, riempi-
endo con zeri le posizioni vacanti. Per esempio, se arr = [1, 2, 3, 4, 5] e k = 2, dopo la chiamata shift left(arr,
5, 2), l’array sar`a arr = [3, 4, 5, 0, 0].
*/
#include <iostream>
using namespace std;
/*void shift_left(int arr[], int n, int k){
    int j = 0;
    for(int i = k ; i < n; i++)
        arr[j++] = arr[i];

    for(int i = n-k; i < n; i++)
        arr[i] = 0;
}*/
void shift_left(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (i + k < n) 
            arr[i] = arr[i + k];
        else 
            arr[i] = 0;
        
    }
}