# Lezione Switch Case

## Indice
- [Introduzione](#introduzione)
- [Struttura dello Switch-Case](#struttura-dello-switch-case)
- [Switch vs. If-Else](#switch-vs-if-else)
- [Considerazioni](#considerazioni)

## Introduzione

Lo statement `switch` è una struttura di controllo utilizzata per eseguire una selezione tra molteplici alternative in base al valore di una variabile espressa in un'espressione di controllo. È utile quando si devono gestire più casi distinti in modo efficiente e leggibile.

## Struttura dello Switch-Case

La sintassi di base dello switch case è la seguente:

```cpp
switch (espressione_di_controllo) {
    case valore1:
        // istruzioni da eseguire se espressione_di_controllo == valore1
        break;
    case valore2:
        // istruzioni da eseguire se espressione_di_controllo == valore2
        break;
    // altri casi...
    default:
        // istruzioni da eseguire se nessun caso precedente è soddisfatto
}
```

## Switch vs. If-Else:

Lo switch case può essere utilizzato per eseguire una selezione tra più opzioni, simile a una serie di istruzioni if-else if-else. Tuttavia, ci sono alcune differenze chiave:

- L'if-else permette di eseguire controlli basati su espressioni booleane o complesse, mentre lo switch case è più adatto per selezionare tra un insieme discreto di opzioni basate su valori specifici.
- L'if-else consente di includere condizioni più complesse e non solo valori specifici come nel caso dello switch case.
- Lo switch case può essere più efficiente in certi casi, specialmente quando si confronta una variabile con un insieme discreto di valori costanti.

## Considerazioni

- Lo switch case è utile quando si deve confrontare una variabile con un insieme discreto di valori costanti.
- È importante utilizzare il caso default per gestire situazioni non previste.
- Lo switch case può rendere il codice più leggibile e conciso rispetto a una serie di istruzioni if-else.
- Tuttavia, l'uso eccessivo di switch case può rendere il codice meno flessibile e più difficile da mantenere in caso di modifiche future.