#include <iostream>
using namespace std;

void output(char str[]){
    for(int i = 0; str[i] != '\0'; i++) cout << str[i];
    cout << endl;
}

void shiftLeft(char str[], int n){
    char str2[strlen(str)];

    cout << "n: " << n << "\t\t";
    for(int i = 0; i < n; i++) str2[i] = str[i];

    for(int i = n; str[i] != '\0'; i++)
        str2[i] = str[i + 1];


    strcpy(str, str2);
    output(str2);
}

void compatta(char str[]) {
    int l = strlen(str), c = 0;
    char str2[strlen(str)];

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            shiftLeft(str, i);
            i = 0;
        }
    }
}

void es1(){
    char str[] = "Ciao     a   tutti, come       va?  Tutto     bene,   tu?";

    cout << "PRE:\t\t";
    output(str);
    cout << "----------------------\n";

    compatta(str);

    cout << "----------------------\n";
    cout << "POST:\t\t";
    output(str);
}

void outputMat(int mat[][6]){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

bool check(int mat[][6], int x, int y){
    for(int i = y; i < y + 3; i++){
        for(int j = x; j < x + 3; j++){
            if(mat[i][j] != 0)
                return false;
        }
    }
    return true;
}

void checkSotMat(int mat[][6]){
    int c = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(mat[i][j] == 0 && j < 4 && i < 4)
                if(check(mat, j, i)){
                    c++;
                    cout << c << "a sottomatrice: (" << i << "," << j << ")\n";
                }

        }
    }

    cout << "Sono presenti " << c << " sottomatrici\n";
}

void es3(){
    int mat[6][6] = {
            { 3,0,0,2,0,1 },
            { 4,0,0,0,1,0 },
            { 3,0,0,0,0,1 },
            { 3,0,0,0,0,0 },
            { 3,0,9,0,0,0 },
            { 3,0,0,2,0,0 },
    };

    outputMat(mat);

    checkSotMat(mat);

}

int main() {
//    es1();
    es3();
    return 0;
}
