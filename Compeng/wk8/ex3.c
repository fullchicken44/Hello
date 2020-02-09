#include <stdio.h>

int modulus(int n1, int n2) {
    int result, remainder;
    result = n1/n2;
    remainder = n1 - (n2*result);
    printf("The remainder is: %d\n", remainder );
    return remainder;
}

int main(int argc, char const *argv[]) {
    int re1, re2;
    printf("Enter the divided number:" );
    scanf("%d", &re1 );
    printf("Enter the divide number:" );
    scanf("%d", &re2 );
    modulus(re1, re2);
    return 0;
}
