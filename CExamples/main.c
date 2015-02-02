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

int add(int a, int b) {
    return a+b;
}

void println(char *message) {
    
    printf("%s\n", message);
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
//    int a = 4;
//    int b = 7;
//    
//    printf("The number is: %d\n", add(a, b));
//    
//    println("Esto es un mensage");
//    
//    printNumber(8);
    
    
    int num = 3;
    
    printFactorialOfNumberRecursive(num, 0);
    
    //PRUEBA EL EJERCICIO DE STRUCTS.
    exercise();
    
    return 0;
}

