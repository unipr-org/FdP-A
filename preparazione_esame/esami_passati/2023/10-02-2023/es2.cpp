/*
Esercizio 2 (9pt).
I Scrivere una funzione trim che, presi come parametri una stringa C-style str e un carattere c, ritorna una nuova
stringa ottenuta eliminando tutte le occorrenze del carattere c.
I Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione trim
passando come parametro la stringa letta e il carattere ’a’, ed inﬁne stampa il risultato ritornato dalla chiamata
alla funzione trim.
*/
#include <iostream>
using namespace std;
#define MAX 100
char* trim(char* str, char c){
    int len = 0;
    while(str[len] != '\0')
        len++;
    char* res = new char[len +1];
    int j = 0;
    for(int i = 0; i < len; i++)
        if(str[i] != c)
            res[j++] = str[i];
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX+1];
    cout <<"Inserisci la stringa: ";
    cin.getline(str, MAX+1);
    if(cin.fail())
        return -1;
    char* res = trim(str, 'a');
    cout << "Il ris: " << res;
    delete [] res;
    return 0;
}