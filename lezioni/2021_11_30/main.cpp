#include <iostream>
using namespace std;

void raddoppia(int* &array, int &dim){
    int* cpy = new int[dim * 2];
    for(int i = 0; i < dim; i++)
        cpy[i] = array[i];
    array = cpy;
    dim*=2;
    cout << "Raddoppiato!" << endl;
}

int main() {
    int dim = 5;
    int* array = new int[dim];
    int num;
    int cursor = 0;

    do{
        cout << "Inserisci valore: ";
        cin >> num;

        if(num >= 0){
            if(cursor >= dim)
                raddoppia(array, dim);
            array[cursor] = num;
            cursor ++;
        }
    } while(num >= 0);

    for(int i = 0; i < cursor; i++)
        cout << array[i] << " \n";


    return 0;
}
