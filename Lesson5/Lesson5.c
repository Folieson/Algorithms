//
// Created by Андрей Понамарчук on 29/08/2019.
//

#include "Lesson5.h"


void lesson5() {
    bool exit = false;
    while (!exit) {
        printf("Please, select exercise (from 1 to 6) or 0 to exit to lesson selection\n");
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
            case 4:
                lesson5Ex4();
                break;
            case 5:
                lesson5Ex5();
                break;
            case 6:
                lesson5Ex6();
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
    printf("-----\n");
}

void lesson5Ex3() {
    int stringSize = 8;
    char expr[] = "{()([]}}";
    bool wrongExpr = false;
    for (int i = 0; i < stringSize; ++i) {
        if((expr[i] == '(') || (expr[i] == '{') || (expr[i] == '['))
            push(expr[i]);
        if((expr[i] == ')') || (expr[i] == '}') || (expr[i] == ']')) {
            char qElem = pop();
            char elem = expr[i];
            if (qElem == '(')
                if (elem != ')') {
                    wrongExpr = true;
                    break;
                }
            if (qElem == '{')
                if (elem != '}') {
                    wrongExpr = true;
                    break;
                }
            if (qElem == '[')
                if (elem != ']') {
                    wrongExpr = true;
                    break;
                }
        }
    }
    if ((N != -1) || wrongExpr) {
        printf("wrong expression\n");
    } else {
        printf("right expression\n");
    }
}

void lesson5Ex4() {
    printf("-----\n");
}

void lesson5Ex5() {
    char infix[30] = {"(5+3)*2-3"};
    char postfix[30];
    char x,token;
    int i,j;    //i-index of infix,j-index of postfix
    j=0;

    for(i=0;infix[i]!='\0';i++) {
        token=infix[i];
        if(isalnum(token))
            postfix[j++]=token;
        else
        if(token=='(')
            push('(');
        else
        if(token==')')
            while((x=pop())!='(')
                postfix[j++]=x;
        else {
            while((precedence(token) <= precedence(Stack[N])) && (N != -1)) {
                x=pop();
                postfix[j++]=x;
            }
            push(token);
        }
    }

    while(N != -1) {
        x=pop();
        postfix[j++]=x;
    }

    postfix[j]='\0';

    for (int k = 0; postfix[k] != '\0' ; ++k) {
        printf("%c",postfix[k]);
    }
    printf("\n");
}

void lesson5Ex6() {
    push2('H');
    push2('E');
    push2('L');
    push2('L');
    push2('O');
    push2(' ');
    push2('Q');
    push2('U');
    push2('E');
    push2('U');
    push2('E');
    while (N2 != Front)
        printf("%c",pop2());
    printf("\n");
}

