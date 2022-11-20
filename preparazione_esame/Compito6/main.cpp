#include <iostream>
using namespace std;

struct S{
    int occ;
    char car;
    float perCento;
};

bool checkCar(S vet[], int dim, char c){
    for(int i = 0; i < dim; i++)
        if(vet[i].car == c)
            return false;
    return true;
}

void input(S vet[], int &dim){
    char c;
    do{
        cout << "Inserire carattere ('#' per terminare): ";
        cin >> c;

        if(c != '#' && checkCar(vet, dim, c)){
            vet[dim].car = c;
            dim++;
        }
    } while(c != '#');
}

void output(S vet[], int dim){
    cout << "--------------------------------------------------\nOUTPUT";
    for(int i = 0; i < dim; i++){
        cout << "\nCella " << i + 1;
        cout << "\n\tocc: " << vet[i].occ;
        cout << "\n\tcar: " << vet[i].car;
        cout << "\n\tperCento: " << vet[i].perCento << "%";
    }
    cout << "\n--------------------------------------------------\n";
}

void conta(S vet[], int dim, char testo[]){
    int cont = 0;
    for(int i = 0; i < dim; i++){
        for(int j = 0; testo[j] != '\0'; j++){
            if(vet[i].car == testo[j])
                cont++;
        }
        vet[i].occ = cont;
        cont = 0;
    }
}

void percentuale(S vet[], int dim, int len){
    for(int i = 0; i < dim; i++)
        vet[i].perCento = (float) vet[i].occ / len * 100;
}

void es3(){
    S vet[128];
    char testo[10001];
    int dim = 0;

    cout << "Inserire testo: ";
    cin.getline(testo, 10001);

    input(vet, dim);

    conta(vet, dim, testo);

    percentuale(vet, dim, strlen(testo));

    output(vet, dim);
}

int main() {
    es3();
    return 0;
}
