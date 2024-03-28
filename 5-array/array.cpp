#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dichiarazione e inizializzazione di un array statico di interi
    int arrayStatico[5] = {10, 20, 30, 40, 50};

    // Stampiamo gli elementi dell'array statico
    cout << "Array statico di interi:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i << ": " << arrayStatico[i] << endl;
    }

    // Dichiarazione di un array dinamico di float
    int lunghezzaArray;
    cout << "\nInserisci la lunghezza dell'array dinamico di float: ";
    cin >> lunghezzaArray;

    float *arrayDinamicoFloat = new float[lunghezzaArray];

    // Inizializzazione dell'array dinamico con valori casuali
    for (int i = 0; i < lunghezzaArray; ++i) {
        arrayDinamicoFloat[i] = 10.5f * i; // Esempio di valori casuali
    }

    // Stampiamo gli elementi dell'array dinamico
    cout << "\nArray dinamico di float:" << endl;
    for (int i = 0; i < lunghezzaArray; ++i) {
        cout << "Elemento " << i << ": " << arrayDinamicoFloat[i] << endl;
    }

    // Deallocazione della memoria dell'array dinamico
    delete[] arrayDinamicoFloat;

    // Esempio di array di stringhe
    string personaggiGioco[3] = {"Mario", "Luigi", "Peach"};

    // Stampiamo gli elementi dell'array di stringhe
    cout << "\nArray di stringhe (personaggi di un videogioco):" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Personaggio " << i + 1 << ": " << personaggiGioco[i] << endl;
    }

    return 0;
}
