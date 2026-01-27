/*
Esercizio 2 (12pt). Scrivere una funzione main che legge da tastiera due stringhe s1 e s2 di lunghezza massima 100
caratteri. La funzione deve:
I stampare a video la stringhe s1 e s2;
I stampare a video un messaggio che indica se s1 `e l’anagramma di s2 (per esempio, la stringa "casata" `e anagramma
di "aaacst").
Utilizzare solamente stringhe C-style.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
int main(){
    char s1[MAX +1];
    char s2[MAX +1];
    cout <<"Inserisci la prima parola: ";
    cin.getline(s1,MAX +1);
    cout <<"Inserisci la seconda parola: ";
    cin.getline(s2,MAX +1);

    cout <<"Prima parola: " << s1 << endl;
    cout <<"Seconda parola: " << s2 << endl;

    bool anagrammi = true;
    if(strlen(s1) != strlen(s2))
        anagrammi = false;
    
    if(anagrammi){
        for(int i = 0; s1[i] != '\0'; i++){
            int count1 = 0;
            int count2 = 0;
            
            for(int j = 0; s1[j] != '\0'; j++){
                if(s1[j] == s1[i]) // Conta in s1 
                    count1++;
                if(s2[j] == s1[i]) // Conta in s2
                    count2++;
            }
            if(count1 != count2){
                anagrammi = false;
                break;
            }
        }
    }
    if(anagrammi)
        cout << "Le stringhe sono anagrammi" << endl;
    else
        cout << "Le stringhe NON sono anagrammi" << endl;
    return 0;
}