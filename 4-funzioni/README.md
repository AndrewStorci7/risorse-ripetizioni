# Lezione 4: Funzioni

### Indice:

- [Introduzione](#introduzione)
- [Utilizzo delle Funzioni](#utilizzo-delle-funzioni)
- [Tipologie di Passaggio dei Parametri](#tipologie-di-passaggio-dei-parametri)
    - [Passaggio per Valore](#passaggio-per-valore)
    - [Passaggio per Riferimento](#passaggio-per-riferimento)
    - [Passaggio per Puntatore](#passaggio-per-puntatore)
- [Conclusioni](#conclusioni)

## Introduzione

Le funzioni sono uno strumento fondamentale nella programmazione. Esse permettono di suddividere il codice in blocchi più piccoli e organizzati, rendendo il programma più leggibile, **modulare** e facile da gestire.

In C++, una funzione è un blocco di istruzioni che ha un nome e può accettare dati in input (**parametri**), elaborarli e restituire un risultato. La sintassi base per definire una funzione è la seguente:

```c++
tipo_di_dato nome_funzione(tipo_parametro1 parametro1, tipo_parametro2 parametro2, ...) {
    // Corpo della funzione
    // Istruzioni da eseguire
    return valore_di_ritorno;
}
```

## Utilizzo delle Funzioni

Le funzioni possono essere utilizzate per svolgere diverse operazioni, come calcoli matematici, manipolazione di dati, gestione di input/output e molto altro. Ad esempio, nel contesto dei videogiochi, potremmo definire una funzione per calcolare il punteggio del giocatore, per gestire i movimenti del personaggio, per controllare le collisioni, etc.

## Tipologie di Passaggio dei Parametri

### Passaggio per Valore

- Il valore del parametro viene **copiato** e passato alla funzione.
- Le modifiche al parametro all'interno della funzione **non influenzano** la variabile originale.
- È adatto per passare dati di tipo base o strutture di dati di piccole dimensioni.

```c++
void funzionePerValore(int x) {
    x = x * 2;
    // x è modificata solo all'interno della funzione
}

int main() {
    int numero = 5;
    funzionePerValore(numero);
    // Il valore di 'numero' resta 5
}
```

### Passaggio per Riferimento

- Viene passato il riferimento alla variabile originale.
- Le modifiche al parametro all'interno della funzione influenzano direttamente la variabile originale.
- È utile quando si desidera modificare direttamente la variabile originale all'interno della funzione.

```c++
void funzionePerRiferimento(int &x) {
    x = x * 2;
    // x modifica direttamente la variabile originale
}

int main() {
    int numero = 5;
    funzionePerRiferimento(numero);
    // Il valore di 'numero' diventa 10
}
```

### Passaggio per Puntatore

- Viene passato l'indirizzo di memoria della variabile originale.
- Le modifiche al parametro all'interno della funzione influenzano direttamente la variabile originale.
- È simile al passaggio per riferimento ma offre maggiore controllo sull'indirizzo di memoria.

```c++
void funzionePerPuntatore(int *x) {
    (*x) = (*x) * 2;
    // Modifica direttamente la variabile originale tramite puntatore
}

int main() {
    int numero = 5;
    funzionePerPuntatore(&numero);
    // Il valore di 'numero' diventa 10
}
```

## Conclusioni

Le funzioni sono uno strumento potente nella programmazione in C++, che ci permette di organizzare il nostro codice in blocchi modulari e di rendere più efficiente il nostro lavoro. Conoscere i vari modi di passaggio dei parametri ci permette di scrivere codice più efficiente e flessibile, adattabile alle diverse esigenze dei nostri programmi, anche nel mondo dei videogiochi.