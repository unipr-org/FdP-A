/*
Esercizio 1 (7pt). Scrivere una funzione mostFrequent, con tipo di ritorno int, che presi in input un array di interi e
la sua lunghezza, restituisce l’elemento pi`u frequente presente nell’array. Se ci sono pi`u elementi con la stessa frequenza
massima, restituire uno di essi*/
#include <iostream>
using namespace std;
int mostFrequent(int arr[], int n){        
    int ele;        
    int max = 0;
    for(int i = 0; i < n; i++){   
        int count = 0;
        for(int j = 0; j < n; j++)
            if(arr[i] == arr[j])
                count++;
        if(count > max ){
            max = count;
            ele = arr[i];            
        }
    }
    return ele;
}