/*
Esercizio 3 (15pt). Scrivere una funzione di nome union che, presi come suoi parametri due liste concatenate semplici
l1 ed l2 i cui elementi hanno campo informazione di tipo int, ritorni come risultato l’unione delle due liste, ovvero una
nuova lista contenente tutti gli elementi delle liste l1 e l2 senza ripetizioni. Ad esempio, se l1 = 1 → 2 → 2 → 7
e l2 = 1 → 3 → 5, la chiamata a funzione union(l1, l2) ritorner`a la lista 1 → 2 → 7 → 3 → 5. Gestire in modo
opportuno i casi in cui l1 e/o l2 sono vuote.
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
Nodo* unione(Nodo* l1, Nodo* l2){
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    
    while(l1 != nullptr){
        if(!contains(head, l1->data))
            AddTail(head, tail, l1->data);
        l1 = l1->next;
    }
    while(l2 != nullptr){
        if(!contains(head, l2->data))
            AddTail(head, tail, l2->data);
        l2 = l2->next;
    }
    return head;
}
/*
Nodo* unione(Nodo* l1, Nodo* l2){
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    
    while(l1 != nullptr){
        if(!contains(head, l1->data)){
            Nodo* new_nodo = new Nodo;
            new_nodo->data = l1->data;
            new_nodo->next = nullptr;
            if(head == nullptr){
                head = new_nodo;
                tail = new_nodo;
            } else {
                tail->next = new_nodo;
                tail = new_nodo;
            }
        }
        l1 = l1->next;
    }
    while(l2 != nullptr){
        if(!contains(head, l2->data)){
            Nodo* new_nodo = new Nodo;
            new_nodo->data = l2->data;
            new_nodo->next = nullptr;
            if(head == nullptr){
                head = new_nodo;
                tail = new_nodo;
            } else {
                tail->next = new_nodo;
                tail = new_nodo;
            }
        }
        l2 = l2->next;
    }
    return head;
}
*/