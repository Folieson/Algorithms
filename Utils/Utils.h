//
// Created by Андрей Понамарчук on 2019-08-14.
//

#ifndef ALGORITHMS_UTILS_H
#define ALGORITHMS_UTILS_H

#endif //ALGORITHMS_UTILS_H

#pragma once
#include "math.h"
#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

typedef enum { black, white } colour;
struct Point {
    int x;
    int y;
};
typedef struct Point Point;

long numbLength (long numb);
long getLastDigits(long length, long numb);
void customRand(int numbCount);
int getMaxNumb(int a, int b);
colour getPointColour(Point point);

void convertToBin(long n);


