#include <stdio.h>

int main() {
    system("cls");
    printf("%d", factorial(5));
    return 0;
}

int factorial(int num) {
    if(num == 1 || num == 0) return 1;
    return num*factorial(num-1);
}