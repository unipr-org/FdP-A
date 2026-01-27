/*
Esercizio 2 (10pt). Scrivere una funzione main che legge una sequenza di interi positivi da tastiera e li memorizza in
un array dinamico di interi a (dimensione massima 1000 elementi). La lettura si interrompe quando l’utente inserisce
da tastiera un intero negativo. La funzione main deve:
I stampare a video l’array a
I creare un nuovo array dinamico b in cui vengono copiati tutti gli elementi dell’array a che compaiono solo una
volta in a
I stampare a video l’array b
I deallocare opportunamente la memoria dinamica utilizzata
Per esempio, se l’array a `e [3 6 2 7 6 2 8], l’array b sar`a [3 7 8];
*/
#include <iostream>
using namespace std;
#define MAX 1000
int main(){
    int* a = nullptr; // array dinamico
    int dim = 0; // dimensione array a
    int x; // valore temporaneo per la lettura
    // Lettura numeri
    do{
        cout <<"Inserisci un numero (negativo per terminare): ";
        cin >> x;
        if(x >= 0){
            // Aumento dimensione array a tramite array temporaneo perche' non so la dimensione a priori
            int* temp = new int[dim + 1];
            for(int i = 0; i < dim; i++) // Copio i vecchi valori
                temp[i] = a[i];
            temp[dim] = x; // Aggiungo il nuovo valore
            if(a != nullptr) // Dealloco il vecchio array
                delete[] a;
            a = temp; // Puntatore a punta al nuovo array
            dim++;
        }
    }while(x >= 0 && dim < MAX);
    // Se l'array e' vuoto, esco
    if(dim == 0){
        cout <<"L'array e' vuoto, di conseguenza anche b." << endl;
        return 0;
    }
    // Stampo array a
    cout <<"L'array a e': ";
    for(int i = 0; i < dim; i++)
        cout << a[i] <<" ";
    cout << endl;
    // Calcolo dimensione array b (elementi unici)
    int dim_b = 0;
    for(int i = 0; i < dim; i++){
        bool found = false;
        for(int j = 0; j < dim; j++){
            if(i != j && a[i] == a[j]){
                found = true;
                break;
            }
        }
        if(!found)
            dim_b++;
    }
    // Controllo se b e' vuoto
    if(dim_b == 0){
        cout <<"L'array b è vuoto."<< endl;
        delete[] a; // Dealloco a
        return 0;
    }
    // Creo array b e lo popolo
    int* b = new int[dim_b];
    int index_b = 0;
    for(int i = 0; i < dim; i++){
        bool found  = false;
        for(int j = 0; j < dim; j++){
            if(i != j && a[i] == a[j]){
                found = true;
                break;
            }
        }
        if(!found)
            b[index_b++] = a[i];
    }
    // Stampo array b
    cout <<"L'array b e': ";
    for(int i = 0; i < dim_b; i++)
        cout << b[i] <<" ";
    cout << endl;
    // Dealloco memoria
    delete[] a;
    delete[] b;
    return 0;
}