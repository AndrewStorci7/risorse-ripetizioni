#include <iostream>

using namespace std;

int main() {

    /*
     * Selezione del Personaggio:
     * Immaginiamo di dover selezionare il personaggio principale di un 
     * videogioco basato sul genere scelto dall'utente. 
     * Utilizziamo uno switch case per gestire i diversi generi:
     *
     */

    char genere = 'A';

    switch (genere) {
        case 'A':
            // Seleziona il personaggio principale per il genere d'azione
            break;
        case 'F':
            // Seleziona il personaggio principale per il genere fantasy
            break;
        case 'S':
            // Seleziona il personaggio principale per il genere sparatutto
            break;
        default:
            // Nessun genere valido, gestione dell'errore
    }

    /*
     * Gestione delle Azioni del Giocatore:
     * Supponiamo di dover gestire le azioni del giocatore in base 
     * all'input dell'utente. 
     * Utilizziamo uno switch case per eseguire azioni specifiche in 
     * risposta a determinati input:
     *
     */

    char input = 'W';

    switch (input) {
        case 'W':
            // Muovi il personaggio in avanti
            break;
        case 'A':
            // Muovi il personaggio a sinistra
            break;
        case 'D':
            // Muovi il personaggio a destra
            break;
        case 'S':
            // Muovi il personaggio indietro
            break;
        default:
            // Input non riconosciuto, ignora o gestisci l'errore
    }


}