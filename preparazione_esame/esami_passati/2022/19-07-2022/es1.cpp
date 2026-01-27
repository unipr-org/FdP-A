/*
Esercizio 1 (6pt).
Scrivere una funzione di tipo int chiamata compact che, presi come 
parametri un array di numeri interi a e il numero n di elementi in a 
ed un array di numeri interi b, memorizza nell’array b gli elementi 
di a senza ripetizioni (se un elemento `e presente pi`u di una volta 
dovr`a essere memorizzato la prima volta che compare). La funzione
deve ritornare il numero di elementi di a senza ripetizioni. Per 
esempio:
a = {1 , 2 , 7 , 1 , 2 , 4 , 1 , 7 , 5} // (n = 9)
b = {1 , 2 , 7 , 4 , 5} // la funzione ritorna 5
*/
#include <iostream>
using namespace std;
int compact(int a[], int b[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        bool rip = false;
        for(int j = 0; j < count; j++)
            if(a[i] == b[j])
                rip = true;
        if(!rip)
            b[count++] = a[i];
    }
    return count;
}