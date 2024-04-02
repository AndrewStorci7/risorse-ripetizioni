#include <iostream>
#include <string>

using namespace std;

void aumentaDimensione(string*, int);

int main() {
    // Dichiarazione e inizializzazione di un array statico di interi
    int arrayStatico[5] = {10, 20, 30, 40, 50};

    // Stampiamo gli elementi dell'array statico
    cout << "Array statico di interi:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i << ": " << arrayStatico[i] << endl;
    }

    cout << arrayStatico[3] << endl;

    // Dichiarazione di un array dinamico di float
    int lunghezzaArray;
    cout << "\nInserisci la lunghezza dell'array dinamico di float: ";
    cin >> lunghezzaArray;

    // HEAP
    float *chest = new float[lunghezzaArray];

    // Inizializzazione dell'array dinamico con valori casuali
    for (int i = 0; i < lunghezzaArray; ++i) {
        chest[i] = 10.5f * i; // Esempio di valori casuali
    }

    // Stampiamo gli elementi dell'array dinamico
    cout << "\nArray dinamico di float:" << endl;
    for (int i = 0; i < lunghezzaArray; ++i) {
        cout << "Elemento " << i << ": " << chest[i] << endl;
    }

    // Deallocazione della memoria dell'array dinamico
    delete[] chest;

    // Esempio di array di stringhe
    string personaggiGioco[3] = {"Mario", "Luigi", "Peach"};

    // Stampiamo gli elementi dell'array di stringhe
    cout << "\nArray di stringhe (personaggi di un videogioco):" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Personaggio " << i + 1 << ": " << personaggiGioco[i] << endl;
    }



    string *parole = new string[2];

    for ( int i = 0; i < 2; ++i ) {
        cout << "Inserisci una parola: "; 
        cin >> parole[i];
    }

    /*
    for ( int i = 0; i < 10; ++i ) {
        cout << parole[i] << ", ";
    }
    */

/* Altro codice */

    aumentaDimensione(parole, 2);

    for (int i = 0; i < 3; ++i) {
        cout << "Inserisci parola (2): ";
        cin >> parole[2 + i];
    }

    for ( int i = 0; i < 2 * 10; ++i ) {
        cout << parole[i] << ", ";
    }

    cout << endl << endl << "Parola in posizione 3: " << parole[3];
    cout << endl << parole;
    
    return 0;
}

void aumentaDimensione(string *A, int d) {

    string *nuovo = new string[d * 10];

    for (int i = 0; i < d; ++i) {
        nuovo[i] = A[i];
    }

    delete[] A;
    A = nuovo;
}
