//
// Created by matev on 23. 04. 2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vaja8.h"

int vajaOsem(){
    printf("Danes pa datoteke\n");
    // Preveri kje imaš .exe file!
    FILE *input_file_fp = fopen("imenik.csv","rt");
    // absolute c:/matevz/prog2/nekaj/imenik.csv
    // relative /vaje/imenik.csv      //./vaje/imenik.csv
    if(input_file_fp == NULL){
        printf("Ne morem odpreti datoteke!");
        return 1;
    }

    FILE *output_file_fp = fopen("imenik_nov.csv", "wt");
    if(output_file_fp == NULL){
        printf("Ne morem odpreti ciljne datoteke!");
        return 2;
    }


    char znak;
    char tel_vnos[1000] = "";
    char *k = tel_vnos;
    const char slo_predp[] = "+386";
    const char *k_pred = slo_predp;
    int success;
    int skip_char = 0;

    do{
        success = fscanf(input_file_fp, "%c", &znak);
        if(znak != '\n'){
            if(znak == ','){
                *k = znak;
                k++;
                while(*k_pred){
                    *k = *k_pred;
                    k++;
                    k_pred++;
                }
                skip_char = 1;
                k_pred = slo_predp;
            }else{
                if(skip_char == 0){
                *k = znak;
                k++;
                }
                else{
                    skip_char = 0;  // preskočim naslednji znak ker je bila prej vejica
                }
            }
        }
        else{
            *k = 0;
            printf("%s\n",tel_vnos);
            fprintf(output_file_fp,"%s\n",tel_vnos);
            strcpy(tel_vnos,"");
            k = tel_vnos;

        }


    }while(success != EOF);

    fclose(input_file_fp);
    fclose(output_file_fp);
    return 0;
}


