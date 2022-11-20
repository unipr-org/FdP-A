#include <iostream>
using namespace std;

struct d {
    int num;
    char lett;
};

void inputVet(d vet[], int n){
    for(int i = 0; i < n; i++){
        cout << "Inserire il " << i + 1 << " valore (INT): ";
        cin >> vet[i].num;
        cout << "Inserire il " << i + 1 << " valore (CHAR): ";
        cin >> vet[i].lett;
    }
}

bool confronta (d vet1[], d vet2[], int n, int k){
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cout << "(" << i << ", " << j << ")\t";
            cout << vet1[i].num << "" << vet1[i].lett << " " << vet2[j].num << "" << vet2[j].lett;
            cout << "\tUguali: ";

            if(vet1[i].num == vet2[j].num && vet1[i].lett == vet2[j].lett){
                c++;
                cout << "si" << endl;
            } else
                cout << "no" << endl;

        }
    }

    cout << "c: " << c << endl;
    cout << "k: " << k << endl;

    if(c == k) return true;
    else return false;

}



int main() {
    int n;
    do{
        cout << "Inserire dimensione array (INT > 0): ";
        cin >> n;
    } while (n < 1);

    d vet1[n];
    d vet2[n];

    inputVet(vet1, n);
    inputVet(vet2, n);

    int k;
    do{
        cout << "Inserire valore k (INT < " << n + 1 << "): ";
        cin >> k;
    } while (k > n or k < 1);

    bool gg = confronta(vet1, vet2, n, k);
    cout << "function CONFRONTA: " << gg << endl;

    return 0;
}
