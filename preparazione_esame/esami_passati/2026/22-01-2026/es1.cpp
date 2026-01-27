/*
Esercizio 1 (6pt). Scrivere una funzione countInversions con tipo di ritorno int che prende come parametri un array
di interi arr e la sua dimensione n. La funzione deve ritornare il numero di inversioni in arr, dove un’inversione `e una
coppia di indici (i, j) tali che i < j e arr[i] > arr[j]. Per esempio, se arr = [2, 4, 1, 3, 5] la funzione dovr`a ritornare
3 (inversioni: (0, 2),(1, 2),(1, 3)).
*/
#include <iostream>
using namespace std;
int countInversions(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++)
        for(int j= i+1; j<n; j++)
            if(arr[i] > arr[j])
                count++;
    return count;
}