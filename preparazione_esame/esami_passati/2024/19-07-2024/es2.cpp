/*
Esercizio 2 (9pt).
▶ Scrivere una funzione char* remove double(char* str) che prende come parametro una stringa C-style str e
ritorna una nuova stringa in cui ogni carattere alfabetico raddoppiato `e ridotto a una singola occorrenza. Ad
esempio, se str = "aabbcc", la funzione ritorna la stringa "abc".
▶ Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione remove double
passando come parametro la stringa letta, ed infine stampa il risultato ritornato dalla chiamata alla funzione
remove double. Nel caso in cui l’utente provi ad inserire una stringa di lunghezza maggiore di 100, la funzione
main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* remove_double(char* str){
    int len = strlen(str);
    char* res = new char[len + 1];
    int k = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] != str[i+1])
            res[k++] = str[i];
    
    res[k] = '\0';
    return res;
}

int main() {
    char str[101];
    cout << "Inserisci la stringa: ";
    cin.getline(str, 101);
    if (cin.fail())
        return -1;
    char* res = remove_double(str);
    cout << "Risultato: " << res << endl;
    delete[] res;
    return 0;
}
