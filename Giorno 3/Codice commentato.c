// Includiamo la libreria standard per l'input/output
#include <stdio.h>

// Definiamo la funzione principale del programma
int main () {

    // Qui dichiariamo delle variabili
    int vector [10], i, j, k; // vector è un array di 10 interi, i, j, k sono variabili di controllo
    int swap_var; // Variabile temporanea per lo scambio di valori

    // Stampa un messaggio per richiedere all'utente di inserire 10 interi
    printf ("Inserire 10 interi:\n");

    // Ciclo per l'input di 10 interi
    for ( i = 0 ; i < 10 ; i++)
    {
        int c= i+1; // Calcola il numero dell'elemento
        printf("[%d]:", c); // Stampa il numero dell'elemento
        scanf ("%d", &vector[i]); // Leggi l'intero inserito dall'utente e memorizzalo nell'array
    }

    // Stampa il vettore inserito dall'utente
    printf ("Il vettore inserito e':\n");
    for ( i = 0 ; i < 10 ; i++)
    {
        int t= i+1; // Calcola il numero dell'elemento
        printf("[%d]: %d", t, vector[i]); // Stampa l'indice e il valore dell'elemento
        printf("\n"); // Vai a capo per ogni elemento
    }

    // Algoritmo di ordinamento bubble sort per ordinare il vettore
    for (j = 0 ; j < 10 - 1; j++) // Loop esterno
    {
        for (k = 0 ; k < 10 - j - 1; k++) // Loop interno
        {
            if (vector[k] > vector[k+1]) // Se l'elemento corrente è maggiore del successivo, scambia i valori
            {
                swap_var=vector[k];
                vector[k]=vector[k+1];
                vector[k+1]=swap_var;
            }
        }
    }

    // Stampa il vettore ordinato
    printf("Il vettore ordinato e':\n");
    for (j = 0; j < 10; j++)
    {
        int g = j+1; // Calcola il numero dell'elemento
        printf("[%d]:", g);
        printf("%d\n", vector[j]); // Stampa l'elemento ordinato
    }

    // Restituisci 0 per indicare che il programma è stato eseguito correttamente
    return 0;
}
