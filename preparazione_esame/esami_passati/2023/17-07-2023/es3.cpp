/*
Esercizio 3 (14pt). Scrivere una funzione che preso come argomento una lista semplicemente concatenata lst i cui
elementi hanno campo informazione di tipo int ritorni una nuova lista che contiene solamente gli elementi di lst
strettamente maggiori di zero. Ad esempio, se lst = {1,7, -2, 1, -3, 5}, la funzione dovr`a ritornare la lista {1, 7,
1, 5}. Trattare in modo opportuno i casi in cui lst sia vuota. Si scriva inoltre il tipo struttura che modella una lista
semplicemente concatenata.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
void AddTail(Nodo* &head, Nodo* &tail, int valore){
    Nodo* new_nodo = new Nodo;
    new_nodo->data = valore;
    new_nodo->next = nullptr;
    if(head == nullptr){
        head = new_nodo;
        tail = new_nodo;
    }
    else{
        tail->next = new_nodo;
        tail = new_nodo;
    }
}
Nodo* solo_positivi(Nodo* lst){
    if(lst == nullptr)
        return nullptr;
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    while(lst != nullptr){
        if(lst->data > 0)
            AddTail(head, tail, lst->data);
        lst = lst->next;
    }
    return head;
}