//
//  StructExercise.c
//  CExamples
//
//  Created by Julian Alonso on 2/2/15.
//  Copyright (c) 2015 Julian Alonso. All rights reserved.
//

#include "StructExercise.h"
#include <math.h>

void exercise() {

    Own_struct own_struct;
    
    own_struct.x = 3.6f;
    own_struct.y = 4.6f;
    own_struct.width = 5.6f;
    own_struct.height = 6.6f;
    
    print_struct(own_struct);
    
    round_and_print_struct(&own_struct);
    
    printf("\n");
    
    print_struct(own_struct);
    
}

void print_struct(Own_struct own_struct) {
    
    printf("x: %f\n", own_struct.x);
    printf("x: %f\n", own_struct.y);
    printf("x: %f\n", own_struct.width);
    printf("x: %f\n", own_struct.height);
    
}

void round_and_print_struct(Own_struct *own_struct) {
    
    own_struct->x = roundf(own_struct->x);
    own_struct->y = roundf(own_struct->y);
    own_struct->width = roundf(own_struct->width);
    own_struct->height = roundf(own_struct->height);
    
}
