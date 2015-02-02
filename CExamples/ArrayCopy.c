//
//  ArrayCopy.c
//  CExamples
//
//  Created by Julian Alonso on 2/2/15.
//  Copyright (c) 2015 Julian Alonso. All rights reserved.
//

#include "ArrayCopy.h"
#define length(x) (sizeof(x)/sizeof(x[0]));

void testCopyArray()
{

    int array_one[4] = {1, 2, 3, 4};
    
    int array_two[4];
    
    int size = length(array_one);
    
    copyArray(array_one, array_two, size);
    
    for (int i=0; i<size; i++) {
        printf("item %d: %d\n", i, array_two[i]);
    }
    
}

void copyArray(int *array_one, int *array_two, int size) {
    
    
    int sizze = length(array_one);
    printf("Tamaño dado: %d\n", size);
    printf("Tamaño: %d\n", sizze);
    
    for (int i=0; i<size; i++) {
        array_two[i] = array_one[i];
    }
    
}