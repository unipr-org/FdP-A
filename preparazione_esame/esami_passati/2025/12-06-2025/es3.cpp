/*
12_Giugno_2025
Esercizio 3 (15pt). Scrivere una funzione difference che, prese come parametri due liste semplicemente concatenate
lst1 e lst2 i cui elementi hanno campo informazione di tipo int, ritorna una nuova lista contenente tutti e soli gli elementi
presenti in lst1 che non compaiono in lst2, mantenendo l’ordine crescente. Ad esempio, se lst1 = 1 → 2 → 3 → 4
→ 5 e lst2 = 2 → 4 → 6, la funzione deve ritornare la lista lst = 1 → 3 → 5. Gestire in modo opportuno il caso
in cui una o entrambe le liste siano vuote. Si definisca inoltre la struttura che modella un nodo di una lista semplicemente
concatenata con campo informazione di tipo int
*/
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
Nodo* difference(Nodo* lst1, Nodo* lst2){
    if(lst1 == nullptr && lst2 == nullptr)
        return nullptr;
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    while(lst1 != nullptr){
        if(!contains(lst2, lst1->data))
            AddTail(head, tail, lst1->data);
        lst1 = lst1->next;
    }
    return head;
}