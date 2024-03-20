//
// Created by matev on 19. 03. 2024.
//

#include "vaja4.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int printanje(int desetiskaCifra);


void vajaStiri(){
    printf("Danes vaja stiri - prototip in switch\n");
    printanje(22);
    int i = 0;
    srand(time(NULL));
    do{
        printf("%d\n", 1 + rand()%6);
        i++;
    }while(i < 15);

    printf("Vpiši eno dvomestno celo število med 30 in 99:");
    int cifra;
    scanf("%d", &cifra);
    printanje(cifra);

    int izbira;
    printf("vpiši izbiro: ");
    scanf("%d", &izbira);
    switch(izbira){
        case 1:
            printf("Sešteval bom");
            break;
        case 2:
            printf("Vnos prve cifre");
        case 3:
            printf("Vnos druge cifre");
            break;
        case 6:
        case 5:
        case 4:
            printf("V vsakem primeru se zgodi tole, samo vrednost %d izbire je druga", izbira);
            break;
        default:
            printf("še v razvoju");
    }
    int x;
    switch(x < 0){
        case 1: x = 1; break;
        case 0: x = 0; break;
    }

    if(x < 0){
        x = 1;
    }else{
        x = 0;
    }

    return;
}

int printanje(int desetiskaCifra){
    printf("Deluje! %d\n", desetiskaCifra);
    int desetice, enice;
    desetice = desetiskaCifra / 10;
    enice = desetiskaCifra % 10;
    /*if(enice == 1){
        printf("ena");
    }else if(enice == 2){
        printf("dva");
    }else{
        printf("toooo long");
    }*/

    switch(enice){
        case 1:
            printf("ena");
            break;
        case 2:
            printf("dva");
            break;
        case 3:
            printf("tri");
            break;
        case 4:
            printf("štiri");
            break;
        default:
            printf("Te cifre ne poznam!\n");
    }
    /*if(enice != 0){
        printf("in");
    }*/

    (enice != 0) ? printf("in") : printf("");

    switch(desetice){
        case 3:
            printf("tri");
            break;
        case 4:
            printf("štiri");
            break;
        case 5:
            printf("pet");
            break;
        default:
            printf("Pojma nimam kero cifro misliš!\n");
    }
    printf("deset");



    return 0;
}