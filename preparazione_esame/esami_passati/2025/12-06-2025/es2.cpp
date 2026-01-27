/*
Esercizio 2 (9pt).
▶ Scrivere una funzione removeDigits che prende come parametro una stringa C-style str e ritorna una nuova stringa
in cui tutti i caratteri numerici (da 0 a 9) sono stati rimossi.
▶ Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione removeDigits
passando come primo parametro la stringa letta e infine stampa il risultato ritornato dalla chiamata alla funzione
removeDigits. Nel caso in cui la lunghezza della stringa inserita sia maggiore di 100 caratteri, la funzione main
deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* removeDigits(char* str){
    /* senza la libreria cstring:
    int len = 0;
    while(str[len] != '\0')
        len++;
    */
    int len = strlen(str);
    char* res = new char[len +1];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] < '0' || str[i] > '9')
            res[j++] = str[i];
    }
    res[j] = '\0';
    return res;
}
int main(){
    char str[MAX + 1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX +1);
    if(cin.fail())
        return -1;
    char* res = removeDigits(str);
    cout << "Stringa risultante: " << res << endl;
    delete [] res;
    return 0;
}