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
            case 6:
                lesson1Ex6();
                break;
            case 7:
                lesson1Ex7();
                break;
            case 8:
                lesson1Ex8();
                break;
            case 9:
                lesson1Ex9();
                break;
            case 10:
                lesson1Ex10();
                break;
            case 11:
                lesson1Ex11();
                break;
            case 12:
                lesson1Ex12();
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
    printf("Enter natural number\n");
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
    int randomNumb = rand() % 100 + 1;
    printf("std rand numb = %d\n", randomNumb);
    printf("Enter count of random numbers\n");
    int randNumbCount = 0;
    scanf("%d",&randNumbCount);
    customRand(randNumbCount);
}

void lesson1Ex12() {
    int a,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Enter c\n");
    scanf("%d",&c);
    printf("The biggest number = %d\n", getMaxNumb(c,getMaxNumb(a,b)));
}

void lesson1Ex11() {
    int inputNumb = 1;
    double sum = 0;
    int counter = 0;
    while (inputNumb) {
        printf("Enter 0 to get result or any other numb to continue calculating\n");
        scanf("%d",&inputNumb);
        if ((inputNumb % 10) == 8) {
            sum += inputNumb;
            counter++;
        }
    }
    if (counter != 0) printf("result = %g \n", (sum/counter));
}

void lesson1Ex10() {
    printf("Enter n > 0\n");
    int inputNumb = 0;
    scanf("%d",&inputNumb);
    while (inputNumb) {
       if (((inputNumb % 10) % 2) != 0) {
           printf("True\n");
           return;
       }
       inputNumb /= 10;
    }
    printf("False\n");
}

void lesson1Ex9() {
    printf("Enter n\n");
    int n = 0;
    scanf("%d",&n);
    printf("Enter k\n");
    int k = 0;
    scanf("%d",&k);
    int counter = 0;
    while (n >= k) {
        n -= k;
        counter++;
    }
    if (n == 0) k = 0;
    printf("Quotient  = %d, remainder = %d\n",counter,(k-n));
}

void lesson1Ex8() {
    printf("Enter a\n");
    int a = 0;
    scanf("%d",&a);
    printf("Enter b\n");
    int b = 0;
    scanf("%d",&b);

    while (a <= b) {
        printf("%g, %g\n",pow(a,2),pow(a,3));
        a++;
    }
}

void lesson1Ex7() {
    Point point1;
    Point point2;
    printf("Enter x1\n");
    scanf("%d",&point1.x);
    printf("Enter y1\n");
    scanf("%d",&point1.y);
    printf("Enter x2\n");
    scanf("%d",&point2.x);
    printf("Enter y2\n");
    scanf("%d",&point2.y);

    if (getPointColour(point1) == getPointColour(point2))
        printf("Same colour\n");
    else
        printf("Different colour");
}

void lesson1Ex6() {
    printf("Enter your age\n");
    int age = 0;
    scanf("%d",&age);

    if ((age % 10 == 0) || (age % 10 >= 5))
        printf("Тебе %d лет\n",age);
    else if ((age % 10 > 1) && (age % 10 < 5))
        printf("Тебе %d года\n",age);
    else if ((age % 10 == 1) && (age != 11))
        printf("Тебе %d год\n",age);

}

