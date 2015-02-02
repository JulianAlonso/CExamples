//
//  PrintNumber.c
//  CExamples
//
//  Created by Julian Alonso on 2/2/15.
//  Copyright (c) 2015 Julian Alonso. All rights reserved.
//

#include "PrintNumber.h"

void printNumber(unsigned int num) {
    
    printf("%d \n", num);
    
    if (num > 0) {
        num--;
        printNumber(num);
    }
    
}