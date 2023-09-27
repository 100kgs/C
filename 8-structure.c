#include <stdio.h>
#include <string.h>

int i;

void outer() {
    printf("%d", i);
}

typedef struct book {
    char name[4];
    float price;
    int page;
}book;

typedef struct library {
    book books[10];
} library;

int main() {
    // system("cls");
    // int i = 1;
    // printf("%d", i);
    // outer();
    book a, b, c;
    strcpy(a.name, "LoR");
    a.price = 527.45f;
    a.page = 420;
    printf("Size: %d\n", sizeof(a));
    // library l;
    // l.books[0] = a;
    // printf("Name: %s \nPrice: %f \nPages: %d\n", a.name, a.price, a.page);
    // printf("Name: %s \nPrice: %f \nPages: %d\n", l.books[0].name, l.books[0].price, l.books[0].page);
    return 0;
}

