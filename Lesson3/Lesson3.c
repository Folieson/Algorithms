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
    int smallArr[ARR_SIZE];
    fillArray(ARR_SIZE,&smallArr);
    int smallArr2[ARR_SIZE];
    for (int j = 0; j < ARR_SIZE; ++j) {
        smallArr2[j] = smallArr[j];
    }
    printArray(ARR_SIZE,smallArr);

    int bubbleSortSwaps = bubbleSort(ARR_SIZE, &smallArr);
    printf("bubbleSort swaps = %d\n", bubbleSortSwaps);
    printf("-------\n");
    printArray(ARR_SIZE,smallArr2);
    int bubbleSortSwapsOptimized = bubbleSortOptimized(ARR_SIZE, &smallArr2);
    printf("bubbleSort swaps = %d\n", bubbleSortSwapsOptimized);
    printArray(ARR_SIZE,smallArr2);
}

void lesson3Ex2() {
    int smallArr[ARR_SIZE];
    fillArray(ARR_SIZE,&smallArr);
    printArray(ARR_SIZE,smallArr);
    int shakerSortSwaps = shakerSort(ARR_SIZE, smallArr);
    printArray(ARR_SIZE,smallArr);
    printf("shakerSort swaps = %d\n", shakerSortSwaps);
}

void lesson3Ex3() {
    int arr[ARR_SIZE];
    fillArray(ARR_SIZE,&arr);
    shakerSort(ARR_SIZE, &arr);
    printArray(ARR_SIZE,arr);
    printf("binSearch result = %d\n", binSearch(ARR_SIZE, arr, 6));
}

void lesson3Ex4() {
    int arr[ARR_SIZE];
    fillArray(ARR_SIZE,&arr);
    int arr2[ARR_SIZE];
    int arr3[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE ; ++i) {
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }
    long long int bubbleSortSwaps = bubbleSort(ARR_SIZE, &arr);
    printf("bubbleSort swaps = %lld \n",bubbleSortSwaps);

    long long int bubbleSortOptimizedSwaps = bubbleSortOptimized(ARR_SIZE, &arr2);
    printf("bubbleSortOptimized swaps = %lld \n",bubbleSortOptimizedSwaps);

    long long int shakerSortSwaps = shakerSort(ARR_SIZE, &arr3);
    printf("shakerSort swaps = %lld \n",shakerSortSwaps);

//    long long int binSearchLoopIterations = 0;
//    binSearch(ARR_SIZE, arr3, 19);
}
