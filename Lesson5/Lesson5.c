//
// Created by Андрей Понамарчук on 29/08/2019.
//

#include "Lesson5.h"


void lesson5() {
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
                lesson5Ex1();
                break;
            case 2:
                lesson5Ex2();
                break;
            case 3:
                lesson5Ex3();
                break;
            default:
                printf("Wrong exercise number\n");
                break;
        }
    }
}

void lesson5Ex1() {
    printf("Enter decimal number\n");
    int decNumb = 0;
    scanf("%d",&decNumb);
    while (decNumb > 0) {
        push(decNumb % 2);
        decNumb /= 2;
    }
    printf("binary number = ");
    while(N != -1)
        printf("%d",pop());
    printf("\n");
}

void lesson5Ex2() {

}

void lesson5Ex3() {

}
