#include <iostream>
using namespace std;
// ES 3

struct riga{
    double entrate;
    double uscite;
    double saldo;
};

void input(riga righe[], int x){
    for(int i = 0; i < x; i++){
        cout << "Inserire l'entrata della " << i + 1 << " riga: ";
        cin >> righe[i].entrate;
        cout << "Inserire l'uscita della " << i + 1 << " riga: ";
        cin >> righe[i].uscite;
        cout << endl;
        righe[i].saldo = righe[i].entrate - righe[i].uscite;
    }
    cout << endl;
}

void outputTabella(riga righe[], int x){
    cout << "TABELLA:\n\tENTRATE\tUSCITE\tSALDO\n";
    for(int i = 0; i < x; i++)
        cout << "\t" << righe[i].entrate << "\t\t" << righe[i].uscite << "\t\t" << righe[i].saldo << endl;
}

void totSomma(riga righe[], int x){
    double sEnt, sUsc, sSal;
    int negSaldo = 0;
    for(int i = 0; i < x; i++){
        sEnt += righe[i].entrate;
        sUsc += righe[i].uscite;
        sSal += righe[i].saldo;

        if(righe[i].saldo < 0)
            negSaldo++;
    }
    cout << "TOTALE ENTRATE: " << sEnt << endl;
    cout << "TOTALE USCITE: " << sUsc << endl;
    cout << "TOTALE SALDO: " << sSal << endl;
    cout << "Numero volte saldo negativo: " << negSaldo << endl;

}

int main() {
    int x;

    do{
        cout << "Inserire il numero delle righe: ";
        cin >> x;
    } while(x <= 0 || x > 31);

    riga righe[x];

    input(righe, x);

    outputTabella(righe, x);

    totSomma(righe, x);

    return 0;
}
