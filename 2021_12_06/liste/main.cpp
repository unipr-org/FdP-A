#include <iostream>
using namespace std;

/*
    node* list = NULL;

    node* nlist;
    (*nlist).dato = 11;
    (*nlist).next = list;

    node* n1list;
    (*nlist).dato = 42;
    (*nlist).next = nlist;
*/

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

void deleteTesta(node* &list){
    if(list == NULL) cout << "Lista vuota\n";
    else{
        node* new_list = list->next;
        delete list;
        list = new_list;
    }
}

void deleteCoda(node* &list){
    if(list == NULL)
        cout << "Lista vuota\n";
    else if(list->next == NULL)
        deleteTesta(list);
    else{
        node* cursor = list;
        node* prev;
        while(cursor->next != NULL) {
            prev = cursor;
            cursor = cursor->next;
        }
        delete cursor;
        prev->next = NULL;
    }
}

void output(node* list){
    if(list == NULL)
        cout << "lista vuota\n";
    else{
        while(list != NULL){
            cout << list->dato << "  ";
            list = list->next;
        }
    }
}

void input(node* &listTesta, node* &listCoda){
    for(int i = 0; i < 10; i++){
        addTesta(listTesta, i + 1);
        addCoda(listCoda, i + 1);
    }
}

void remove(node* &list, int i){
    if(list == NULL)
        cout << "lista vuota\n";
    else if(list->dato == i)
        deleteTesta(list);
    else{
        node* cursor = list;
        node* prev;
        while(cursor != NULL && cursor->dato != i) {
            prev = cursor;
            cursor = cursor->next;
        }
        if(cursor == NULL) cout << "Elemento non trovato\n";
        else{
            prev->next = cursor->next;
            delete cursor;
        }
    }
}

int main() {
    node* listTesta = NULL;
    node* listCoda = NULL;

    input(listTesta, listCoda);

    cout << "\nInput testa: ";
    output(listTesta);


    cout << "\nInput coda: ";
    output(listCoda);


    cout << "\nElimina ultimo elemento: ";
    deleteCoda(listCoda);
    output(listCoda);


    cout << "\nElimina primo elemento: ";
    deleteTesta(listCoda);
    output(listCoda);

    cout << "\nElimina elemento in input: ";
    remove(listCoda, 7);
    output(listCoda);

    return 0;
}
