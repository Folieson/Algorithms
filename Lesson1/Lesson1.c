//
// Created by Андрей Понамарчук on 2019-08-14.
//

#include "Lesson1.h"

void ex14() {
    long n;
    //int result = 0;
    long currentNumb = 0;
    printf("Введите простое число\n");
    scanf("%lld", &n);

    while (currentNumb < n) {
        //printf("\ncurrentNumb = %lld\n",currentNumb);
        long curNumbSqr = pow(currentNumb,2);
        long curNumbLength = numbLength(currentNumb);
        long lastDigits = getLastDigits(curNumbLength,curNumbSqr);
        //printf("lastDigits = %lld\n",lastDigits);

        if (currentNumb == lastDigits) printf("Automorphic number = %lld\n",currentNumb);

        currentNumb++;
    }
    printf("ex14 finished\n");
}
