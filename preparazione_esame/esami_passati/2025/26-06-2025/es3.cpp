/*Esercizio 3 (15pt). Scrivere una funzione unionLists che, prese come parametri due liste semplicemente concatenate
lst1 e lst2 i cui elementi hanno campo informazione di tipo int, ritorna una nuova lista e senza modificare lst1 e
lst2 contenente tutti gli elementi presenti in lst1 o in lst2 (l’unione), senza duplicati.
Ad esempio, se lst1 = 1 → 2 → 3 → 4 e lst2 = 2 → 4 → 6, la funzione deve ritornare una lista 1 → 2 → 3
→ 4 → 6.
Gestire in modo opportuno il caso in cui una o entrambe le liste siano vuote. Si definisca inoltre la struttura che
modella un nodo di una lista semplicemente concatenata con campo informazione di tipo int.*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
bool contains(Nodo* head, int valore){
    Nodo* current = head;
    while(current != nullptr){
        if(current->data == valore)
            return true;
        current = current->next;
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
Nodo* unionLists(Nodo* lst1, Nodo* lst2){
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    while(lst1 != nullptr){
        if(!contains(head, lst1->data))
            AddTail(head, tail, lst1->data);
        lst1 = lst1->next;
    }
    while(lst2 != nullptr){
        if(!contains(head, lst2->data))
            AddTail(head, tail, lst2->data);
        lst2 = lst2->next;
    }
    return head;
}