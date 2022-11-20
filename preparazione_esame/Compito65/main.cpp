/*
//  ----- ES 3
#include <iostream>
using namespace std;

struct elem{
    int info;
    elem* punt;
};

void addTesta(elem* &list, int info){
    elem* newNode = new elem;
    newNode->info = info;
    newNode->punt = list;
    list = newNode;
}

void addCoda(elem* &list, int info){
    if(list == NULL) addTesta(list, info);
    else{
        elem* newNode = new elem;
        newNode->info = info;
        newNode->punt = NULL;

        elem* cursor = new elem;
        cursor = list;
        while(cursor->punt != NULL)
            cursor = cursor->punt;
        cursor->punt = newNode;
    }
}

void output(elem* list){
    if(list == NULL) cout << "Non sono presenti elementi nella lista\n";
    else{
        while(list != NULL){
            cout << list->info << " ";
            list = list->punt;
        }
    }
}

int estrai_testa(elem* &list){
    int infoTesta = list->info;
    elem* provvisorio = list;
    list = list->punt;
    delete(provvisorio);
    return infoTesta;
}

int main() {
    elem* Elenco = new elem;
    Elenco = NULL;
    int x, n = 0;
    do{
        cout << "Inserire un valore (<0 per terminare): ";
        cin >> x;

        if(x >= 0){
            addCoda(Elenco, x);
            n++;
        }

    } while(x > 0 && n < 10);

    output(Elenco);


    if(Elenco != NULL){
        cout << "\nestrai_testa: " << estrai_testa(Elenco) << endl;
        output(Elenco);
    }
    else cout << "Imposisbile estrarre testa perche' la lista e' vuota\n";

    return 0;
}
*/


//  ----- ES 1
#include <iostream>
using namespace std;

struct Dati{
    int dato;
    char str[81];
};

void input(Dati vet[], int n){
    for(int i = 0; i < n; i++){
        cout << "Inserire il " << i + 1 << " valore (INT): ";
        cin >> vet[i].dato;
        cin.ignore();
        cout << "Inserire la " << i + 1 << " stringa (STRING): ";
        cin.getline(vet[i].str, 80);
    }
}

int trova(Dati vet[], int n, char r[], int Ris[]){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(vet[i].str, r) < 0){
            Ris[cont] = vet[i].dato;
            cont++;
        }
    }
    return cont;
}

void outputStruct(Dati vet[], int n){
    cout << "STRUCT:\n";
    for(int i = 0; i < n; i++)
        cout << "\tInt: " << vet[i].dato << "\t Str: " << vet[i].str << endl;
}

void outputArray(int vet[], int n){
    cout << "ARRAY: ";
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
}

int main(){
    int n;
    do {
        cout << "Inserire il numero degli elementi dell'array: ";
        cin >> n;
    } while(n < 1);

    Dati A[n];
    int Ris[n];

    input(A, n);
    outputStruct(A, n);

    char r[81];
    cout << "Inserire la stringa r: ";
    cin.getline(r, 80);

    int elemRis = trova(A, n, r, Ris);

    if(elemRis == 0) cout << "Nessuna str precede ''" << r  < < "'' \n";
    else outputArray(Ris, elemRis);

    return 0;
}

















