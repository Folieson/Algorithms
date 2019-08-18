//
// Created by Андрей Понамарчук on 2019-08-14.
//

#include "Utils.h"

long numbLength(long numb) {
    long result = 0;
    do {
        result++;
        numb /= 10;
    } while (numb);
    return result;
}

long getLastDigits(long length, long numb) {
    long divisor = pow(10,length);
    return numb % divisor;
}

void customRand(int numbCount) {
    int m = 100; // Вершина последовательности
    int b = 6;
    int a = 8;
    int x = 1;
    for (int i = 0; i < numbCount; i++) {
        x = (a * x + b) % m +1;
        printf("random numb = %d\n",x);
    }
}

int getMaxNumb(int a, int b) {
    int max = a;
    if (max < b) max = b;
    return max;
}

colour getPointColour(Point point) {
    if (((point.x % 2 == 0) && (point.y % 2 == 0)) || ((point.x % 2 != 0) && (point.y % 2 != 0)))
        return black;
    else
        return white;
}

