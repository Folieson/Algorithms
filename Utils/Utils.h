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
long powFor(int a, int b);
long powRecursion(long a, int b);
long powRecursion2(long a, int b);

int endNum;
int counter;
//void command1(int num);
//void command2(int num);

int l2Ex3For(int s, int e);
int l2Ex3Recursion(int s, int e);

#define SMALL_SIZE  20
#define MID_SIZE    10000
#define HIGH_SIZE   100000
void swap(int *a, int *b);
void printArray(int N, int *a);
int bubbleSort(int N, int *a);
int bubbleSortOptimized(int N, int *a);