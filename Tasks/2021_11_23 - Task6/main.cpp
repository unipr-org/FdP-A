#include <iostream>
#include <cstring>
using namespace std;
#define DIM 101

bool separa(char s[], char SAlpha[], char SNum[], int& cAlpha, int& cNum){
    if(strlen(s) == 0) return false;
    else{
        for(int i = 0; i < strlen(s); i++){

            int x = int (s[i]);

            if(x > 47 && x < 58){
                SNum[cNum] = s[i];
                cNum++;
            }

            if(x > 64 && x < 123){
                SAlpha[cAlpha] = s[i];
                cAlpha++;
            }
        }

        return true;
    }

}

void output(char c[], int len){
    for(int i = 0; i < len; i++) cout << c[i] << " ";
    cout << endl;
}

int main() {
    cout << "Merenda Saverio Mattia [MAT. 330503]\nTask 6 - 23/11/2021\n\n";
    cout << "*** Separa ***\n";

    char str[DIM];
    char SAlpha[DIM];
    char SNum[DIM];
    int cAlpha = 0, cNum = 0;

    cout << "\nInserire una stringa: ";
    cin.getline(str, 101);

    if(cin.fail()){
        cin.clear();
        cin.ignore(5000, '\n');
    }

    if(separa(str, SAlpha, SNum, cAlpha, cNum)){

        if(cAlpha != 0){
            cout << "Caratteri alfabetici: ";
            output(SAlpha, cAlpha);
        }

        if(cNum != 0){
            cout << "Caratteri numerici: ";
            output(SNum, cNum);
        }

        if(cNum == 0 && cAlpha == 0) cout << "Hai inserito solo caratteri speciali :(\n";

    } else cout << "Stringa vuota :(\n";

    return 0;
}
