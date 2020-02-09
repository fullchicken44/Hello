#include <stdio.h>

void year(int y) {
    if (y % 400 == 0) {
        printf("A leap year\n" );
    } else if (y % 4 == 0) {
        if (y % 100 != 0) {
            printf("A leap year\n" );
        } else {
            printf("not a leap year\n" );
        }
    } else {
    printf("not a leap year\n" );
    }
}


int main(int argc, char const *argv[]) {
    int year2;
    printf("Enter your year:" );
    scanf("%d", &year2 );
    year(year2);
    return 0;
}
