//
// Created by Андрей Понамарчук on 2019-08-14.
//

#include "Lesson1.h"
#include "../main.h"

void lesson1() {
    bool exit = false;
    while (!exit) {
        printf("Please, select exercise (from 1 to 14) or 0 to exit to lesson selection\n");
        int exercise = 0;
        scanf("%d",&exercise);
        switch (exercise) {
            case 0:
                exit = true;
                break;
            case 13:
                lesson1Ex13();
                break;
            case 14:
                lesson1Ex14();
                break;
            default:
                printf("Wrong exercise number\n");
                break;
        }
    }
}

void lesson1Ex14() {
    long n;
    long currentNumb = 0;
    printf("Enter prime number\n");
    scanf("%lld", &n);

    while (currentNumb < n) {
        long curNumbSqr = pow(currentNumb,2);
        long curNumbLength = numbLength(currentNumb);
        long lastDigits = getLastDigits(curNumbLength,curNumbSqr);
        if (currentNumb == lastDigits) printf("Automorphic number = %lld\n",currentNumb);

        currentNumb++;
    }
}

void lesson1Ex13() {

}
