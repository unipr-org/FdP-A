/*
Scrivere una funzione interleave che, prese come parametri due stringhe C-style str1 e str2 di lunghezza uguale,
ritorna una nuova stringa in cui i caratteri di str1 e str2 sono alternati. Ad esempio, se str1 = "abcd" e str2 =
"1234", la funzione ritorna la stringa "a1b2c3d4".
I Scrivere una funzione main che legge da tastiera due stringhe di massimo 100 caratteri, chiama la funzione interleave
passando come parametri le stringhe lette, ed inﬁne stampa il risultato ritornato dalla chiamata alla funzione
interleave. Nel caso in cui la lunghezza delle stringhe lette sia diversa o l’utente provi ad inserire stringhe di
lunghezza maggiore di 100, la funzione main deve ritornare -1.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char* interleave(char* str1, char* str2){
    int len = strlen(str1);
    char* res = new char[2*len+1];
    int pos1=0;
    int pos2=0;
    int j=0;
    for(int i = 0; i < len*2; i++){
        if(i % 2 == 0)
            res[j++] = str1[pos1++];
        else
            res[j++] = str2[pos2++];
    }
    res[j] = '\0';
    return res;
}
int main() {
    char str1[MAX + 1];
    char str2[MAX + 1];
    cout << "Inserisci la prima stringa: ";
    cin.getline(str1, MAX + 1);
    if (cin.fail()) 
        return -1;
    cout << "Inserisci la seconda stringa: ";
    cin.getline(str2, MAX + 1);
    if (cin.fail()) 
        return -1;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) 
        return -1;
    char* result = interleave(str1, str2);
    cout << "Risultato dell'interleave: " << result << endl;
    delete[] result;
    return 0;
}
