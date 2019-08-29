//
// Created by Андрей Понамарчук on 2019-08-14.
//

#include "Utils.h"

long numbLength(long numb) {
    long result = 0;
    do {
        result++;
        numb /= 10;
    } while (numb);
    return result;
}

long getLastDigits(long length, long numb) {
    long divisor = pow(10,length);
    return numb % divisor;
}

void customRand(int numbCount) {
    int m = 100; // Вершина последовательности
    int b = 6;
    int a = 8;
    int x = 1;
    for (int i = 0; i < numbCount; i++) {
        x = (a * x + b) % m +1;
        printf("random numb = %d\n",x);
    }
}

int getMaxNumb(int a, int b) {
    int max = a;
    if (max < b) max = b;
    return max;
}

colour getPointColour(Point point) {
    if (((point.x % 2 == 0) && (point.y % 2 == 0)) || ((point.x % 2 != 0) && (point.y % 2 != 0)))
        return black;
    else
        return white;
}

void convertToBin(long n) {
    if (n == 0) {
        return;
    }
    convertToBin(n / 2);
    printf("%d",  n % 2);
}

long powFor(int a, int b) {
    long n = 1;
    while (b) {
        if (b % 2) {
            b--;
            n *= a;
        } else {
            a *= a;
            b /= 2;
        }
    }
    return n;
}

long powRecursion(long a, int b) {
    if (b == 0) return 1;
    else return a * powRecursion(a, b - 1);
}

long powRecursion2(long a, int b) {
    if (b == 0) return 1;
    if ((b % 2) == 0) return powRecursion2(a * a, b / 2);
    else return a * powRecursion2(a, b - 1);
}

int l2Ex3For(int s, int e) {
    int a[100] = { 0 };

    a[s] = 1;

    for (int n = s + 1; n <= e; n++) a[n] = n % 2 == 0 ? a[n - 1] + a[n / 2] : a[n - 1];

    return a[e];
}

int l2Ex3Recursion(int s, int e) {
    if (e < s)return 0;
    if (e == s)return 1;

    return l2Ex3Recursion(s + 1, e) + l2Ex3Recursion(s * 2, e);
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArray(int N, int *a) {
    int i;
    for(i = 0; i < N; i++)
        printf("%6i", a[i]);
    printf("\n");
}

long long int bubbleSort(int N, int *a) {
    long long int swaps = 0;
    long long int loopIterations = 0;
    for(int i = 0; i < N; i++) {
        loopIterations++;
        for (int j = 0; j < N - 1; j++)
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swaps++;
            }
        //printArray(N, a);
    }
    printf("bubbleSort loopIterations = %lld \n", loopIterations);
    return swaps;
}

long long int bubbleSortOptimized(int N, int *a) {
    long long int swaps = 0;
    long long int loopIterations = 0;
    for(int i = 0; i < N - 1; i++) {
        loopIterations++;
        long long int counter = 0;
        for(int j = 0; j < N - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                counter++;
            }
        swaps += counter;
        //printArray(N, a);
            if (counter <= 1) break;
    }
    printf("bubbleSortOptimized loopIterations = %lld \n", loopIterations);
    return swaps;
}

long long int shakerSort(int N, int *a) {
    long long int swaps = 0;
    int left = 0;
    int right = N - 1;
    long long int loopIterations = 0;
    while (left < right) {
        loopIterations++;
        for (int i = left; i < right; i++) {
            if (a[i] > a[i + 1]) {
                swap(&a[i],&a[i + 1]);
                swaps++;
            }
        }
        right--;
        for (int i = right; i < left; i--) {
            if (a[i - 1] > a[i]) {
                swap(&a[i - 1], &a[i]);
                swaps++;
            }
        }
    }
    printf("shakerSort loopIterations = %lld \n", loopIterations);
    return swaps;
}

void fillArray(int N, int *a) {
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % N;
    }
}

int binSearch(int N, int *a, int value) {
    int left = 0;
    int right = N - 1;
    int middle = N / 2;
    long long int loopIterations = 0;
    while ((left <= right) && (a[middle] != value)) {
        loopIterations++;
        if (a[middle] < value) left = middle + 1;
        else right = middle - 1;
        middle = left + (right - left) / 2;
    }
    printf("binSearch loopIterations = %lld \n", loopIterations);
    if (a[middle] == value) return middle;
    else return -1;
}

int SearchSolution(int n) {
    // Если проверка доски возвращает 0, то эта расстановка не подходит
    if (CheckBoard() == 0) return 0;
    // Все кони сделал ход на все клетки. Решение найдено
    if (n == CELLS) return 1;
    int row;
    int col;
    for(row = 0; row < H; row++)
        for(col = 0; col < W; col++)
        {
            if (board[row][col]==0)
            {
    // Расширяем SearchSolution
                board[row][col]=n;
    // Рекурсивно проверяем, ведёт ли это к решению.
                if (SearchSolution(n+1)) return 1;
    // Если мы дошли до этой строки, данное частичное решение
    // не приводит к полному
                board[row][col]=0;
            }
        }
    return 0;

}

// Проверка всей доски
int CheckBoard() {
    int i, j;
    for(i = 0; i < H; i++)
        for(j = 0; j < W; j++)
            if (board[i][j] != 0)
                if (CheckHorse(i, j) == 0)
                    return 0;
    return 1;

}
//проверка определенного коня
int CheckHorse(int x, int y) {
    int i, j;
    for(i = 0; i < H; i++)
        for(j = 0; j < W; j++)
            // Если нашли фигуру
            if (board[i][j] != 0)
                // Если это не наша фигура
                if (!(i == x && j == y)) {
                    int t;
                    if(x>0 && y>1 && board[x-1][y-2]==1) t++;
                    if(x>0 && y<6 && board[x-1][y+2]==1) t++;
                    if(x>1 && y>0 && board[x-2][y-1]==1) t++;
                    if(x>1 && y<7 && board[x-2][y+1]==1) t++;
                    if(x<7 && y>1 && board[x+1][y-2]==1) t++;
                    if(x<7 && y<6 && board[x+1][y+2]==1) t++;
                    if(x<6 && y>0 && board[x+2][y-1]==1) t++;
                    if(x<6 && y<7 && board[x+2][y+1]==1) t++;
                    if (t == 0) return 0;
                }
// Если мы дошли до этого места, то всё в порядке
    return 1;

}

void Print(int n, int m, int (*a)[5]) {
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

}
// Очищаем доску
void Zero(int n, int m, int (*a)[5]) {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            a[i][j] = 0;
}

void Print2(int n, int m, int (*a)[3]) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

}

void Print3(int n, int m, int a[10][8]) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

int max(int a, int b){
    if (a > b) return a;
    else return b;
}

N = -1;
void push(T i) {
    if (N < MaxN) {
        N++;
        Stack[N] = i;
    }
    else
        printf("Stack overflow");
}

T pop() {
    if (N != -1)
        return Stack[N--];
    else
        printf("Stack is empty");
}
