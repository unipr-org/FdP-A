/*
Esercizio 3 (15pt). Scrivere una funzione di nome concat con tipo di ritorno void che, presi come suoi parametri due
liste concatenate semplici l1 ed l2 i cui elementi hanno campo informazione di tipo char, concateni la lista l2 alla lista
l1. Ad esempio, se l1 = {’a’, ’d’} e l2 = {’g’, ’f’, ’l’}, dopo la chiamata alla funzione concat passando come
parametri l1 ed l2, la lista l1 diventa {’a’,’d’, ’g’, ’f’, ’l’}. Gestire in modo opportuno i casi in cui l1 e/o l2
siano liste vuote. (+2pt se la funzione `e ricorsiva)
*/

/*
l'idea è di scorrere la prima lista fino alla fine e collegare l'ultimo nodo della prima lista al primo nodo 
della seconda lista.
*/
#include <iostream>
using namespace std;
struct Nodo{
    char valore;
    Nodo* next;
};
void concat(Nodo* &l1, Nodo* l2){
    if(l1 == nullptr){
        l1 = l2;
        return;
    }
    else if(l2 == nullptr)
        return;
    Nodo* cursor = l1;
    while(cursor->next != nullptr)
        cursor =cursor->next;
    cursor->next = l2;
}