#include <iostream>
using namespace std;

int main() {
    int x, y, swap;
    cout << "Inserire il valore di x: ";
    cin >> x;
    cout << "Inserire il valore di y: ";
    cin >> y;

    cout << "Valore di x: " << x << endl;
    cout << "Valore di y: " << y << endl;

    cout << "SWAP!\n";

    swap = x;
    x = y;
    y = swap;

    cout << "Il nuovo valore di x e': " << x << endl;
    cout << "Il nuovo valore di y e': " << y << endl;

    return 0;
}
