#include <iostream>
using namespace std;

bool checkErrorInput(){
    cin.ignore();
    if(cin.fail()){
        cin.clear();
        cin.ignore(5000, '\n');
        return true;
    }
    return false;
}

bool checkValInArray(int *array, int dim, int val){
    for(int i = 0; i < dim; i++)
        if(*(array + i) == val) return true;

    return false;
}

void outputArray(int c[], int len){
    if(len < 1) cout << "Array vuoto!";
    else for(int i = 0; i < len; i++) cout << c[i] << " ";
    cout << endl;
}

int main() {
    cout << "Merenda Saverio Mattia [MAT. 330503]\nTask 8 - 07/12/2021\n";
    cout << "*** Array con elementi condivisi ***\n\n";

    int array[1000];
    int x, cursor = 0, var_allocate = 0;

    do{
        if(cursor > 0){
            if(checkValInArray(array, cursor, x))
                array[cursor - 1] = x;
            else{
                int* p = new int;
                *p = x;
                *(array + cursor - 1) = *p;
                delete p;
                var_allocate++;
            }
        }

        cout << "Inserire il " << cursor + 1 << " numero (num < 0 per terminare): ";
        cin >> x;

        if(!checkErrorInput()) cursor++;

    } while (x >= 0);

    outputArray(array, cursor - 1);
    cout << "Allocate " << var_allocate << " variabili\n";

    return 0;
}

