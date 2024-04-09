//
// Created by matev on 9. 04. 2024.
//

#include "vaja7.h"
#include <stdio.h>

#define D 25
typedef struct {
    char ime[D+1];
    char telefon[D+1];
    char ime_male_crke[D+1];
} oseba_t;

oseba_t imenik[] = {
        {"Robert Grlica", "04122222"},
        {"Tinkara Mizar", "123456"},
        {"",""}  //čuvaj
};

char *odlomiNiz(char niz[], char locilo){
    static char *k_znak;                    // *k_znak -> ena,dva,tri,....
    if(niz != NULL) k_znak = niz;
    char *k_start;
    k_start = k_znak;
    if(*k_znak == 0){
        return NULL;
    }
    while(*k_znak != locilo){
        if(*k_znak == 0){
            break;
        }
        k_znak++;
    }
    *k_znak = 0;        //ena0dva,tri
    k_znak++;
    return k_start;
}

void vajaSedem(){
    printf("Danes pa nakladamo...\n");
    char znak = 'c';
    char tekst[100] = "Tole je dooooolg tekst\n";
    printf("%c\n",znak);
    printf("%s\n", tekst);
    tekst[4] = 0;
    printf("%s",tekst);
    printf("\n%s",tekst+5); //tekst[5]
    //tekst++;
    char *pNiz;
    pNiz = tekst; //pNiz = &tekst
    //pNiz++;
    printf("\n%s", pNiz);
    char demo[] = "ena,dva,tri,stiri,pet";
    char drugiNiz[60];
    char *drugiN;
    drugiN = drugiNiz;
    char *demo2;
    demo2 = demo;
    //demo++;
    char *k_demo;
    k_demo = odlomiNiz(demo,',');
    while(k_demo){
        printf("\n%s", k_demo);
        k_demo = odlomiNiz(NULL,',');
    }
    printf("\n%s\n",demo);
    printf("\n");
    for(int i = 0; i < 5; i++){
        while(*demo2 != 0){
            printf("%c", *demo2);
            *drugiN = *demo2; // drugiNiz[i] = demo[i]
            demo2++;
            drugiN++;

        }
        *drugiN = ',';
        drugiN++;
        demo2++;
    }
    printf("\n%s\n",drugiNiz);

    printf("%s\n", imenik[0].ime);
    printf("%s\n", imenik[0].telefon);
    printf("%c\n", imenik[0].ime[0]);
    int i = 0;
    if(imenik[2].ime[0] == 0){
        printf("done");
    }else{
        printf("fail");
    }
/*
    while(imenik[i].ime[0] != ""){
        printf("Ime: %s Tel: %s \n", imenik[i].ime, imenik[i].telefon);
        i++;
    }
*/
    return;
}