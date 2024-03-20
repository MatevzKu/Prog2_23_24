//
// Created by matev on 12. 03. 2024.
//
#include <stdio.h>
#include "vaja3.h"


// y = 12 + 34*x + 56 * x^2 + 66 * x^3
// [12,34,56,66], 4

void manipulator(int cifre[], int dolzina){
    for(int i = 0; i < dolzina; i++){
        printf("Cifre = %d\n", cifre[i]);
        cifre[i] += 33;
    }
    return;
}

float racunajPolinom(int dolzina, int koeficienti[], float x){};


void vajaTri(){
    int i = 0;
    printf("Moja začetna vrednost je %d\n", i);

    float a = 1.19;
    float b = 0.25;
    printf("Moje decimalke so %.10f in %.10f\n", a, b);
    float test = 1.19;
    //if(a == test){
    if(a == (float)1.19){
        printf("Tole deluje!\n");
    }else{
        printf("Zafrknil si stari....\n");
    }

    int c = 12;
    int d = 33;
    printf("Deljenje je privzeto enako %f\n", c/d);
    printf("Zares delim %f\n", (float)c/d);
    printf("Tombola %f\n", 1.0*c/d);

    int tabelca[] = {1,2,3,5};
    int tabelca2[5];
    tabelca2[2] = 33;
    int tabelca3[10] = {12,36,45,66};
    float decimalke[] = {3.14,2.35,6.78};
    manipulator(tabelca3,10);
    for(int j = 0; j < 10; j++){
        printf("Tabelca = %d\n", tabelca3[j]);
    }


    return;
}