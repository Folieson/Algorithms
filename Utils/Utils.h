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

int l2Ex3For(int s, int e);
int l2Ex3Recursion(int s, int e);

#define ARR_SIZE  100000
void fillArray(int N, int *a);
void swap(int *a, int *b);
void printArray(int N, int *a);
long long int bubbleSort(int N, int *a);
long long int bubbleSortOptimized(int N, int *a);
long long int shakerSort(int N, int *a);
int binSearch(int N, int *a, int value);

//lesson4Ex3
//размерность доски
#define H 5
#define W 5
#define CELLS H*W
// Доска для коней
// 0 - пустая клетка
// Число – номер ферзя
int board[H][W];

int SearchSolution(int n);
int CheckBoard();
int CheckHorse(int x, int y);
void Print(int n, int m, int a[H][W]);
void Zero(int n, int m, int a[H][W]);
void Pause(int key);

//l4Ex2
#define N_L4 3
#define M_L4 3
void Print2(int n, int m, int a[N_L4][M_L4]);
void Print3(int n, int m, int a[10][8]);
int max(int a, int b);

//lesson4
#define T char
#define MaxN 1000
T Stack[MaxN];

int N;

void push(T i);

T pop();

T Queue[MaxN];

int N2;
int Front;

void push2(T i);

T pop2();