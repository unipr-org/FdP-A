#include <iostream>
using namespace std;

struct node{
    int dato;
    node* next;
};

void addTesta(node* &list, int i){
    node* new_node = new node;

    new_node->dato = i;         //(*new_node).dato = 1;
    new_node->next = list;      //(*new_node).next = list;

    list = new_node;
}

void addCoda(node* &list, int i){
    if(list == NULL) addTesta(list, i);
    else{
        node* new_node = new node;

        new_node->dato = i;
        new_node->next = NULL;

        node* cursor = list;
        while(cursor->next != NULL)
            cursor = cursor->next;

        cursor->next = new_node;
    }
}

void output(node* list){
    if(list == NULL)
        cout << "lista vuota";
    else{
        while(list != NULL){
            cout << list->dato << "  ";
            list = list->next;
        }
    }
}

void concatena(node* &list1, node* &list2){
    if(list1 == NULL){
        list1 = list2;
        cout << "\nLista 1 vuota. \n";
    } else if(list2 == NULL) cout << "\nLista 2 vuota. \n";
    else if(list1->next != NULL) concatena(list1->next, list2);
    else list1->next = list2;
}

int main(){
    node* list1 = NULL;
    node* list2 = NULL;

    addCoda(list1, 1);
    addCoda(list1, 2);
    addCoda(list2, 3);
    addCoda(list2, 4);

    cout << "Lista 1: ";
    output(list1);

    cout << "\nLista 2: ";
    output(list2);

    concatena(list1, list2);

    cout << "\nLista 1 e 2 concatenate: ";
    output(list1);

    return 0;
}