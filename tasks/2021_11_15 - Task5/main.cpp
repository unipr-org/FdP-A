#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
const int MAX = 100;

struct persona{
    char nome[255];
    char cognome[255];
    char cellulare[11];
};

int main() {
    cout << "Merenda Saverio Mattia [MAT. 330503]\nTask 5 - 16/11/2021\n\n";
    cout << "*** Rubrica ***" << endl;

    persona rubrica[MAX];
    int cursor = 0;
    int x;
    bool errors = false;
    do{

        do {
            errors = false;

            //cout << "Contatti in rubrica: " << cursor << endl;
            cout << "Menu': " << endl;
            cout << "\t1- Visualizza rubrica" << endl;
            cout << "\t2- Inserisci contatto" << endl;
            cout << "\t3- Cancella contatto" << endl;
            cout << "\t4- Esci" << endl;
            cout << "Inserisci un valore: ";
            cin >> x;
            cin.ignore();

            if(cin.fail()){
                cin.clear();
                cin.ignore(5000, '\n');
            }

            if(x < 1 || x > 4) errors = true;

        } while (errors);

        switch (x){
            case 1:
                {
                    cout << endl;
                    if(cursor == 0) cout << "Rubrica vuota! \n\n";
                    else{
                        cout << "Rubrica: " << endl;
                        for(int i = 0; i < cursor; i++)
                            cout << "\t" << i + 1 << "- " << rubrica[i].nome << " " << rubrica[i].cognome << " " << rubrica[i].cellulare << endl;
                        cout << endl;
                    }
                }
                break;
            case 2:
                {
                    persona e;

                    cout << "Inserisci il nome del contatto da aggiungere: ";
                    cin.getline(e.nome, 254);

                    cout << "Inserisci il cognome del contatto da aggiungere: ";
                    cin.getline(e.cognome, 254);

                    //bool errors = false;
                    do{
                        errors = false;
                        cout << "Inserisci il numero del contatto da aggiungere (10 caratteri numerici): ";
                        cin.getline(e.cellulare, 99);

                        if(strlen(e.cellulare) != 10)
                            errors = true;

                        for(int i = 0; i < strlen(e.cellulare); i ++){
                            if(e.cellulare[i] < 48 || e.cellulare[i] > 57){
                                errors = true;
                                break;
                            }
                        }
                    } while(errors);

                    rubrica[cursor] = e;
                    cursor++;

                    cout << "\nContatto aggiunto!\n\n";
                }
                break;
            case 3:
                {
                    if(cursor == 0) cout << "\nRubrica vuota! \n\n";
                    else {
                        char nome[255], cognome[255];

                        cout << "Inserisci il nome del contatto da cancellare: ";
                        cin.getline(nome, 254);
                        cout << "Inserisci il cognome del contatto da cancellare: ";
                        cin.getline(cognome, 254);

                        bool verify = false;
                        for (int i = 0; i <= cursor; i++) {
                            if (strcmp(nome, rubrica[i].nome) == 0 && strcmp(cognome, rubrica[i].cognome) == 0) {
                                verify = true;
                                for (int j = i; j <= cursor; j++)
                                    rubrica[j] = rubrica[j + 1];
                                i--;
                                cursor--;
                            }
                        }
                        if (verify) cout << "\nContatto cancellato!\n\n";
                        else cout << "\nContatto non trovato!\n\n";
                    }

                }
                break;
        }
    } while(x != 4);

    cout << "\nAddio!" << endl;
    return 0;
}
