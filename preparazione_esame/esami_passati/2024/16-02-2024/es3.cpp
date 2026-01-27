/*
Esercizio 3 (15pt). Scrivere una funzione di nome rotate che, preso come parametro una lista semplicemente concate-
nata lst i cui elementi hanno campo informazione di tipo int, esegua una ”rotazione in avanti” della lista: la rotazione
dovr`a spostare l’ultimo elemento della lista nella posizione in testa. Ad esempio, se lst = 1 → 2 → 3 → 4 → 5, dopo
la chiamata a funzione rotate(lst), la lista sar`a lst = 5 → 1 → 2 → 3 → 4. Gestire in modo opportuno il caso in
cui lst sia vuota. Si scriva inoltre la struttura che modella un nodo di una lista semplicemente concatenata con campo
informazione di tipo int.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
void rotate(Nodo* &lst){
    if(lst == nullptr || lst->next == nullptr)
        return;
    Nodo* current = lst;
    while(current->next->next != nullptr)
        current = current->next;
    Nodo* last = current->next;
    current->next = nullptr;
    last->next = lst;
    lst = last;
}
    