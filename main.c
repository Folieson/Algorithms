//
// Created by Андрей Понамарчук on 2019-08-14.
//
#include <mach/machine.h>
#include "main.h"
int main() {
    printf("Hello!\n");
    menu();
    return 0;
}
void menu() {
    bool exit = false;
    while (!exit) {
        printf("Please, select lesson (from 1 to 8) or 0 to exit\n");
        int lesson = 0;
        scanf("%d",&lesson);
        switch (lesson) {
            case 0:
                exit = true;
                break;
            case 1:
                lesson1();
                break;
            case 2:
                lesson2();
                break;
            case 3:
                lesson3();
                break;
            default:
                printf("Wrong lesson number\n");
                printf("Exit? 0 - No, try again; 1 - Yes, I want to exit\n");
                scanf("%d",&exit);
                break;
        }
    }
}

