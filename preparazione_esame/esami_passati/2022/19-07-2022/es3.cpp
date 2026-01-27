/*
Esercizio 3 (15pt). Scrivere una funzione di tipo bool di nome equals che, presi
come parametri due liste concatenate semplici l1 e l2 i cui elementi hanno campo
informazione di tipo int, ritorna true se le due liste sono uguali, false altrimenti.
Gestire opportunamente i casi in cui l1 o l2 siano vuote
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
bool equals(Nodo* l1, Nodo* l2){
    while(l1 != nullptr && l2 != nullptr){
        if(l1->data != l2->data)
            return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    if(l1 == nullptr && l2 == nullptr)
        return true;
    return false;
}