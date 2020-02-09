#include <stdio.h>

int main(int argc, char const *argv[]) {

    //test
    // int *ptr, p = 50;
    // ptr = &p;
    // printf("%d\n", *ptr );
    // printf("%p\n", ptr );

    //lab 5. pointer ex2
    // char a, b, c, *p, *q, *r;
    // p = &a;
    // q = &b;
    // r = &c;
    // printf("%p\n", p );
    // printf("%p\n", q );
    // printf("%p\n", r );


    //ex3
    // int a = 1, b = 2, c = 3;
    // printf("%s%p\n%s%p\n%s%p\n",
    //             "&a =", &a,
    //             "&b =", &b,
    //             "&c =", &c);

    //ex5
    //create an array of 5 integers
    int arr[] = {12, 7, -3, 4, 1};

    // Print array elements using pointer
    int *p = arr;
    while (p <= &arr[4]) {
        printf("%4d", *p );
        p++;
    }
    printf("\n");
    int *p2 = &arr[4];
    // Print array elements in the reverse order
    while (p2 >= &arr[0]) {
        printf("%4d", *p2 );
        p2--;
    }
    printf("\n");
    return 0;
}
