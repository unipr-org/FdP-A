/*
Esercizio 3 (15pt). Scrivere una funzione di nome rotate back che, preso come parametro una lista semplicemente
concatenata lst i cui elementi hanno campo informazione di tipo int, esegua una ”rotazione all’indietro” della lista: la
rotazione dovr`a spostare il primo elemento della lista nella posizione in coda. Ad esempio, se lst = 1 → 2 → 3 →
4 → 5, dopo la chiamata a funzione rotate(lst), la lista sar`a lst = → 2 → 3 → 4 → 5 → 1. Gestire in modo
opportuno il caso in cui lst sia vuota. Si scriva inoltre la struttura che modella un nodo di una lista semplicemente
concatenata con campo informazione di tipo int.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
void rotate_back(Nodo* &lst){
    if(lst == nullptr || lst->next == nullptr)
        return;
    
    Nodo* first = lst;
    lst = lst->next;
    first->next = nullptr;

    Nodo* current = lst;
    while(current->next != nullptr)
        current = current->next;
    current->next = first;
}