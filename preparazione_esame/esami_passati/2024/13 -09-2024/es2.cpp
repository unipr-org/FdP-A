/*
Esercizio 2 (9pt).
▶ Scrivere una funzione char* remove double(char* str) che prende come parametro una stringa C-style str e
ritorna una nuova stringa in cui ogni carattere raddoppiato `e ridotto a una singola occorrenza. Ad esempio, se str
= "aabbccc", la funzione ritorna la stringa "abc".
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
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        bool inserito = false;
        for(int k = 0; k < j; k++){
            if(k != i && str[i] == res[k])
                inserito = true;
        }
        if(!inserito)
            res[j++] = str[i];
    }
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX + 1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX + 1);
    if(cin.fail())
        return -1;
    char* res = remove_double(str);
    cout << "Stringa risultante: " << res << endl;
    delete[] res;
    return 0;
}
