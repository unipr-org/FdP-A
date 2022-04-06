#include <iostream>
using namespace std;

struct P{
    int c1;
    char c2[81];
};

int restringi(P r1[], int n, int a1[], int m, P s[]){
    int dimS = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(r1[i].c1 == a1[j]){
                s[dimS] = r1[i];
                dimS++;
            }
        }
    }
    return dimS;
}

void inputStruct(P r1[], int n){
    cout << "INPUT STRUCT:\n";
    for(int i = 0; i < n; i++){
        cout << "\tInserire valore del " << i + 1 << " INT: ";
        cin >> r1[i].c1;
        cin.ignore();
        cout << "\tInserire valore della " << i + 1 << " STRING: ";
        cin.getline(r1[i].c2, 81);

    }
}

void inputArray(int a1[], int n){
    cout << "INPUT ARRAY:\n";
    for(int i = 0; i < n; i++){
        cout << "\tInserire valore del " << i + 1 << " INT: ";
        cin >> a1[i];
    }
}

void outputStruct(P pippo[], int n){
    for(int i = 0; i < n; i++)
        cout << "\t" << pippo[i].c1 << " " << pippo[i].c2 << endl;
    cout << endl;
}

void outputArray(int vet[], int n){
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
    cout << endl;
}

void es1(){
    int n, m;

    //      Input struct
    do{
        cout << "Inserire il numero di elementi di R1 (INT > 0): ";
        cin >> n;
    } while (n < 1);
    P R1[n], S[n];
    inputStruct(R1, n);

    //      Input array
    do{
        cout << "Inserire il numero di elementi di A1 (INT > 0): ";
        cin >> m;
    } while (m < 1);
    int A1[m];
    inputArray(A1, m);

    //      Output
    cout << "R1:\n";
    outputStruct(R1, n);
    cout << "A1: ";
    outputArray(A1, m);

    //      function restringi
    int dimS = restringi(R1, n, A1, m, S);
    cout << "Dimensione S: " << dimS << endl;
    if(dimS > 0){
        cout << "S:\n";
        outputStruct(S, dimS);
    }
}
//  ------------------------------------------------------------------

struct node{
    int data;
    node* next;
};

void addTesta(node* &list, int data){
    node* new_node = new node;
    new_node->data = data;
    new_node->next = list;
    list = new_node;
}

void addCoda(node* &list, int data){
    if(list == NULL) addTesta(list, data);
    else{
        node* cursor = list;
        while(cursor->next != NULL)
            cursor = cursor->next;

        node* new_node = new node;
        new_node->data = data;
        new_node->next = NULL;

        cursor->next = new_node;
    }
}

void outputList(node* list){
    if(list == NULL) cout << "Lista vuota\n";
    else{
        node* cursor = list;
        while(cursor != NULL) {
            cout << cursor->data << " ";
            cursor = cursor->next;
        }
    }
    cout << endl;
}

void inputList(node* &list, int data){
    for(int i = data; i < 6 + data; i++)
        addCoda(list, i);
}

bool self_loop(node* list, int data){
    if(list == NULL) cout << "Lista vuota\n";
    else{
        node* cursor = list;
        while(cursor != NULL) {
            if(cursor->data == data)
                return false;
            cursor = cursor->next;
        }
    }
    return true;
}

void es3(){
    int DIM = 10;
    node* array[DIM];

    for(int i = 0; i < DIM; i++){
        array[i] = NULL;
        inputList(array[i], i);
    }

    cout << "\nOutput\n";
    for(int i = 0; i < DIM; i++){
        cout << "\tLista " << i + 1 << ": ";
        outputList(array[i]);
    }


    cout << "\nself_loop\n";
    for(int i = 0; i < DIM; i++)
        cout << "\tLista " << i + 1 << ": " << self_loop(array[i], i) << endl;

}

int main() {
//    es1();
    es3();

    return 0;
}
