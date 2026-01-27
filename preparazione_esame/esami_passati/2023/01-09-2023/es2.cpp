/*
Esercizio 2 (8pt).
I Scrivi una funzione revert che prende come parametro una stringa C-style str e restituisce una nuova stringa che
rappresenta la stringa str invertita. Per esempio, se str `e "hello", la funzione dovr`a ritornare la stringa "olleh".
I Scrivere una funzione main che legge da tastiera una stringa di massimo 50 caratteri, chiama la funzione revert
passando come parametro la stringa letta ed infine stampi la stringa ritornata dalla chiamata a revert. Nel caso in
cui la lunghezza della stringa inserita dall’utente sia maggiore di 50 caratteri, la funzione main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 50
char* revert(char* str){
    int len = strlen(str);
    char* res = new char[len +1];
    int j = 0;
    for(int i = len -1; i >= 0; i--)
        res[j++] = str[i];
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX + 1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX +1);
    if(cin.fail())
        return -1;
    char* res = revert(str);
    cout << "Stringa invertita: " << res << endl;
    delete [] res;
    return 0;
}