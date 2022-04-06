#include <iostream>
using namespace std;

int coincide(int a1[], int a2[], int d1, int d2){
    int coinc = 0, n;

    if(d1 <= d2) n = d1;
    else n = d2;

    for(int i = 0; i < n; i++)
        if(a1[i] == a2[i])
            coinc++;

    return coinc;
}

void inputArrayInt(int vet[], int n){
    for(int i = 0; i < n; i++){
        cout << "Inserire il " << i + 1 << " elemento (INT): ";
        cin >> vet[i];
    }
}

void outputArrayInt(int vet[], int n, char c[]){
    cout << endl << c << ": ";
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
}

void es1(){
    int d1, d2;
    cout << "Dimensione primo array (INT > 0): ";
    cin >> d1;
    cout << "Dimensione secondo array (INT > 0): ";
    cin >> d2;

    int a1[d1], a2[d2];
    inputArrayInt(a1, d1);
    inputArrayInt(a2, d2);

    outputArrayInt(a1, d1, "A1");
    outputArrayInt(a2, d2, "A2");

    cout << "\nCOINCIDE return: " << coincide(a1, a2, d1, d2) << endl;
}

// -------------------------------- fine ES 1
void outputString(char str[]){
    for(int i = 0; str[i] != '\0'; i++) cout << str[i];
}

bool verifyPalindroma(char str[]){
    int n = strlen(str) / 2;
    for(int i = 0; i < n; i++)
        if(str[i] != str[strlen(str) - i - 1])
            return false;
    return true;
}

void es2(){
    char str[31];

    cout << "Inserire valore (STRING < 31): ";
    cin.getline(str, 30);

    cout << "Str: ";
    outputString(str);

    cout << "\nPalindroma? " << verifyPalindroma(str) << endl;
}
// -------------------------------- fine ES 2
struct lista{
    int info;
    lista* next;
};

void addTesta(lista* &list, int info){
    lista* newlist = new lista;
    newlist->info = info;
    newlist->next = list;
    list = newlist;
}

void addCoda(lista* &list, int info){
    if(list == NULL) addTesta(list, info);
    else{

        lista* newList = new lista;
        newList->info = info;
        newList->next = NULL;

        lista* cursor = new lista;
        cursor = list;
        while(cursor->next != NULL)
            cursor = cursor->next;

        cursor->next = newList;
    }
}

void outputList(lista* list){
    if(list == NULL) cout << "Lista vuota\n";
    else{
        while(list != NULL){
            cout << list->info << " ";
            list = list->next;
        }
    }
}

void inputList(lista* &list){
    int info;
    cout << endl;
    do{
        cout << "\tInserire valore (INT, < 0 per terminare): ";
        cin >> info;
        if(info >= 0) addCoda(list, info);
    } while(info >= 0);
}

void concat(lista* &l1, lista* l2){
    if(l1 == NULL) l1 = l2;
    else if(l2 == NULL) return;
    else{
        lista* cursor = new lista;
        cursor = l1;

        while(cursor->next != NULL)
            cursor = cursor->next;
        cursor->next = l2;
    }
}

void concatRicorsiva(lista* &l1, lista* l2){
    if(l1 == NULL) l1 = l2;
    else if(l2 == NULL) return;
    else{
        lista* cursor = new lista;
        cursor = l1;

        if(cursor->next != NULL)
            concatRicorsiva(cursor->next, l2);
        if(cursor->next == NULL) cursor->next = l2;
    }
}

void es3(){
    lista* list1 = NULL;
    lista* list2 = NULL;

    cout << "\nInput LISTA 1 ";
    inputList(list1);
    cout << "\nInput LISTA 2 ";
    inputList(list2);

    cout << "\nOutput LISTA 1: ";
    outputList(list1);
    cout << "\nOutput LISTA 2: ";
    outputList(list2);

    //concat(list1, list2);
    concatRicorsiva(list1, list2);
    cout << "\nOutput CONCAT: ";
    outputList(list1);

}

void es4(){
    char str[31];
    bool check = true;
    cout << "Inserire la parola: ";
    cin.getline(str, 31);
    cout << "str: " << str << ", lunghezza: " << strlen(str) << endl;

    for(int i = 0; i < strlen(str) / 2; i++){
        if(str[i] != str[strlen(str) - i - 1]){
            check = false;
            break;
        }
    }
    if(check) cout << "SI palindroma" << endl;
    else cout << "NO palindroma" << endl;


}
// -------------------------------- fine ES 3
int main() {
    //es1();
    //es2();
    //es3();
    es4();
    return 0;
}
