/*
Esercizio 2 (9pt).
I Scrivere una funzione noVowels che, preso come 
parametro una stringa C-style str ritorna una nuova 
stringa ottenuta eliminando tutte le vocali contenute 
in str. 
I Scrivere una funzione main che legge da tastiera una
stringa di massimo 50 caratteri, chiama la funzione 
noVowels passando come parametro la stringa letta ed 
inﬁne stampa il risultato ritornato dalla chiamata 
alla funzione noVowels. Nel caso in cui la lunghezza 
della stringa inserita dall’utente sia maggiore di 
50 caratteri, la funzione main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 50
char* noVowels(char* str){
    int len = strlen(str);
    char* res = new char[len+1];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] != 'a' && str[i] != 'e' && 
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' && 
           str[i] != 'O' && str[i] != 'U' )
           res[j++] = str[i];
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX];
    cout <<"Inserisci la stringa: ";
    cin.getline(str, MAX);
    if(cin.fail())
        return -1;
    char* res = noVowels(str);
    cout <<"Il risultato: "<< res;
    delete [] res;
    return 0;
}
