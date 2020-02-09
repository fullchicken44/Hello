#include <stdio.h>

void recursive (int *num, char str[], int i) {
    if ((*num) >= 1) {
        str[i] = (*num) % 10 + 48;
        *num = ((*num) - (*num) % 10) / 10;
        i++;
        recursive (num, str, i);
    }
    if ((*num) == 0) {
        str[i] = '\0';
    }
}

int main(int argc, char const *argv[])
{
    int number, counter = 0;
    char string[50];
    printf ("Enter an integer: ");
    scanf ("%d", &number);
    recursive (&number, string, 0);
    /*for (counter = 0; counter < 50; counter++) {
        if (string[counter] != '\0') {
            printf ("%d ", string[counter]);
        }
    }*/

    printf("%s", string);
    return 0;
}
