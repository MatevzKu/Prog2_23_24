//
// Created by matev on 2. 04. 2024.
//

#include "vaja6.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 5000

typedef struct student{
    int visina;
    int indeksOcen[200];
    float teza;
    char spol;
    char ime[2000];
    char priimek[2000];
} student;

// struct student printamPodatke(struct student tine){....}
student printamPodatke(student tine){
    printf("Študent tine je visok %d, tehta %.1f kg in je spol %c\n", tine.visina, tine.teza, tine.spol);
    tine.visina = 160;
    return tine;
}

void printamPodatke2(student *ekipa[]){
    for(int i = 0; i < 10; i++){
        printf("\nVisina je %d",ekipa[i]->visina);
    }
    return;
}

void printamPodatke3(student ekipa[]){
    for(int i = 0; i < 10; i++){
        printf("\nVisina je %d",ekipa[i].visina);
    }
    return;
}

student ekipa[DIM];
student *pEkipa[DIM];
clock_t zacetek;

void vajaSest(){
    printf("Sest!\n");
    student marko, tone;
    marko.visina = 180;
    marko.teza = 80;
    marko.spol = 'M';
    tone.visina = 200;
    tone.teza = 90;
    tone.spol = 'M';
    printf("Študent Marko je visok %d, tehta %.1f kg in je spol %c\n", marko.visina, marko.teza, marko.spol);
    printamPodatke(tone);
    marko = printamPodatke(marko);
    printamPodatke(marko);


    //printf("Študent Tone je visok %d, tehta %.1f kg in je spol %c\n", tone.visina, tone.teza, tone.spol);

    for(int i = 0; i < DIM ; i++){
        ekipa[i].visina = rand()%21 + 160;
        pEkipa[i] = &ekipa[i];
    }
    int i, urejeno;
    student temp, *pTemp;
    zacetek = clock();
    do {
        urejeno = 1;
        for(int i = 1; i < DIM; i++){
            if(pEkipa[i-1]->visina > pEkipa[i]->visina){
                pTemp = pEkipa[i-1];
                pEkipa[i-1] = pEkipa[i];
                pEkipa[i] = pTemp;
                urejeno = 0;
            }
        }
    }while(!urejeno);
    printf("Cas s kazalci je %2fs\n", (double)(clock()-zacetek)/CLOCKS_PER_SEC);

    zacetek = clock();
    do {
        urejeno = 1;
        for(int i = 1; i < DIM; i++){
            if(ekipa[i-1].visina > ekipa[i].visina){
                temp = ekipa[i-1];
                ekipa[i-1] = ekipa[i];
                ekipa[i] = temp;
                urejeno = 0;
            }
        }
    }while(!urejeno);
    printf("Cas brez kazalcev je %2fs\n", (double)(clock()-zacetek)/CLOCKS_PER_SEC);

    printf("Trenutni prvi študent je visok %d\n", pEkipa[0]->visina);
    printf("Trenutni prvi študent je visok %d\n", pEkipa[0]->visina);
    printamPodatke2(pEkipa);
    printamPodatke3(ekipa);

}
