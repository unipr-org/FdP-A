/*Esercizio 1 (6pt). Scrivere una funzione count sum k con tipo di ritorno int che prende come parametri un array di
interi arr, la sua dimensione n, e un intero k. La funzione deve ritornare il numero di coppie di indici (i, j) tali che i < j
e arr[i] + arr[j] = k. Per esempio, se arr = [1, 5, 7, -1, 5] e k = 6, la funzione dovr`a ritornare 3 (coppie valide:
(0, 1), (2, 3), (0, 4)).
Esercizio 2 (9pt).*/
#include <iostream>
using namespace std;

int countSumK(int arr[],int n, int k){
    int count = 0;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i] + arr[j] == k)
                count++;
    return count;
}