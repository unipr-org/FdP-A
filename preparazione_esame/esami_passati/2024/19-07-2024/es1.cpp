/*
Esercizio 1 (6pt). Scrivere una funzione reverse string che prende 
come parametro una stringa C-style str e inverte la stringa. 
Ad esempio, se str = "hello", la funzione modificher`a str in "olleh".
*/
#include <iostream>
using namespace std;
void reverse(char str[]){
    int len = 0;
    while(str[len] != '\0')
        len++;
    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}