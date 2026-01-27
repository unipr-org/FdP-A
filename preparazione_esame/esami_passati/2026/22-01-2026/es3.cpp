/*Esercizio 3 (15pt). Scrivere una funzione merge che, prese come parametri due liste semplicemente concatenate lst1 e
lst2 i cui elementi hanno campo informazione di tipo int, entrambe ordinate in modo crescente, ritorna una nuova lista
che contiene tutti gli elementi di lst1 e lst2 mantenendo l’ordine crescente. Ad esempio, se lst1 = 2 → 4 → 6 e lst2
= 1 → 3 → 5, la funzione deve ritornare la lista lst = 1 → 2 → 3 → 4 → 5 → 6. Gestire in modo opportuno
il caso in cui una o entrambe le liste siano vuote. Si definisca inoltre la struttura che modella un nodo di una lista
semplicemente concatenata con campo informazione di tipo int*/
/*
i casi sono:
1. lst1 e lst2 sono entrambe non vuote
2. lst1 è vuota e lst2 non è vuota
3. lst1 non è vuota e lst2 è vuota
4. entrambe le liste sono vuote
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
Nodo* merge(Nodo* lst1, Nodo* lst2){
    Nodo* head = nullptr;
    Nodo* tail = nullptr;
    // Caso 1: entrambe le liste non sono vuote
    while(lst1 != nullptr && lst2 != nullptr){
        if(lst1->data < lst2->data){
            AddTail(head, tail, lst1->data);
            lst1 = lst1->next;
        }
        else{
            AddTail(head, tail, lst2->data);
            lst2 = lst2->next;
        }
    }
    // Caso 2 e 3: una delle due liste è vuota
    while(lst1 != nullptr){
        AddTail(head, tail, lst1->data);
        lst1 = lst1->next;
    }
    while(lst2 != nullptr){
        AddTail(head, tail, lst2->data);
        lst2 = lst2->next;
    }
    // Caso 4: entrambe le liste sono vuote => head rimane nullptr
    return head;
}

//test con tutti i casi
void printList(Nodo* head){
    if(head == nullptr){
        cout << "Lista vuota";
        return;
    }
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){

    // ===== CASO 1: entrambe le liste NON vuote =====
    Nodo* lst1 = nullptr;
    Nodo* t1 = nullptr;
    AddTail(lst1, t1, 2);
    AddTail(lst1, t1, 4);
    AddTail(lst1, t1, 6);

    Nodo* lst2 = nullptr;
    Nodo* t2 = nullptr;
    AddTail(lst2, t2, 1);
    AddTail(lst2, t2, 3);
    AddTail(lst2, t2, 5);

    Nodo* merged1 = merge(lst1, lst2);

    cout << "Caso 1 - entrambe non vuote: ";
    printList(merged1);
    cout << endl;

    // ===== CASO 2: lst1 vuota, lst2 NON vuota =====
    Nodo* lst3 = nullptr;
    Nodo* lst4 = nullptr;
    Nodo* t4 = nullptr;
    AddTail(lst4, t4, 1);
    AddTail(lst4, t4, 2);
    AddTail(lst4, t4, 3);

    Nodo* merged2 = merge(lst3, lst4);

    cout << "Caso 2 - lst1 vuota: ";
    printList(merged2);
    cout << endl;

    // ===== CASO 3: lst1 NON vuota, lst2 vuota =====
    Nodo* lst5 = nullptr;
    Nodo* t5 = nullptr;
    AddTail(lst5, t5, 4);
    AddTail(lst5, t5, 7);
    AddTail(lst5, t5, 9);

    Nodo* lst6 = nullptr;

    Nodo* merged3 = merge(lst5, lst6);

    cout << "Caso 3 - lst2 vuota: ";
    printList(merged3);
    cout << endl;

    // ===== CASO 4: entrambe vuote =====
    Nodo* merged4 = merge(nullptr, nullptr);

    cout << "Caso 4 - entrambe vuote: ";
    printList(merged4);
    cout << endl;

    return 0;
}