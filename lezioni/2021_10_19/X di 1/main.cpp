#include <iostream>
using namespace std;

/*
    Si scriva un programma in C++ che, dato in input un intero n, stampi a video una matrice di dimensione n tale che venga riempita con 1 sulla diagonale che va dall'angolo
    in alto a sinistra a quello in basso a destra e sulla diagonale che va dall'angolo in alto a destra a quello in basso a sinistra, 0 nelle altre posizioni.

Esempio per n = 5

1 0 0 0 1

0 1 0 1 0

0 0 1 0 0

0 1 0 1 0

1 0 0 0 1

Esempio per n = 3

1 0 1

0 1 0

1 0 1

Il programma deve controllare che l'intero n inserito dall’utente sia > 0 e continua a chiedere l’input finché non inserisce un intero > 0.
 */

int main() {
    int x;

    do{
        cout << "Inserire un numero: ";
        cin >> x;
    } while (x < 1);

    for(int i = 0; i < x; i++){

        for(int j = 0; j < x; j++){
            if(i == j || (i + j) == (x-1))
                cout << "1\t";
            else
                cout << "0\t";
        }
        cout << endl;
    }

    return 0;
}
