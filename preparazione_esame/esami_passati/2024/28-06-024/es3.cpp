/*
Esercizio 3 (15pt). Scrivere una funzione di nome sum lists che, prese come parametri due liste semplicemente
concatenate lst1 e lst2 i cui elementi hanno campo informazione di tipo int, ritorna una nuova lista i cui elementi
sono la somma degli elementi corrispondenti di lst1 e lst2. Ad esempio, se lst1 = 1 → 2 → 3 e lst2 = 4 → 5 → 6,
la chiamata a funzione sum lists(lst1, lst2) ritorner`a la lista 5 → 7 → 9. Se le liste hanno lunghezze diverse, gli
elementi extra della lista pi`u lunga devono essere copiati nella lista risultante. Gestire in modo opportuno il caso in cui
una delle liste sia vuota. Si scriva inoltre la struttura che modella un nodo di una lista semplicemente concatenata con
campo informazione di tipo int.
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
Nodo* sum_lists(Nodo* lst1, Nodo* lst2){
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    while(lst1 != nullptr && lst2 != nullptr){
        AddTail(head, tail, lst1->data + lst2->data);
        lst1 = lst1->next;
        lst2 = lst2->next;
    }
    while(lst1 != nullptr){
        AddTail(head, tail, lst1->data);
        lst1 = lst1->next;
    }
    while(lst2 != nullptr){
        AddTail(head, tail, lst2->data);
        lst2 = lst2->next;
    }
    return head;
}