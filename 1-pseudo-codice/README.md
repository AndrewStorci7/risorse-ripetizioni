# Pseudo Codice

### Indice:

- [Introduzione](#introduzione)
- [Vantaggi dello pseudo codice](#vantaggi-dello-pseudo-codice)
- [Sintassi](#sintassi)
- [Perchè usarlo](#perchè-usarlo)

## Introduzione

Lo pseudo codice è un linguaggio di programmazione informale utilizzato per descrivere algoritmi in modo chiaro e conciso, senza la necessità di seguire una sintassi specifica di un linguaggio di programmazione reale. Si tratta di un linguaggio di alto livello che permette ai programmatori di scrivere algoritmi in modo comprensibile a persone con conoscenze di base della logica di programmazione.

## Vantaggi dello pseudo codice

- **Chiaro e comprensibile**: Lo pseudo codice utilizza una sintassi semplice e intuitiva che rende facile comprendere il flusso di un algoritmo anche a coloro che non sono esperti programmatori.
- **Indipendente dal linguaggio di programmazione**: Poiché lo pseudo codice non è legato a un linguaggio di programmazione specifico, può essere utilizzato per descrivere algoritmi in modo generico, senza doversi preoccupare dei dettagli implementativi di un particolare linguaggio.
- **Facilita la progettazione**: Scrivere lo pseudo codice prima di iniziare a scrivere il codice reale aiuta i programmatori a pianificare e organizzare la logica dell'algoritmo in modo più efficiente, riducendo il rischio di errori e semplificando il processo di debugging.

## Sintassi

### Dichiarazione di varibili

Le variabili vengono dichiarate specificando il loro tipo e il loro nome.

```markdown
Variabili
intero x, y
reale z
stringa nome
```

### Assegnazione delle variabili

Le variabili vengono assegnate utilizzando il simbolo "=" oppure con "->".

```markdown
x = 10
y = 20
z = x + y
nome = "Matteo"
```

### Strutture di controllo

Le istruzioni vengono eseguite in base alla condizione specificata.

Condizionati (`if` - `else`)

```markdown
Se x > y allora:
    stampa "x è maggiore di y"
Altrimenti:
    stampa "y è maggiore di x"
fine se
```

Le istruzioni vengono ripetute fino a quando una certa condizione è vera.

Cicli (`for` - `while`)

```markdown
Per i = 0 a 10 fai:
    stampa i
Fine per

Mentre x < 10 fai:
    incrementa x di 1
Fine mentre
```

### Procedure e funzioni

Le procedure eseguono una serie di istruzioni, mentre le funzioni restituiscono un valore.

```markdown
Procedura Saluta(nome)
    stampa "Ciao, " + nome
Fine Procedura

Funzione Somma(a, b)
    Restituisci a + b
Fine Funzione
```

### Esempio di pseudo codice

```markdown
Variabili
    intero somma, i

somma = 0

Per i da 1 a 10 fai
    somma = somma + i
Fine per

stampa "La somma dei primi dieci numeri è: " + somma
```

## Perchè usarlo

Uno pseudocodice svolge soprattutto una funzione di comunicazione.
Consente al programmatore di annotarsi il lavoro da fare in modo più efficace.