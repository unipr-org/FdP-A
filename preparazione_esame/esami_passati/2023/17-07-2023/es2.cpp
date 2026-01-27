/*
Esercizio 2 (8pt).
I Scrivere una funzione countUnique che, preso come 
parametro una stringa C-style str ritorna il numero di
caratteri unici presenti nella stringa. Per esempio, 
se la stringa `e "hello", la funzione dovr`a ritornare
3.
I Scrivere una funzione main che legge da tastiera una
stringa di massimo 50 caratteri, chiama la funzione 
countUnique passando come parametro la stringa letta 
ed inﬁne stampa il risultato ritornato dalla chiamata 
alla funzione countUnique. Nel caso in cui la lunghezza
della stringa inserita dall’utente sia maggiore di 50 
caratteri, la funzione main deve ritornare -1.
*/
#include <iostream>
using namespace std;
#define MAX 50
int countUnique(char* str){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        bool found = false;
        for(int j = 0; str[j] != '\0'; j++){
            if(i != j && str[i] == str[j]){
                found = true;
                break;
            }
        }
        if(!found)
            count++;
    }
    return count;
}
int main(){
    char str[MAX + 1];
    cout << "Inserisci la stringa: ";
    cin.getline(str, MAX +1);
    if(cin.fail())
        return -1;
    int res = countUnique(str);
    cout << "Numero di caratteri unici: " << res << endl;
    return 0;
}