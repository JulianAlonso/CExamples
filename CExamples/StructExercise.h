//
//  StructExercise.h
//  CExamples
//
//  Created by Julian Alonso on 2/2/15.
//  Copyright (c) 2015 Julian Alonso. All rights reserved.
//

#ifndef __CExamples__StructExercise__
#define __CExamples__StructExercise__

#include <stdio.h>

#endif /* defined(__CExamples__StructExercise__) */

typedef struct Cube {
    
    float x;
    float y;
    float width;
    float height;
    
} Own_struct;

void exercise();

void print_struct(Own_struct own_struct);

void round_and_print_struct(Own_struct *own_struct);