/*
Esercizio 1 (6pt). Scrivere una funzione count triplets sum k con tipo di ritorno int che prende come parametri un
array di interi arr, la sua dimensione n, e un intero k. La funzione deve ritornare il numero di triplette distinte di indici
(i, j, l) tali che i < j < l e
arr[i] + arr[j] + arr[l] = k.
Per esempio, se arr = [1, 2, 3, 4, 5] e k = 9, la funzione deve ritornare 2 (le triplette valide sono (0, 2, 4) con
1 + 3 + 5 = 9 e (1, 2, 3) con 2 + 3 + 4 = 9).
*/
#include <iostream>
using namespace std;
int count_triplets_sum_k(int arr[], int n, int k){
    int count = 0;
    for(int i = 0; i< n; i++)
        for(int j = i+1; j < n - 2; j++)
            for(int l = j+1; l < n - 1; l++)
                if(arr[i] + arr[j] + arr[l] == k)
                    count++;
    return count;
}
