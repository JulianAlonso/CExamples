//
//  Factorial.c
//  CExamples
//
//  Created by Julian Alonso on 2/2/15.
//  Copyright (c) 2015 Julian Alonso. All rights reserved.
//

#include "Factorial.h"

void printFactorialOfNumber(int number) {
    
    int result = 0;
    
    while (number > 0) {
        result += number * (number - 1);
        number--;
    }
    
    printf("%d", result);
}


void printFactorialOfNumberRecursive(int number, int result) {
    
    result += number * (number - 1);
    
    if (number > 0) {
        number--;
        printFactorialOfNumberRecursive(number, result);
    } else {
        printf("%d\n", result);
    }
    
}