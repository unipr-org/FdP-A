#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "Merenda Saverio Mattia [MAT. 330503]\nTask 4 - 09/11/2021\n\n";

    char a[100];
    char b[100];

    cout << "Inserire la prima parola: ";
    cin.getline(a,100);

    while(strcmp(a,"$") != 0){
        cout << "Inserire la seconda parola: ";
        cin.getline(b,100);

        int lenA = strlen(a);
        int lenB = strlen(b);
        bool verifyPrefix = true;
        bool verifySufix = true;

        if (lenA < lenB){
            for (int i = 0; i < lenA; i++){
                if(a[i] == b[i]) verifyPrefix = true;
                else{
                    verifyPrefix = false;
                    break;
                }
            }
            if(verifyPrefix) cout << "La parola " << a << " e' prefisso di " << b << endl;

            for (int i = lenB - 1; i >= lenB - lenA; i--){
                if(a[i - lenB + lenA] == b[i]) verifySufix = true;
                else{
                    verifySufix = false;
                    break;
                }
            }
            if(verifySufix) cout << "La parola " << a << " e' suffisso di " << b << endl;

        } else if (lenA > lenB){

            for (int i = 0; i < lenB; i++){
                if(a[i] == b[i]) verifyPrefix = true;
                else{
                    verifyPrefix = false;
                    break;
                }
            }
            if(verifyPrefix) cout << "La parola " << b << " e' prefisso di " << a << endl;

            for (int i = lenA - 1; i >= lenA - lenB; i--){
                if(a[i] == b[i - lenA + lenB]) verifySufix = true;
                else{
                    verifySufix = false;
                    break;
                }
            }
            if(verifySufix) cout << "La parola " << b << " e' suffisso di " << a << endl;

        } else if ( lenA == lenB){
            if(strcmp(a,b) == 0) {
                cout << "Le due parole sono uguali" << endl;

                cout << "Reverse: ";
                for (int i = strlen(a); i > 0; i--){
                    cout << a[i - 1];
                }
                cout << endl;

            }
        }

        cout << "\nInserire la prima parola: ";
        cin.getline(a,100);
    }

    cout << "Addio!" << endl;

    return 0;
}
