#include <iostream>
using namespace std;

// a -> 97
// z -> 122

int main() {
    char a,b,c;

    cout << "Inserire il primo carattere: ";
    cin >> a;

    cout << "Inserire il secondo carattere: ";
    cin >> b;

    cout << "Inserire il terzo carattere: ";
    cin >> c;

    int numA = (int) a;
    int numB = (int) b;
    int numC = (int) c;

    cout << "Cifrario di Cesare: ";

    if(numA < 97 || numA > 122) cout << "? ";
    else if(numA < 120) cout << char (a + 3) << " ";
    else cout << char (a + 3 - 26) << " ";

    if(numB < 97 || numB > 122) cout << "? ";
    else if(numB < 120) cout << char (b + 3) << " ";
    else cout << char (b + 3 - 26) << " ";

    if(numC < 97 || numC > 122) cout << "? ";
    else if(numC < 120) cout << char (c + 3) << " ";
    else cout << char (c + 3 - 26) << " ";


    return 0;
}
