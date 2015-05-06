#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    //definizioni delle variabli
    int i;
    studente k[N];
    FILE *puntaFile;
    
    //Apertura file 
    puntaFile = fopen(FNAME, "w");
    
    //Intestazione del file.csv
    fprintf(puntaFile,"Nome; Cognome; Eta'; Classe\n");
    
    for(i=0;i<N;i++)
    {
        printf("Inserisci il nome\n ");
        scanf("%s", k[i].nome);
        fprintf(puntaFile,"%s;",k[i].nome);
        printf("Inserisci il cognome\n ");
        scanf("%s", k[i].cognome);
        fprintf(puntaFile,"%s;",k[i].cognome);
        printf("Inserisci l'eta'\n ");
        scanf("%d", &k[i].eta);
        fprintf(puntaFile,"%d;",k[i].eta);
        printf("Inserisci la classe\n ");
        scanf("%s", &k[i].classe);
        fprintf(puntaFile,"%s\n",k[i].classe);
    }
    
    fclose(puntaFile);
    printf("Dati salvati in %s", FNAME);
    
    return (EXIT_SUCCESS);
}