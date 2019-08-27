//
// Created by Андрей Понамарчук on 27/08/2019.
//

#include "Lesson4.h"

void lesson4() {
    bool exit = false;
    while (!exit) {
        printf("Please, select exercise (from 3 to 3) or 0 to exit to lesson selection\n");
        int exercise = 0;
        scanf("%d",&exercise);
        switch (exercise) {
            case 0:
                exit = true;
                break;
            case 3:
                lesson4Ex3();
                break;
            default:
                printf("Wrong exercise number\n");
                break;
        }
    }
}

void lesson4Ex3() {
    Zero(H, W, board);
    SearchSolution(1);
    printf("\n\n");
    Print(H, W, board);
}
