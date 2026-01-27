/*
Esercizio 1 (6pt). Scrivere una funzione count con tipo di ritorno int che prende come parametri un array di interi
arr e la sua dimensione n. La funzione deve ritornare il numero di coppie di indici (i, j) tali che i < j e arr[i] = arr[j].
Per esempio, se arr = [1, 2, 1, 2, 1] la funzione dovr`a ritornare 4 (inversioni: (0, 2), (0, 4), (2, 4), (1, 3)).
*/
int count(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] == arr[j])
                count++;
    return count;
}