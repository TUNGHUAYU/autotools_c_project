#include <stdlib.h>
#include <stdio.h>
#include "hello.h"


int hello(char * name){

    // check variable
    if ( NULL == name ){
        printf("[hello/hello.c] name == NULL\n");
        return -1;
    }

    // 
    printf("Hello %s\n", name);


    return 0;
}
