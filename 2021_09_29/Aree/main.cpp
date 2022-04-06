#include <iostream>
#include <cmath>
using namespace std;

/*
Si scriva un programma in C++ che, dato un numero reale x in input, calcoli e stampi con opportuni messaggi:

- l'area del quadrato di lato x

- il perimetro del quadrato di lato x

- la circonferenza del cerchio di raggio x

- l'area del cerchio di raggio x
 */

int main() {
    double num;

    do {
        cout << "Inserire la lunghezza del lato: ";
        cin >> num;
    } while(num < 0);


    cout << "L'area del quadrato di lato " << num << " cm e': " << num * num << endl;
    cout << "Il perimetro del quadrato di lato " << num << " cm e': " << num * 4 << endl;
    cout << "La circonferenza del cerchio di raggio " << num << " cm e': " << num * M_PI * 2 << endl;
    cout << "L'area del cerchio di raggio " << num << " cm e': " << num * num * M_PI << endl;

    return 0;
}
