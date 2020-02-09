#include <stdio.h>

int main(int argc, char const *argv[]) {

    char given[] = "abcde";
    int size = 6;
    char temp[5];

    //Duplicate the string without the null.
    for (int i = 0; i < 5; i++) {
        temp[i] = given[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("%c", given[i] );
    }

    printf("\n" );

    //Reverse string.
    int j = 4;
    for (int i = 0; i < 5; i++) {
        given[i] = temp[j];
        j--;
    }

    for (int i = 0; i < 5; i++) {
        printf("%c", given[i]);
    }
    printf("\n");
    return 0;
}
