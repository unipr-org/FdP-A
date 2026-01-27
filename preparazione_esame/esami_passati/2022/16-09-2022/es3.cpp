/*
Esercizio 3 (15pt). Scrivere una funzione di nome firstEven che, preso come parametro una lista concatenata semplice
lst i cui elementi hanno campo informazione di tipo int ritorni il puntatore al primo elemento pari della lista. Se la lista
non contiene elementi pari, ritornare NULL. Gestire in modo opportuno il caso in cui lst sia vuota.
*/
#include <iostream>
using namespace std;
struct Nodo
{
    int data;
    Nodo *next;
};
Nodo* firstEven(Nodo* lst){
    if(lst == nullptr)
        return nullptr;
    Nodo* current = lst;
    while(current != nullptr){
        if(current->data % 2 == 0)
            return current;
        current = current->next;
    }
    return nullptr;
}
