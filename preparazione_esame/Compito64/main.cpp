#include <iostream>
#include <cstring>
using namespace std;

void output(char vet[]){
    for(int i = 0; vet[i] != '\0'; i++) cout << vet[i];
    cout << endl;
}

bool confronta(char a[], char b[]){
    int check[100], c = 0;

    for(int i = 0; i < strlen(a); i++){
        if(a[i] == '*'){
            check[c] = i;
            c++;
        }
    }

    for(int i = 0; i < c; i++)
        b[check[i]] = '*';

    output(b);

    if(strcmp(a, b) == 0) return true;
    else return false;
}

int main() {
    char a[100], b[100];

    cout << "Inserire il valore di A: ";
    cin.getline(a, 99);
    cout << "Inserire il valore di B: ";
    cin.getline(b, 99);

    output(a);
    output(b);

    if(confronta(a, b)) cout << "Le stringhe sono uguali\n";
    else cout << "Le stringhe non sono uguali\n";


    return 0;
}
