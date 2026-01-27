/*Esercizio 3 (15pt). Scrivere una funzione di tipo bool di nome isDescending che, preso come suo parametro una
lista concatenata semplice l i cui elementi hanno campo informazione di tipo int, controlli se la lista `e strettamente
descrescente. Ad esempio, se l = {12,3, -5, -7}, la funzione isDescending ritorna true, se l = {12, 3, 9, 1}, la
funzione isDescending ritorna false. Trattare in modo opportuno anche i casi in cui l sia una lista vuota. Si scriva
inoltre il tipo struttura che modella una lista semplicemente concatenata.*/

#include <iostream>
using namespace std;
struct Nodo{
    int data;
    Nodo* next;
};
bool isDescending(Nodo* l){
    if(l == nullptr || l->next == nullptr)
        return true;
    Nodo* current = l;
    while(current->next != nullptr){
        if(current->data < current->next->data)
            return false;
        current = current->next;
    }
    return true;
}