/*
Esercizio 2 (9pt).
I Scrivere una funzione replace che, presi come 
parametri una stringa C-style str, un carattere 
target e un carattere replacement, ritorna una nuova 
stringa corrispondente a str in cui tutte le 
occorrenze del carattere target sono sostituite dal 
carattere replacement.
I Scrivere una funzione main che legge da tastiera 
una stringa di massimo 100 caratteri, chiama la 
funzione replace passando come parametri la stringa 
letta, il carattere ’a’ e il carattere ’e’, ed inﬁne 
stampa il risultato ritornato dalla chiamata alla 
funzione replace. Nel caso in cui la lunghezza della 
stringa letta sia maggiore di 100 caratteri, la 
funzione main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* replace(char* str, char target, char rep){
    int len = strlen(str);
    char* res = new char[len+1];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == target)
            res[j++] = rep;
        else
            res[j++] = str[i];
    }
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX +1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX+1);
    if(cin.fail())
        return -1;
    char* res = replace(str, 'a', 'e');
    cout << "il risulatao: "<< res;
    delete [] res;
    return 0;
}