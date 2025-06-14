#include<stdio.h>
union data {
    char a;
    int b;
    double c;
};
int main() {
    union data d;
    d.a='a';
    d.b=43;
    d.c=34.20;
    printf("Size of union: %lu\n", d);
    printf("Value of char: %c\n", d.a);
    printf("Value of of int: %d\n", d.b);
    printf("Value of of double: \n", d.c);
    return 0;
}
