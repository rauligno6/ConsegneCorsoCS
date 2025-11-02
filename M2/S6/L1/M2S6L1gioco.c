#include <stdio.h>
#include <ctype.h>


void presentazione() {
    printf("Buongiorno e Benvenuti al gioco delle Domande pazze!\n");
    printf("Rispondi correttamente e accumula il tuo punteggio!\n");
}

char menu() {
    char scelta;
    printf("Menu di scelta:\n");
    printf("A) Iniziare una nuova partita\n");
    printf("B) Uscire dal gioco\n");
    printf("Scegli (A/B): ");
    scanf(" %c", &scelta);
    return scelta;
}

int gioco(){
    char nome[100];
    int punteggio = 0;
    printf("\nInserisci il tuo Nome: ");
    scanf(" %s", nome);
    printf("Ciao %s, iniziamo il gioco!\n", nome);

    printf("\n Domanda 1: Qual è il pianeta più vicino al Sole?");
    printf("\nA) Venere\nB) Marte\nC) Mercurio\nD) Terra\n");
    printf("Risposta: ");
    char risposta;
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'C') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 2: Chi ha scritto I promessi sposi?");
    printf("\nA) Dante Alighieri\nB) Alessandro Manzoni\nC) Giovanni Boccaccio\nD) Ugo Foscolo\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'B') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 3: In che anno è caduto lImpero Romano dOccidente?");
    printf("\nA) 395 d.C.\nB) 410 d.C.\nC) 476 d.C.\nD) 509 d.C.\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'C') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 4: Qual è la moneta ufficiale del Giappone?");
    printf("\nA) Yen\nB) Yuan\nC) Baht\nD) Won\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'A') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 5: Che tipo di sangue è considerato donatore universale?");
    printf("\nA) AB+\nB) 0-\nC) A+\nD) 0+\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'B') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 6: Chi ha diretto il film “Titanic”?");
    printf("\nA) Steven Spielberg\nB) James Cameron\nC) Ridley Scott\nD) Martin Scorsese\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'B') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 7: Qual è il fiume più lungo del mondo?");
    printf("\nA) Nilo\nB) Rio delle amazzoni\nC) Mississippi\nD) Yangtse\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'B') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 8: Chi è lautore della canzone “Imagine”?");
    printf("\nA) Paul McCartney\nB) Freddie Mercury\nC) Bob Dylan\nD) John Lennon\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'D') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 9: In quale paese si sono svolti i Mondiali di calcio del 2006?");
    printf("\nA) Francia\nB) Brasile\nC) Germania\nD) Sudafrica\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'C') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Domanda 10: Chi ha fondato Microsoft insieme a Bill Gates?");
    printf("\nA) Paul Allen\nB) Steve Jobs\nC) Steve Wozniak\nD) Tim Berners-Lee\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (toupper(risposta) == 'A') {
        printf("Risposta Esatta!\n");
        punteggio ++;
    } else {
        printf("...Risposta Sbagliata!\n");
    }

    printf("\n Hai totalizzato %d punti!\n", punteggio);
    return punteggio;
}

int main() {
    char scelta;

    presentazione();

    do{
        scelta = menu();
        switch(toupper(scelta)) {
            case 'A':
                gioco();
            break;
            case 'B':
                printf("Arrivederci!\n");
            break;
            default:
                printf("Scelta non valida, Riprova!\n");
        }
    } while (toupper(scelta) != 'B');

return 0;
}