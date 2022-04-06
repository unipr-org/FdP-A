#include <iostream>
#include <cstring>
using namespace std;

struct s1{
    char nome[81];
    int matricola;
};

struct s2{
    int matricola;
    int voto;
};

struct s3{
    char nome[81];
    int voto;
};

void copia(char x[], char y[]){
    for(int i = 0; y[i] != '\0'; i++)
        x[i] = y[i];
}

int join(s1 A[], s2 B[], int n, int m, s3 R[]){
    int contR = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(A[i].matricola == B[j].matricola){
                copia(R[contR].nome, A[i].nome);
                R[contR].voto = B[j].voto;
                contR++;
                cout << "A[i].nome: " << A[i].nome << " --- R[contR].nome " << R[contR].nome << " --- contR++: " << contR++ << endl;
                cout << "B[i].voto: " << B[i].voto << " --- R[contR].voto " << R[contR].voto << endl << endl;
            }
        }

    }

    return contR;
}

void outputS1(s1 vet[], int n){
    for(int i = 0; i < n; i++)
        cout << "Nome: " << vet[i].nome << ", Matricola: " << vet[i].matricola << endl;
    cout << endl;
}

void outputS2(s2 vet[], int n){
    for(int i = 0; i < n; i++)
        cout << "Matricola: " << vet[i].matricola << ", Voto: " << vet[i].voto << endl;
    cout << endl;
}

void outputS3(s3 vet[], int n){
    for(int i = 0; i < n; i+=2)
        cout << "Nome: " << vet[i].nome << ", Voto: " << vet[i].voto << endl;
    cout << endl;
}

int main() {

    s1 A[4] = {
            {
                    "persona1", 123
            },
            {
                    "persona2", 456
            },
            {
                    "persona3", 789
            },
            {
                    "persona4", 666
            }
    };
    s2 B[4] = {
            {
                789, 27
            },
            {
                135, 30
            },
            {
                123, 22
            },
            {
                666, 30
            }
    };
    s3 R[5];
    int n = 4, m = 4;

    outputS1(A, n);
    outputS2(B, m);
    int c = join(A, B, n, m, R);

    cout << endl << endl;
    outputS3(R, c);
    cout << endl << c/2;

    return 0;
}
