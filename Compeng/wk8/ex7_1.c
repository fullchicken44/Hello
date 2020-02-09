// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
//
// int main(int argc, char const *argv[]) {
//
//     char c[] = "12345";
//     int x;
//
//     // for (int i = 0; i < strlen(c); i++) {
//         x = atoi(c);
//     // }
//
//     printf("%d\n", x );
//     return 0;
// }

#include <stdio.h>

int factorial(int n) {
    return (n == 0)? 1: n * factorial(n - 1);
}

int main(int argc, char const *argv[]) {
    int num;
    printf("Enter a positive integer: " );
    scanf("%d", &num );
    printf("%d! is &d\n", num, factorial(num));

    return 0;
}
