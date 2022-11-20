//es1 compito 74
#include <iostream>
using namespace std;

bool permutazione(int a[], int b[], int n){
    bool test = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == b[j]){
                test = true;
                break;
            }
        }
        if(!test) return false;
        test = false;
    }
    return true;
}

void input (int vet[], int n){
    for(int i = 0; i < n; i++){
        cout << "Inserire il " << i + 1 << " elemento: ";
        cin >> vet[i];
    }
}

void inputMatrix (int vet[][5], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cout << "Inserire il " << j + 1 << " elemento della " << i + 1 << " riga: ";
            cin >> vet[i][j];
        }

    }
}

void output(int vet[], int n){
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";

    cout << endl;
}

void outputMatrix(int vet[][5], int n){
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++)
            cout << vet[i][j] << " ";
        cout << endl;
    }

    cout << endl;
}

void matrix2array(int matrix[][5], int array[], int n){
    for(int i = 0; i < 5; i++)
        array[i] = matrix[n][i];
}

void newOutput(int vet[][5], int n){
    int firstRow[5];
    matrix2array(vet, firstRow, 0);

    output(firstRow, 5);

    for(int i = 0; i < n; i++){
        int newArray[5];
        matrix2array(vet, newArray, i);
        if(!permutazione(firstRow, newArray, 5))
            output(newArray, 5);
    }
}

int main() {
    /*
    int n;
    do{
        cout << "Inserire il numero degli elementi dell'array: ";
        cin >> n;
    } while(n < 1);

    int a[n];
    int b[n];

    input(a, n);
    input(b, n);

    cout << "Output A: ";
    output(a, n);
    cout << "Output B: ";
    output(b, n);

    if(permutazione(a, b, n)) cout << "\nPermutazione: TRUE\n";
    else cout << "\nPermutazione: FALSE\n";
    */

    
    int x;

    do{
        cout << "Inserire il numero delle righe della matrice ?x5: ";
        cin >> x;
    } while(x < 2 && x > 100);

    int matrix [x][5];

    inputMatrix(matrix, x);
    cout << "OUTPUT: \n";
    outputMatrix(matrix, x);
    cout << "NEW OUTPUT: \n";
    newOutput(matrix, x);

    return 0;
}
