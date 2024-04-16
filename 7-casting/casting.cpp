#include <iostream>

using namespace std;

int main() {

    // CASTING STATICO

    int punteggioIntero = 1000;
    double punteggioFloat = static_cast<double>(punteggioIntero) / 10.0;

    // CASTING DINAMICO

    class Personaggio {};
    class Giocatore : public Personaggio {};
    class NonGiocatore : public Personaggio {};

    Personaggio* personaggioPtr = ...; // Puntatore a un personaggio
    Giocatore* giocatorePtr = dynamic_cast<Giocatore*>(personaggioPtr);
    if (giocatorePtr) {
        // Il personaggio è un giocatore
    } else {
        // Il personaggio è un non giocatore
    }

    // CASTING DI REINTERPRETAZIONE

    struct DatiGiocatore {
        int puntiSalute;
        int puntiDanno;
    };

    char* buffer = ...; // Buffer di dati grezzi
    DatiGiocatore* giocatoreData = reinterpret_cast<DatiGiocatore*>(buffer);

}