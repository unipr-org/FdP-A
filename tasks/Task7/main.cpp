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

void inverti(int a[], int num, int cursor){
    if((num / 2) != cursor){
        int temp;

        temp = a[cursor];
        a[cursor] = a[num - cursor - 1];
        a[num - cursor - 1] = temp;

        inverti(a, num, cursor + 1);
    }
}

void inputArray(int a[], int num){
    for(int i = 0; i < num; i++){
        int valore;

        cout << "Inserire il " << i + 1 << " elemento: ";
        cin >> valore;

        if(checkErrorInput())
            i--;
        else
            a[i] = valore;
    }
}

void outputArray(int c[], int len){
    for(int i = 0; i < len; i++) cout << c[i] << " ";
    cout << endl;
}

int main() {
    cout << "Merenda Saverio Mattia [MAT. 330503]\nTask 7 - 29/11/2021\n\n";
    cout << "*** Inverti ***\n";

    int num;

    do{
        cout << "Inserire il numero degli elementi: ";
        cin >> num;
        checkErrorInput();
    } while (num < 1);

    int a[num];

    inputArray(a, num);

    cout << "\nArray originale: ";
    outputArray(a, num);

    inverti(a, num, 0);

    cout << "Array invertito: ";
    outputArray(a, num);

    return 0;
}
