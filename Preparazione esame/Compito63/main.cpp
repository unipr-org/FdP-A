#include <iostream>
#include <cstring>
using namespace std;

void output(char vet[]){
    for(int i = 0; vet[i] != '\0'; i++) cout << vet[i];
}

void inserisci(char A[], char B[], int x){
    char C[100];

    if(x > 0) {
        for (int i = 0; i < x; i++)
            C[i] = A[i];

        for (int i = x; i < x + strlen(B); i++)
            C[i] = B[i - x];

        for (int i = strlen(C); i < strlen(A) + strlen(B); i++)
            C[i] = A[strlen(C) - strlen(B)];
    } else {
        strcat(B, A);
        strcpy(C, B);
    }

    cout << "C: ";
    output(C);
    cout <<" --> strlen: " << strlen(C) << endl;
}

int main() {
    char A[100], B[100];
    int i = 2;

    cout << "Inserire il valore di A: ";
    cin.getline(A, 99);
    cout << "Inserire il valore di B: ";
    cin.getline(B, 99);

    do{
        cout << "Inserire la posizione i (min 0 max " << strlen(A) << "): ";
        cin >> i;
    } while(i < 0 || i > strlen(A));

    cout << "A: " << A << " --> strlen: " << strlen(A) << endl;
    cout << "B: " << B << " --> strlen: " << strlen(B) <<endl;
    cout << "i: " << i << endl;

    cout << endl;
    inserisci(A, B, i);


    return 0;
}
