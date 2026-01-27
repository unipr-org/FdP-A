/*
Esercizio 2 (9pt).
▶ Scrivere una funzione remove che, presi come 
parametri due stringhe C-style str1 e str2 ritorna 
una nuova stringa corrispondente a str1 senza i 
caratteri che si trovano in str2. Per esempio, se 
str1 = "abcdef" e str2 ="ac", la funzione dovr`a 
ritornare la stringa "bdef".
▶ Scrivere una funzione main che legge da tastiera 
una stringa di massimo 100 caratteri, chiama la 
funzione remove passando come primo parametro la 
stringa letta e come secondo parametro la stringa "ac"
e infine stampa il risultato ritornato dalla chiamata 
alla funzione remove. Nel caso in cui la lunghezza 
della stringa inserita sia maggiore di 100
caratteri, la funzione main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* remove(char* str1, char* str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* res = new char[len1+1];
    int k = 0;
    for(int i = 0; i < len1; i++){
        bool found = false;
        for(int j = 0; j < len2; j++)
            if(str1[i] == str2[j])
                found = true;
        if(!found)
            res[k++] = str1[i];
    }
    res[k] = '\0';
    return res;
}
int main(){
    char str[MAX+1];
    cout <<"Inserisci la stringa: ";
    cin.getline(str, MAX+1);
    if(cin.fail())
        return -1;
    char str2 []= "ac";
    char* res = remove(str, str2);
    cout <<"Il risu: "<< res;
    delete [] res;
    return 0;
}