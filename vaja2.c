//
// Created by matev on 5. 03. 2024.
//
#include <stdio.h>
#include "vaja2.h"

void vajaDve(){
    printf("Tudi tole deluje");
    int x, y;
    x = 4;
    y = 2;

    printf("Vrednost x = %d in rezultat testa = %d", x, 2< x < 5);//  (2 < x) < 5
    printf("\nVrednost x = %d, rezultat 2 < x < 5 pa je %d", x, (2< x) && (x <5) );

    printf("\n %d %d", x++, --y);
    printf("\n %d %d", x, y);
    x = 10;
    y = 10;
    if(  (++y > 0) || (x != 0) ){
        y = y + 10;
    }
    printf("\n y = %d", y);

    x = -5;
    x -= 5;  // += -= *= /=        x = x - 5;
    //y =*3;
    printf("\n x = %d in y = %d\n",x ,y);
    y = y && (x -= 5);   // 11 && -15  -> true && true = true
    printf("\n potem y = %d, x = %d\n", y, x);
    x = 0;
    if(x){   // if(x != 0)
        printf("Pri vrednosti %d drži\n", x);
    }else{
        printf("Pri vrednosti %d ne drži\n", x);
    }

    return;
}