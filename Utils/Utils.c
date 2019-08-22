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

void convertToBin(long n) {
    if (n == 0) {
        return;
    }
    convertToBin(n / 2);
    printf("%d",  n % 2);
}

long powFor(int a, int b) {
    long n = 1;
    while (b) {
        if (b % 2) {
            b--;
            n *= a;
        } else {
            a *= a;
            b /= 2;
        }
    }
    return n;
}

long powRecursion(long a, int b) {
    if (b == 0) return 1;
    else return a * powRecursion(a, b - 1);
}

long powRecursion2(long a, int b) {
    if (b == 0) return 1;
    if ((b % 2) == 0) return powRecursion2(a * a, b / 2);
    else return a * powRecursion2(a, b - 1);
}



endNum = 20;
//counter = 0;
//void command1(int num) {
//    if(num == endNum){
//        counter++;
//        return;
//    }
//    if(num > endNum){
//        return;
//    }
//
//    command1(num + 1);
//    command2(num + 1);
//
//}
//
//void command2(int num) {
//    if(num == endNum){
//        counter++;
//        return;
//    }
//    if(num > endNum){
//        return;
//    }
//
//    command1(num * 2);
//    command2(num * 2);
//}

int l2Ex3For(int s, int e) {
    int a[100] = { 0 };

    a[s] = 1;

    for (int n = s + 1; n <= e; n++) a[n] = n % 2 == 0 ? a[n - 1] + a[n / 2] : a[n - 1];

    return a[e];
}

int l2Ex3Recursion(int s, int e) {
    if (e < s)return 0;
    if (e == s)return 1;

    return l2Ex3Recursion(s + 1, e) + l2Ex3Recursion(s * 2, e);
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArray(int N, int *a) {
    int i;
    for(i = 0; i < N; i++)
        printf("%6i", a[i]);
    printf("\n");
}

int bubbleSort(int N, int *a) {
    int swaps = 0;
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++)
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swaps++;
            }
        printArray(N, a);
    }
    return swaps;
}

int bubbleSortOptimized(int N, int *a) {

    int swaps = 0;
    for(int i = 0; i < N - 1; i++) {
        int counter = 0;
        for(int j = 0; j < N - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                counter++;
            }
        swaps += counter;
        printArray(N, a);
            if (counter <= 1) break;
    }

    return swaps;
}

int shakerSort(int N, int *a) {
    int swaps = 0;
    int left = 0;
    int right = N - 1;

    while (left < right) {
        for (int i = left; i < right; i++) {
            if (a[i] > a[i + 1]) {
                swap(&a[i],&a[i + 1]);
                swaps++;
            }
        }
        right--;
        for (int i = right; i < left; i--) {
            if (a[i - 1] > a[i]) {
                swap(&a[i - 1], &a[i]);
                swaps++;
            }
        }
    }
    return swaps;
}

void fillArray(int N, int *a) {
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % N;
    }
}

int binSearch(int arrLength, int *a, int value) {
    int left = 0;
    int right = arrLength - 1;
    int middle = arrLength / 2;
    while ((left <= right) && (a[middle] != value)) {
        if (a[middle] < value) left = middle + 1;
        else right = middle - 1;
        middle = left + (right - left) / 2;
    }
    if (a[middle] == value) return middle;
    else return -1;
}
