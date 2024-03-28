#include <iostream>

using namespace std;

int main() {
    // Esempio di ciclo for: stampare i numeri da 1 a 5
    cout << "Ciclo for:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Esempio di ciclo while: stampare i numeri da 1 a 5
    cout << "Ciclo while:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    // Esempio di ciclo do-while: chiedere all'utente di inserire un numero compreso tra 1 e 10
    cout << "Ciclo do-while:" << endl;
    int scelta;
    do {
        cout << "Inserisci un numero compreso tra 1 e 10: ";
        cin >> scelta;
    } while (scelta < 1 || scelta > 10);

    cout << "Hai scelto il numero " << scelta << "." << endl;

    // Riferimento al mondo dei videogiochi: simulazione di un countdown prima dell'inizio del gioco
    cout << "Preparati al lancio del gioco in: ";
    for (int countdown = 3; countdown >= 1; --countdown) {
        cout << countdown << "... ";
    }
    cout << "GO!" << endl;

    return 0;
}
