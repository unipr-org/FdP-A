/*
Esercizio 1 (5pt). Scrivere una funzione ruota che, presi in input un array di interi a e la sua lunghezza, sposti in
avanti di una posizione tutti i valori dell’array. L’ultimo valore dovr`a essere spostato all’inizio dell’array. La funzione main
riportata di seguito
int main () {
int x [4] = {2 , 3 , 4 , 5};
ruota (x , 4);
print (x , 4);
return 0;
}
dovr`a quindi stampare 5 2 3 4. (dove la funzione print utilizzata nella funzione main stampa gli elementi di un array
di interi).
*/
#include <iostream>
using namespace std;
void ruota(int arr[], int len){
    int temp = arr[len-1];
    for(int i = len-1; i > 0; i--)
        arr[i] = arr[i-1];
    arr[0] = temp;
}

void print(int arr[], int len){
    for(int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main () {
int x [4] = {2 , 3 , 4 , 5};
ruota (x , 4);
print (x , 4);
return 0;
}
