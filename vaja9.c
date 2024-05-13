//
// Created by matev on 7. 05. 2024.
//
#include <stdio.h>
#include "vaja9.h"

const char* byte_to_binary(unsigned short x){
    static char b[sizeof(unsigned short)*8+1] = {0};
    int y;
    long long z;
    for(z = 1LL<<sizeof(unsigned short )*8-1,y=0;z >0; z >>=1,y++){
        b[y] = (((x & z) == z) ? '1' : '0');
    }
    b[y] = 0;
    return b;
}

void printAll(unsigned short x){
    printf("\n%d", x);
    printf("\n%04x", x);
    printf("\n%s", byte_to_binary(x));
}


void vajaDevet(){
    printf("\nDanes pa biti\n");
    unsigned short x = 10;
    printAll(x);
    x = 0xF00A;
    printAll(x);
    x = x >> 3;
    printAll(x);
    x = x << 3;
    printAll(x);
    x = ~x;
    printAll(x);
    x = 0xF00A;
    unsigned short maska, rezultat;
    // & ni isto kot && in | ni isto kot ||
    // VKLOP BITA - ALI
    printAll(x);
    // maska: 0 kjer ni spremembe, 1 kjer vklopim
    maska = 0x0088;
    printf("\n%s", byte_to_binary(x));
    printf("\n%s", byte_to_binary(maska));
    x = maska | x;
    //printAll(x);
    printf("\n%s", byte_to_binary(x));

    // IZKLOP BITA - IN
    // maska: 1 kjer ni spremembe, 0 kjer izklopim
    maska = 0xFFFD;
    printf("\n%s", byte_to_binary(maska));
    x = maska & x;
    printf("\n%s", byte_to_binary(x));

    // PREVERIM BIT(E)
    // EN BIT - IN ter maska od vklopa
    maska = 0x0004;
    printf("\n%s", byte_to_binary(maska));
    if((maska & x) != 0){
        printf("\nBit je prižgan");
    }else{
        printf("\nBit ni prižgan ");
    }

    // VEČ BITOV, 2 možnosti!!!
    maska = 0x2008;
    printf("\n%s", byte_to_binary(x));
    printf("\n%s", byte_to_binary(maska));
    printf("\n%s", byte_to_binary(x&maska));
    if( (x & maska) != 0){
        printf("\nVsaj en bit je prižgan");
    }else{
        printf("\nNoben bit ni prižgan");
    }

    if((maska & x) == maska){
        printf("\nVsi zahtevani biti so prižgani");
    }else{
        printf("\nVsi zahtevani niso prižgani");
    }


    printf("\n%s", byte_to_binary(x));
    printf("\n%s", byte_to_binary(maska));
    printf("\n%s", byte_to_binary(x^maska));

    // ^   je XOR 1 samo iz kombinacije 1 in 0, 1 in 1 = 0!!


    return;
}
