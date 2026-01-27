/*
Esercizio 1 (6pt). Scrivere una funzione int find longest word 
length(char* sentence) che prende come parametro
una stringa C-style sentence e ritorna la lunghezza della parola 
pi`u lunga in sentence. Ad esempio, se sentence = "The
quick brown fox jumps over the lazy dog", la funzione ritorner`a 5.
*/
#include <iostream>
#include <cstring>
using namespace std;
int find_longest_word_length(char* sentence){
    int len_max = 0;
    int len = strlen(sentence);
    int len_par = 0;
    for(int i = 0; i < len; i++){
        if(sentence[i] != ' ')
            len_par++;
        else{
            if(len_par > len_max)
                len_max = len_par;
            len_par = 0;
        }
    }
    // Controllo finale per l'ultima parola
    if(len_par > len_max)
        len_max = len_par;
    return len_max;
}