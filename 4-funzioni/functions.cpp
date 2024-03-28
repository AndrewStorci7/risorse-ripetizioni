#include <iostream>
#include <string>

using namespace std;

void calcolaDannoPerValore(int);
void calcolaDannoPerRiferimento(int &);
void calcolaDannoPerPuntatore(int *);

int main() {
    int danniGiocatore = 100;
    cout << "Danni del giocatore: " << danniGiocatore << endl;

    // Passaggio per valore
    calcolaDannoPerValore(danniGiocatore);
    cout << "Danni del giocatore dopo calcolo per valore: " << danniGiocatore << endl;

    // Passaggio per riferimento
    calcolaDannoPerRiferimento(danniGiocatore);
    cout << "Danni del giocatore dopo calcolo per riferimento: " << danniGiocatore << endl;

    // Passaggio per puntatore
    calcolaDannoPerPuntatore(&danniGiocatore);
    cout << "Danni del giocatore dopo calcolo per puntatore: " << danniGiocatore << endl;

    return 0;
}

// Funzione che riceve un parametro per valore
void calcolaDannoPerValore(int danni) {
    danni -= 10;
    cout << "Danni calcolati (per valore): " << danni << endl;
}

// Funzione che riceve un parametro per riferimento
void calcolaDannoPerRiferimento(int &danni) {
    danni -= 10;
    cout << "Danni calcolati (per riferimento): " << danni << endl;
}

// Funzione che riceve un parametro per puntatore
void calcolaDannoPerPuntatore(int *danni) {
    (*danni) -= 10;
    cout << "Danni calcolati (per puntatore): " << *danni << endl;
}