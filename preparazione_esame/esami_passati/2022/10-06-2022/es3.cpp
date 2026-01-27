/*
Esercizio 3 (13pt). Scrivere una funzione di tipo int di nome sum che, preso come parametro una lista concatenata
semplice l i cui elementi hanno campo informazione di tipo int, e un intero m, restituisce la somma dei soli valori della
lista che sono multipli di m. Se la lista `e vuota, la funzione ritorna il valore 0.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
int sum(Nodo* l, int m){
    if(l == nullptr)
        return 0;
    int somma = 0;
    Nodo* current = l;
    while(current != nullptr){
        if(current->data % m == 0)
            somma += current->data;
        current = current->next;
    }
    return somma;
}