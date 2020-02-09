#include <stdio.h>
#include <string.h>

void factors(int n) {
    char fac[31];
    int i,a;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("The factors is: %d\n", i );
            }
        }
    }


int main(int argc, char const *argv[]) {
    int num;
    printf("Enter your number:" );
    scanf("%d", &num );
    factors(num);
    return 0;
}
