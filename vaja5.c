//
// Created by matev on 26. 03. 2024.
//

#include "vaja5.h"
#include <stdio.h>

void odvod(float koeficienti[],int n){
    for(int i = 0; i <= n; i++){
        koeficienti[i] = koeficienti[i]*2;
    }
    return;
}


void imamSpomin(){
    static int x = 0;
    printf("\n%d", x++);
    return;
}



int varnoDeljenje(int x, int y, float *r){
    if( y == 0){
        *r = 0;
        return 0;
    }
    else{
        *r = (float)x/y;
        return 1;
    }
}



void vajaPet(){
    printf("Danes pa kazalci\n");
    float koeficienti[] = {12,34,5,6,7};
    float koeficienti2[5];
    // koeficienti2 = koeficienti;

    int n = 4;
    for(int i = 0; i <= n; i++){
        printf("Vrednost koeficienta = %f\n", koeficienti[i]);
        koeficienti2[i] = koeficienti[i];
    }
    odvod(koeficienti,n);
    for(int i = 0; i <= n; i++){
        printf("Vrednost koeficienta = %f\n", koeficienti[i]);
        printf("Vrednost koeficienta2 = %f\n", koeficienti2[i]);
    }

    int c = 10;
    printf("\nVrednost spremenljivke c = %d\n", c);
    int *p;
    p = &c;
    printf("\nVrednost kazalca je p  = %d \n", p);
    printf("\nVrednost kamor kazalec kaže je = %d\n", *p);

    /*
     * SPREMENLJIVKA
     * c -> vrednost
     * &c -> naslov
     *
     * KAZALEC
     * p -> naslov kamor kazalec kaže
     * *p -> vrednost ki je tam shranjena
     */
    printf("\n c = %d, p = %d, *p = %d", c, p, *p);
    *p = 33;
    printf("\n c = %d, p = %d, *p = %d", c, p, *p);
    c = 99;
    printf("\n c = %d, p = %d, *p = %d", c, p, *p);
    int *r;
    r = &c;
    //c = p;
    *r = 22;
    printf("\n c = %d, p = %d, *p = %d", c, p, *p);
    printf("\nr kaže na %d", r);
    r++;
    printf("\nr kaže na %d", r);
    char a = 12;
    char *ch;
    ch = &a;
    printf("\na kaže na %d", a);
    a++;
    printf("\na kaže na %d", a);

    int x = 3, y = 20;
    float rezultat = 0;
    float *point;
    point = &rezultat;
    if(varnoDeljenje(x,y, &rezultat)){
        printf("\nDeljenje uspelo, dobil si %f\n", rezultat);
    }else{
        printf("\nZajebal si, deliš z nulo!");
    }

    for(int i = 0; i < 5; i++){
        imamSpomin();
    }

    return;
}