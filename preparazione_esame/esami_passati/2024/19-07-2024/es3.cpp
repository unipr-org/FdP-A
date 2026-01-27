/*
sercizio 3 (15pt). Scrivere una funzione remove duplicates che prende come parametro una lista semplicemente
concatenata lst i cui elementi hanno campo informazione di tipo int e ritorna una nuova lista senza elementi duplicati.
Ad esempio, se lst = 1 → 2 → 2 → 3 → 3, la funzione ritorner`a la lista 1 → 2 → 3. Gestire in modo opportuno il caso in
cui la lista `e vuota. Si scriva inoltre la struttura che modella un nodo di una lista semplicemente concatenata con campo
informazione di tipo int.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
bool contains(Nodo* head, int valore){
    while(head != nullptr){
        if(head->data == valore)
            return true;
        head = head->next;
    }
    return false;
}
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
Nodo* remove_duplicates(Nodo* lst){
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    while(lst != nullptr){
        if(!contains(head, lst->data))
            AddTail(head, tail, lst->data);
        lst = lst->next;
    }
    return head;
}