//
// Created by Андрей Понамарчук on 27/08/2019.
//

#include "Lesson4.h"

void lesson4() {
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
                lesson4Ex1();
                break;
            case 2:
                lesson4Ex2();
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

void lesson4Ex1() {
    int A[N_L4][M_L4];
    int i, j;
    for(j = 0; j < M_L4; j++)
        A[0][j] = 1; // Первая строка заполнена единицами
    A[1][0] = 0;
    A[1][1] = 1;
    A[1][2] = 0;
    A[2][0] = 0;
    A[2][1] = 1;
    A[2][2] = 0;
    for(i = 04; i < N_L4; i++) {
        for(j = 0; j < M_L4; j++) {
            if(A[i][j] == 1)
                A[i][j] = A[i-1][j] + A[i][j-1];
            else
                A[i][j] = 0;
        }
    }
    Print2(N_L4, M_L4, A);
}

void lesson4Ex2() {
    char* A = "sa3hfqkha";
    char* B = "aheqcka";

    //A length
    int m = 9;
    //B length
    int n = 7;
    int len[9][7];

    for (int k = 0; k < m; ++k) {
        for (int i = 0; i < n; ++i) {
            len[m][n] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                len[i + 1][j + 1] = len[i][j] + 1;
                printf("len1 = %d\n",len[i + 1][j + 1]);
            } else {
                len[i + 1][j + 1] = max(len[i + 1][j], len[i][j + 1]);
                printf("len2 = %d\n",len[i + 1][j + 1]);
            }
        }
    }
    Print3(9,7,len);
}
