//
// Created by Андрей Понамарчук on 2019-08-18.
//

#include "Lesson2.h"

void lesson2() {
    bool exit = false;
    while (!exit) {
        printf("Please, select exercise (from 1 to 3) or 0 to exit to lesson selection\n");
        int exercise = 0;
        scanf("%d",&exercise);
        switch (exercise) {
            case 0:
                exit = true;
                break;
            case 1:
                lesson2Ex1();
                break;
            case 2:
                lesson2Ex2();
                break;
            case 3:
                lesson2Ex3();
                break;
            default:
                printf("Wrong exercise number\n");
                break;
        }
    }
}

void lesson2Ex1() {
    printf("Enter number to covert\n");
    long n = 0;
    scanf("%ld", &n);
    convertToBin(n);
    printf("\n");
}

void lesson2Ex2() {
    printf("Enter base number\n");
    int a = 0;
    scanf("%d",&a);
    printf("Enter power\n");
    int b = 0;
    scanf("%d",&b);

    long res1 = powFor(a,b);
    printf("powFor(%d,%d) = %ld\n",a,b,res1);

    long res2 = powRecursion(a,b);
    printf("powRecursion(%d,%d) = %ld\n",a,b,res2);

    long res3 = powRecursion2(a,b);
    printf("powRecursion2(%d,%d) = %ld\n",a,b,res3);

}

void lesson2Ex3() {
    int startNum = 3;
    int endNum = 20;
    printf("l2Ex3For() result = %d\n", l2Ex3For(startNum, endNum));

    printf("l2Ex3Recursion() result = %d\n", l2Ex3Recursion(startNum, endNum));
}
