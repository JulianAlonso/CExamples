//
//  main.c
//  CExamples
//
//  Created by Julian Alonso on 2/2/15.
//  Copyright (c) 2015 Julian Alonso. All rights reserved.
//

#include <stdio.h>

#include "PrintNumber.h"
#include "Factorial.h"
#include "StructExercise.h"
#include "ArrayCopy.h"

int add(int a, int b) {
    return a+b;
}

void println(char *message) {
    
    printf("%s\n", message);
    
}

int main(int argc, const char * argv[]) {
    int num = 3;
    
    printFactorialOfNumberRecursive(num, 0);
    
    //PRUEBA EL EJERCICIO DE STRUCTS.
    exercise();
    
    //PRUEBA EL EJERCICIO DE ARRAYCOPY.
    testCopyArray();
    
    return 0;
}

