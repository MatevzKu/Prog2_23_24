//
// Created by matev on 23. 02. 2023.
//
#include <stdio.h>
#include "vaja1.h"
#define inch_v_cm 2.54

void vajaEna(){
    printf("\nPozdravljen svet!");
    int cifra =  22;
    float decim = 3.145;
    int cifra2 = cifra + 33;

    printf("\nIzpis spremenljivk %d in %d in %f", cifra, cifra2, decim);
    printf("\nDecimalke v več okusih:\n %f, %.2f, %6.3f, %+12.2f \n", decim,decim,decim,decim);

    int prva, druga;
    printf("Vpiši dve celi števili ločeni s presledkom: ");
    scanf("%d %d", &prva, &druga);
    printf("Vpisal si %d in %d\n", prva, druga);

    float decimalka;
    printf("\nVpiši dolžino v incah: ");
    scanf("%f",&decimalka);
    float dol_v_cm = decimalka * inch_v_cm;
    printf("Vpisana dolžina %f inch = %f cm", decimalka,dol_v_cm);
    //inch_v_cm = 23;



    return;
}
