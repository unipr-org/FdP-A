#include <iostream>
using namespace std;

// Data l’equazione ax + b = 0, scrivere un programma in C++ per determinare il valore di x,
// se esiste, che risolve l'equazione (a e b devono essere inseriti dall'utente).

int main() {
    double a,b, ris;

    cout << "Inserire il valore di a: ";
    cin >> a;

    cout << "Inserire il valore di b: ";
    cin >> b;

    if(a == 0) cout << "x non esiste perche' a = 0" <<endl;
    else{

        if(b == 0) cout << "Equazione: " << a <<"x = 0" << endl;
        else if(b < 0) cout << "Equazione: " << a <<"x - " << b*-1 << " = 0" << endl;
        else cout << "Equazione: " << a <<"x + " << b << " = 0" << endl;

        ris = ((-1) * b) / a;

        if(ris == -0) ris = 0;

        cout << "x e' uguale a " << ris << endl;
    }

    return 0;
}
