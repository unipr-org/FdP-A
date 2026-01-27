/*
Esercizio 3 (15pt). Scrivere una funzione di tipo void di nome concat che, presi come suoi parametri due liste
concatenate semplici l1 ed l2 i cui elementi hanno campo informazione di tipo int, concateni la lista l2 alla lista l1. Ad
esempio, se l1 = {1,7} e l2 = {5,9,12}, dopo la chiamata alla funzione concat passando come parametri l1 ed l2, la
lista l1 diventa {1,7,5,9,12}. Trattare in modo opportuno anche i casi in cui l1 e/o l2 siano liste vuote.
*/
#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
void concat(Nodo* &l1, Nodo* l2){
    if(l1 == nullptr)
        l1 = l2;
    else{
        Nodo* current = l1;
        while(current->next != nullptr)
            current = current->next;
        current->next = l2;
    }
}