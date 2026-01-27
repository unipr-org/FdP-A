/*
Esercizio 1 (5pt). Scrivere una funzione di tipo int chiamata compact che, presi come parametri un array di numeri
reali a, il numero n di elementi in a ed un array di numeri reali b, copia nell’array b tutti e soli gli elementi di a che sono
strettamente maggiori della media degli elementi di a. La funzione ritorna il numero di elementi inseriti nell’array b.
*/
#include <iostream>
using namespace std;
int compact(double a[], int n, double b[]){
    double somma = 0;
    for(int i = 0; i < n; i++)
        somma += a[i];
    double media = somma / n;
    int count = 0;
    for(int j = 0; j < n; j++)
        if(a[j] > media)
            b[count++] = a[j];     
    return count;
}