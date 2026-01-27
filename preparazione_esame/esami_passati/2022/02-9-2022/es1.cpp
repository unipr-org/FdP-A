/*
Esercizio 1 (5pt). Scrivere una funzione di nome revert con tipo di ritorno void che, preso come parametro una stringa
C-style str, inverte l’ordine dei caratteri della stringa.
Esempio:
char s [5] = " hello " ;
revert ( s );
cout << s ; // stampa " olleh "
Non `e consentito usare la libreria cstring.
*/
#include <iostream>
using namespace std;
void revert(char str[]){
    int len =0;
    while(str[len] != '\0')
        len++;
   for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
   }
}