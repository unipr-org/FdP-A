/*
Esercizio 2 (8pt). Scrivere una funzione main che legge una parola (di massimo 30 caratteri) inserita da tastiera. Il
programma deve:
I visualizzare la parola inserita;
I veriﬁcare se la parola `e palindroma. Una parola `e palindroma se pu`o essere letta indiﬀerentemente da sinistra verso
destra e da destra verso sinistra. Ad esempio, le seguenti parole sono palindrome: otto, madam, a.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 30
int main(){
    char str[MAX+1];
    cout << "Inserisci la parola: ";
    cin.getline(str, MAX+1);
    if(cin.fail())
        return -1;
    cout << "Hai inserito: "<< str << endl;
    int len = strlen(str);
    bool palindroma = true;
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len-1-i]){
            palindroma = false;
            break;
        }
    }
    if(palindroma)
        cout <<"La parola e' palindroma";
    else
        cout <<"la parola non e' palindroma";
    return 0;
}