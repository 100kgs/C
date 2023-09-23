#include <stdio.h>

int main() {
    system("cls");
    int i=0;
    while(i++<=10) printf("%d", i); // 1234567891011
    while(++i<=10) printf("%d", i); // 12345678910
    return 0;
}