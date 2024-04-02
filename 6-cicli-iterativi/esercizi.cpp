/**
 * Scrivi un programma in C++ che utilizzi un ciclo for per stampare 
 * tutti i numeri pari da 1 a 20. Immagina che questi numeri 
 * rappresentino il livello dei personaggi in un videogioco, 
 * e i livelli pari siano quelli in cui il personaggio 
 * può ottenere nuove abilità.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int livelli[20];

    for (int i = 1; i <= 20; ++i) {
        livelli[i - 1] = i;
    }

    for (int i = 0; i < 20; ++i) {
        if (livelli[i] % 2 == 0)
            cout << "Livello " << livelli[i] << " con abilità" << endl;
    }

    return 0;
}