#include <stdio.h>

void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main(int argc, char const *argv[]) {
    int num1 = 5, num2 = 10;
    printf("Values before swap: num1 = %d, num2 = %d\n", num1, num2 );
    swap(&num1, &num2);
    printf("Values after swap: num1 = %d, num2 = %d\n", num1, num2 );
    return 0;
}
