//
// Created by Андрей Понамарчук on 02/09/2019.
//

#include "Lesson6.h"

void lesson6() {
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
                lesson6Ex1();
                break;
            case 2:
                lesson6Ex2();
                break;
            case 3:
                lesson6Ex3();
                break;
            default:
                printf("Wrong exercise number\n");
                break;
        }
    }
}

void lesson6Ex1() {
    char inpStr[] = "Hello, World!";
    int strLen = 13;
    int result = 0;
    for (int i = 0; i < strLen; ++i) {
        result += inpStr[i];
    }
    printf("result = %d\n",result);
}

void lesson6Ex2() {

}

void lesson6Ex3() {

}
