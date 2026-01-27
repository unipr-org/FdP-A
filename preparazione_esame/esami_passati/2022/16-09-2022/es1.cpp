/*
Esercizio 1 (6pt). Scrivere una funzione di nome palindroma con tipo di ritorno bool che, preso come parametro una
stringa C-style str, controlla se str `e palindroma. Una parola `e palindroma se pu`o essere letta indiﬀerentemente da
sinistra verso destra e da destra verso sinistra. Non `e consentito usare la libreria cstring.
*/
#include <iostream>
using namespace std;
bool palindroma(char str[]){
    int len = 0;
    while(str[len] != '\0')
        len++;
    for(int i = 0; i < len/2; i++)
        if(str[i] != str[len-1-i])
            return false;
    return true;
}