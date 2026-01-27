/*
Esercizio 2 (9pt). Sia intv il tipo di una struttura 
dati struct formata da due campi di tipo intero inf 
e sup che rappresentano rispettivamente il limite 
inferiore e quello superiore di un intervallo chiuso 
[inf, sup]. Si implementi una funzione add che accetta
come parametri una struttura i di tipo intv e un 
intero x e aggiunge, se possibile, l’elemento x 
all’intervallo i, modificando i stesso. Tale 
operazione `e possibile quando:
(i) x `e contenuto 
nell’intervallo i (e in questo caso i rimane invariato)
oppure
(ii) quando x coincide con il predecessore di 
inf o con il successore di sup dell’intervallo i (in 
questo caso i viene modificato aggiornando 
rispettivamente inf o sup). In questi casi la funzione 
deve ritornare true altrimenti ritorna false.
Per esempio, se i = [3, 7] e x = 8 il nuovo intervallo
sar`a i = [3, 8] e la funzione ritorna true , mentre 
se x = 9 l’intervallo rimane invariato e la funzione 
ritorna false
*/
#include <iostream>
using namespace std;
struct intv{
    int inf;
    int sup;
};
bool add(intv& i, int x){
    if(x >= i.inf && x <= i.sup)
        return true;
    else if(x == i.inf - 1){
        i.inf = x;
        return true;
    }
    else if(x == i.sup + 1){
        i.sup = x;
        return true;
    }
    else
        return false;
}
int main(){
    intv intervallo;
    cout << "Inf: ";
    cin >> intervallo.inf;
    cout << "Sup: ";
    cin >> intervallo.sup;
    int x;
    cout << "Inserisci l'elemento da aggiungere: ";
    cin >> x;
    bool risultato = add(intervallo, x);
    if(risultato)
        cout << "Elemento aggiunto con successo. Nuovo intervallo: [" << intervallo.inf << ", " << intervallo.sup << "]" << endl;
    else
        cout << "Elemento non aggiunto. Intervallo rimane invariato: [" << intervallo.inf << ", " << intervallo.sup << "]" << endl;
    return 0;
}