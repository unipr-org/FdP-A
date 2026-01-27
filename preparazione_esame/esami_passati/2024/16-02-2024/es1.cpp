/*
Esercizio 1 (6pt). Scrivere una funzione swap con tipo di ritorno void che prende come parametri due array di interi a
e b, della stessa dimensione n presa anch’essa come parametro. La funzione deve scambiare gli elementi di a e b se questi
hanno lo stesso indice e l’elemento di a `e maggiore di quello di b. Per esempio, se a = [1, 6, 2, 2, 4] e b = [3, 4,
5, 4, 1], dopo la chiamata di funzione swap(a, b, 5), gli array saranno a = [1, 4, 2, 2, 1] e B = [3, 6, 5, 4,
4].
*/
#include <iostream>
using namespace std;    
void swap(int a[], int b[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
}
