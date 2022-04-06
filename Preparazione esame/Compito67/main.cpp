#include <iostream>
using namespace std;

struct coppia{
    int num;
    char car;
};

int prodotto(int A[], int n, char B[], int m, coppia coppie[]){
    int cont = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            coppie[cont].num = A[i];
            coppie[cont].car = B[j];
            cont++;
        }
    }
    return cont;
}

void outputStruct(coppia coppie[], int n){
    cout << "PRODOTTO CARTESIANO:\n{";
    for(int i = 0; i < n; i++){
        cout << "(" << coppie[i].num << "," << coppie[i].car << ")";
        if(i+1 != n) cout << ", ";
    }
    cout << "}\n";
}

int main() {
    int n;
    cout << "Inserire dimensione array INT: ";
    cin >> n;
    int A[n];

    int m;
    cout << "Inserire dimensione array CHAR: ";
    cin >> m;
    char B[m];

    for(int i = 0; i < n; i++){
        cout << "Inserire il " << i + 1 << "/" << n << " valore (INT): ";
        cin >> A[i];
    }

    for(int i = 0; i < m; i++){
        cout << "Inserire il " << i + 1 << "/" << m << " valore (CHAR): ";
        cin >> B[i];
    }

    coppia coppie[n*m];

    int c = prodotto(A, n, B, m, coppie);
    outputStruct(coppie, c);

    return 0;
}
