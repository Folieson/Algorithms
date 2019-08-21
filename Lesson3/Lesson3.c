//
// Created by Андрей Понамарчук on 2019-08-21.
//

#include "Lesson3.h"

void lesson3() {
    bool exit = false;
    while (!exit) {
        printf("Please, select exercise (from 1 to 4) or 0 to exit to lesson selection\n");
        int exercise = 0;
        scanf("%d",&exercise);
        switch (exercise) {
            case 0:
                exit = true;
                break;
            case 1:
                lesson3Ex1();
                break;
            case 2:
                lesson3Ex2();
                break;
            case 3:
                lesson3Ex3();
                break;
            case 4:
                lesson3Ex4();
                break;
            default:
                printf("Wrong exercise number\n");
                break;
        }
    }
}

void lesson3Ex1() {
    int smallArr[SMALL_SIZE];
    for (int i = 0; i < SMALL_SIZE; ++i) {
        smallArr[i] = rand() % SMALL_SIZE;
    }
    int smallArr2[SMALL_SIZE];
    for (int j = 0; j < SMALL_SIZE; ++j) {
        smallArr2[j] = smallArr[j];
    }
    printArray(SMALL_SIZE,smallArr);
//    int midArr[MID_SIZE];
//    for (int i = 0; i < MID_SIZE; ++i) {
//        midArr[i] = rand() % MID_SIZE;
//    }
//    int highArr[HIGH_SIZE];
//    for (int i = 0; i < HIGH_SIZE; ++i) {
//        midArr[i] = rand() % HIGH_SIZE;
//    }
    int bubbleSortSwaps = bubbleSort(SMALL_SIZE,&smallArr);
    printf("bubbleSort swaps = %d\n", bubbleSortSwaps);
    printf("-------\n");
    printArray(SMALL_SIZE,smallArr2);
    int bubbleSortSwapsOptimized = bubbleSortOptimized(SMALL_SIZE,&smallArr2);
    printf("bubbleSort swaps = %d\n", bubbleSortSwapsOptimized);
    printArray(SMALL_SIZE,smallArr2);
}

void lesson3Ex2() {

}

void lesson3Ex3() {

}

void lesson3Ex4() {

}
