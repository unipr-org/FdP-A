/*
Esercizio 3 (14pt). Scrivere una funzione di nome remove con tipo di ritorno void che, presi come parametri una lista
semplicemente concatenata lst, i cui elementi hanno campo informazione di tipo int, e un valore intero e, rimuova da
lst tutti gli elementi maggiori di e. Gestire in modo opportuno il caso in cui lst `e vuota. Si scriva inoltre il tipo struttura
che modella una lista semplicemente concatenata.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
void remove(Nodo* &lst, int e){
    if(lst == nullptr)
        return;
    while(lst != nullptr && lst->data > e){
        Nodo* temp = lst;
        lst = lst->next;
        delete temp;
    }
    if(lst == nullptr)
        return;
    Nodo* current = lst;
    while(current->next != nullptr){
        if(current->next->data > e){
            Nodo* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
            current = current->next;
    }
}