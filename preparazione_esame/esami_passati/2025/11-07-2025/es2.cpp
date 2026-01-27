/*
Esercizio 2 (9pt).
▶ Scrivere una funzione addSpaceAfterDots che prende come parametro una stringa C-style str e ritorna una nuova
stringa in cui, dopo ogni punto ’.’, `e aggiunto uno spazio, a meno che il punto non sia gi`a seguito da uno spazio.
▶ Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione addSpaceAfterDots
passando come primo parametro la stringa letta e infine stampa il risultato ritornato dalla chiamata alla funzione
addSpaceAfterDots. Nel caso in cui la lunghezza della stringa inserita sia maggiore di 100 caratteri, la funzione
main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* addSpaceAfterDots(char* str){
    int len = strlen(str);
    int j = 0;
    char* res = new char[2*len + 1];
    for(int i = 0; str[i] != '\0'; i++){
        res[j++] = str[i];
        if(str[i] == '.' && str[i+1] != ' ')
            res[j++] = ' ';
    }
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX+1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX+1);
    if(cin.fail())
        return -1;
    char* res = addSpaceAfterDots(str);
    cout << "La stringa risultante e': " << res << endl;
    delete [] res;
    return 0;
}