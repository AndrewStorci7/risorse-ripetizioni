#include <iostream>
#include <string>

using namespace std;

int main() {

    // CASTING STATICO

    int punteggioIntero = 1000;
    double punteggioDouble = static_cast<double>(punteggioIntero) / 10.0;

    // CASTING DINAMICO

    class Personaggio {};
    class Giocatore : public Personaggio {};
    class NonGiocatore : public Personaggio {};

    // Personaggio* personaggioPtr = new Personaggio(); // Puntatore a un personaggio
    // Giocatore* giocatorePtr = dynamic_cast<Giocatore*>(personaggioPtr);
    // if (giocatorePtr) {
        // Il personaggio è un giocatore
    // } else {
        // Il personaggio è un non giocatore
    // }

    // CASTING DI REINTERPRETAZIONE

    struct DatiGiocatore {
        int puntiSalute;
        int puntiDanno;
    };

    // char* buffer = ...; // Buffer di dati grezzi
    // DatiGiocatore* giocatoreData = reinterpret_cast<DatiGiocatore*>(buffer);


    int num1 = 10;
    int num2 = 7;

    int res = num1 / num2;
    float res2 = (float) num1 / num2;

    cout << "risultato intero: " << res << endl;
    cout << "risultato double: " << res2 << endl;

    int prova = 30;
    double d = 40.68;
    string s = to_string(d); // string to int
    string s2 = d;

    string ss = "Ciao mondo";
    // string::size_type size;

    cout << "stringa: " << s << endl;
    cout << "stringa2: " << s2 << endl;



}