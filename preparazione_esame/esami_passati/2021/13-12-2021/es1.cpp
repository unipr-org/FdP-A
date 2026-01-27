/*
Esercizio 1 (7pt). Scrivere una funzione di nome coincide che, presi come suoi parametri due array di interi a1 ed
a2 e le loro dimensioni d1 e d2, determina e restituisce come risultato il numero di elementi coincidenti in a1 e a2: un
elemento e1 di a1 ed un elemento e2 di a2 si dicono coincidenti se hanno lo stesso indice e lo stesso valore. Per esempio,
se a1 = {7,6,4,-1,2,5,12} e a2 = {6,7,4,5,2}, la funzione coincide deve ritornare 2.
*/
#include <iostream>
using namespace std;
int coincide(int a1[], int a2[], int d1, int d2){
    int count = 0;
    int min_d = (d1 < d2) ? d1 : d2; 
    for(int i=0; i < min_d; i++)
        if(a1[i] == a2[i])  
            count++;
    return count;
}