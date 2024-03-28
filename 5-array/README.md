# Lezione 5: Array (statici & dinamici)

## Indice:

- [Introduzione](#introduzione)
- [Tipi di Array](#tipi-di-array)
    - [Array Statici](#array-statici)
    - [Array Dinamici](#array-dinamici)
- [Utilizzo degli Array](#utilizzo-degli-array)
- [Esempi Pratici](#esempi-pratici)
    - [Memorizzazione delle Posizioni dei Personaggi](#memorizzazione-delle-posizioni-dei-personaggi)
    - [Memorizzazione dei Livelli di Gioco](#memorizzazione-dei-livelli-di-gioco)
    - [Gestione degli Oggetti Raccolti](#gestione-degli-oggetti-raccolti)


## Introduzione

Gli array sono strutture dati fondamentali nella programmazione che consentono di memorizzare una collezione di elementi dello stesso tipo in memoria in modo contiguo e accessibile tramite un indice.

## Tipi di Array

In C++, gli array possono essere di due tipi principali: array **statici** e array **dinamici**.

### Array Statici

Gli array statici hanno una dimensione fissata durante la dichiarazione e non può essere modificata durante l'esecuzione del programma.

```c++
tipo_dato nome_array[dimensione];
```

### Array Dinamici

Gli array dinamici sono allocati durante l'esecuzione del programma e la loro dimensione può essere determinata a runtime.

```c++
tipo_dato *nome_array = new tipo_dato[dimensione];
```

## Utilizzo degli Array

Gli array sono utilizzati per memorizzare dati di tipo omogeneo in modo efficiente e organizzato. Sono ampiamente utilizzati nei videogiochi per memorizzare informazioni come posizioni dei personaggi, punteggi, livelli di gioco e molto altro.

## Esempi Pratici

### Memorizzazione delle Posizioni dei Personaggi:

In un videogioco di avventura, possiamo utilizzare un array per memorizzare le posizioni (coordinate x, y) dei personaggi sulla mappa.

```c++
int posizioni_personaggi[2][num_personaggi]; // Array bidimensionale per le coordinate x e y
```

### Memorizzazione dei Livelli di Gioco:

In un gioco platform, possiamo utilizzare un array per memorizzare i dettagli dei livelli, come la lunghezza, l'altezza e il numero di nemici.

```c++
struct Livello {
    int lunghezza;
    int altezza;
    int num_nemici;
};

Livello livelli[num_livelli];
```

### Gestione degli Oggetti Raccolti:

In un RPG, possiamo utilizzare un array per memorizzare gli oggetti raccolti dal giocatore durante l'avventura.

```c++
string oggetti_raccolti[num_oggetti];
```