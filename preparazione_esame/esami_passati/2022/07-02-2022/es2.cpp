/*
Esercizio 2 (10pt). Scrivere una funzione main che legge una sequenza di interi positivi da tastiera (fino ad incontrare
un numero negativo) e li memorizza in un array dinamico di interi a (dimensione massima 1000 elementi). La funzione
deve:
I stampare a video l’array a;
I creare un nuovo array dinamico b in cui vengono copiati tutti gli elementi di a tranne quelli che hanno valore minimo
o massimo. Per esempio, se l’array a `e [3 6 2 7 6 2 2 8 3], l’array b sar`a [3 6 7 6 3];
I stampare a video l’array b;
I deallocare opportunamente la memoria dinamica utilizzata
*/
#include <iostream>
using namespace std;
#define MAX 1000
int main(){
    int* a = nullptr;
    int dim = 0;
    int x;
    do{
        cout <<"Inserisci un numero (negativo per uscire): ";
        cin >> x;
        if(x >= 0){
            int* temp = new int [dim + 1];
            for(int i = 0; i < dim; i++)
                temp[i] = a[i];
            temp[dim] = x;
            if(a != nullptr)
                delete[] a;
            a = temp;
            dim++;
        }
    }while(x >= 0 && dim < MAX);
    if(dim == 0){
        cout <<"L'array e' vuoto, di conseguenza anche b." << endl;
        return 0;
    }
    cout <<"L'array a e': ";
    for(int i = 0; i < dim; i++)
        cout << a[i] <<" ";
    cout << endl;
    // Trovo min e max
    int min = a[0];
    int max = a[0];
    for(int i = 0; i < dim; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    // Calcolo dimensione array b
    int dim_b = 0;
    for(int i = 0; i < dim; i++)
        if(a[i] != min && a[i] != max)
            dim_b++;
    if(dim_b == 0){
        cout <<"L'array b e' vuoto." << endl;
        delete[] a;
        return 0;
    }
    // Creo array b
    int* b = new int[dim_b];
    int index_b = 0;
    for(int i = 0; i < dim; i++)
        if(a[i] != min && a[i] != max)
            b[dim_b++] = a[i];
    // Stampo array b
    cout <<"L'array b è': ";
    for(int i = 0; i< dim_b; i++)
        cout << b[i] <<" ";
    cout << endl;
    // Dealloco memoria
    delete [] a;
    delete [] b;
    
    return 0;
}