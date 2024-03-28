# Lezione 6: Cicli Iterativi

## Indice:

- [Introduzione](#introduzione)
- [Utilizzo](#utilizzo)
- [Tipi di Cicli iterativi](#tipi-di-cicli-iterativi)
    - [For](#for)
    - [While](#while)
    - [Do-While](#do-while)
- [Differenze Tra i Vari Tipi](#diff)

## Introduzione

I cicli iterativi sono strutture di controllo fondamentali nella programmazione che consentono di eseguire ripetutamente un blocco di istruzioni fino a quando una condizione specifica non viene soddisfatta.

In C++, i cicli iterativi possono essere implementati utilizzando le istruzioni `for`, `while` e `do-while`.

## Utilizzo

I cicli iterativi sono utilizzati quando si desidera eseguire un blocco di istruzioni più volte senza dover ripetere manualmente lo stesso codice. Sono ampiamente utilizzati nei videogiochi per gestire situazioni come il movimento dei personaggi, la generazione casuale di eventi e molto altro.

## Tipi di Cicli iterativi

### `for`

l ciclo **for** è utilizzato quando si conosce in anticipo il numero di iterazioni necessarie. La sua struttura è composta da tre parti:

- **Inizializzazione**: In questa parte vengono inizializzate le variabili di controllo del ciclo.
- **Condizione**: Questa parte specifica la condizione che deve essere verificata ad ogni iterazione affinché il ciclo continui ad eseguire.
- **Incremento/Decremento**: Questa parte viene eseguita alla fine di ogni iterazione e serve ad aggiornare lo stato delle variabili di controllo del ciclo.

```c++
for (inizializzazione; condizione; incremento/decremento) {
    // Blocco di istruzioni da eseguire ripetutamente
}
```

#### Esempio:

```c++
for (int i = 0; i < num_eventi; ++i) {
    genera_evento_casuale();
}
```

### `while`

Il ciclo **while** è utilizzato quando la condizione di esecuzione del ciclo non è nota a priori e deve essere verificata prima di ogni iterazione. Viene eseguito finché la condizione specificata è vera.

```c++
while (condizione) {
    // Blocco di istruzioni da eseguire ripetutamente
}
```

#### Esempio:

```c++
while (!raggiunto_obiettivo()) {
    muovi_personaggio();
}
```

### `do-while`

Il ciclo **do-while** è simile al ciclo while, ma garantisce che il blocco di istruzioni venga eseguito almeno una volta, indipendentemente dalla condizione. Dopo l'esecuzione del blocco di istruzioni, la condizione viene verificata. Se è vera, il ciclo continua ad eseguire, altrimenti termina.

```c++
do {
    // Blocco di istruzioni da eseguire ripetutamente
} while (condizione);
```

#### Esempio:

```c++
char scelta;
do {
    mostra_menu_interazione();
    cin >> scelta;
    esegui_azione(scelta);
} while (scelta != 'esci');
```

## Differenze Tra i Vari Tipi

- Il ciclo for è più adatto quando si conosce il numero esatto di iterazioni necessarie, mentre while e do-while sono più flessibili e adatti quando la condizione di uscita non è nota a priori.
- Il ciclo for è composto da tre parti separate da punto e virgola, mentre while e do-while hanno solo la condizione di uscita.
- Il ciclo do-while garantisce almeno un'iterazione, mentre while e for potrebbero non eseguire il blocco di istruzioni se la condizione non viene soddisfatta fin dall'inizio.