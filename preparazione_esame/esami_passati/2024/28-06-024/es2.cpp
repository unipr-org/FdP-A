/*
Esercizio 2 (9pt).
▶ Scrivere una funzione char* replace spaces(char* str) che prende come parametro una stringa C-style str e
ritorna una nuova stringa in cui tutti gli spazi sono sostituiti con il carattere underscore ’ ’. Ad esempio, se str =
"Hello World", la funzione ritorna la stringa "Hello_World".
▶ Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione replace spaces
passando come parametro la stringa letta, ed infine stampa il risultato ritornato dalla chiamata alla funzione
replace spaces. Nel caso in cui l’utente provi ad inserire una stringa di lunghezza maggiore di 100, la funzione
main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* replace_spaces(char* str){
    int len = strlen(str);
    char* ris = new char[len+1];
    int k = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ')
            ris[k++] = '_';
        else
            ris[k++] = str[i];
    }
    ris[k] = '\0';
    return ris;
}
int main(){
    char str[MAX+1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX +1);
    if(cin.fail())
        return -1;
    char* ris = replace_spaces(str);
    cout << "Stringa modificata: " << ris << endl;
    delete [] ris;
    return 0;
}