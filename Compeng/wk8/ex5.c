#include <stdio.h>
#include <math.h>

float power(float base, int exponent) {
    float answer = 1;

    if (exponent > 0) {
    while (exponent != 0) {
        answer *= base;
        exponent--;
    }
}
    if (exponent < 0) {
        while (exponent != 0) {
            answer *= 1/base;
            exponent++;
        }
    }
    return answer;
}
//Calculate with pow()
float power2(float base, int exponent) {
    float answer2 = 1;

    answer2 = pow(base, exponent);
    return answer2;
}

int main(int argc, char const *argv[]) {
    int e, answer1;
    float b;

    printf("Enter your base:" );
    scanf("%f", &b );
    printf("Enter your exponent:" );
    scanf("%d", &e );
    printf("The answer is: %f\n", power(b, e) );
    printf("The second method: %f\n", power2(b, e) );

    return 0;
}


// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//
//     int base, exp;
//     long long result = 1;
//     printf("Enter base:" );
//     scanf("%d", &base );
//     printf("Enter exp:" );
//     scanf("%d", &exp );
//
//     while (exp != 0) {
//         result *= base;
//         --exp;
//     }
//     printf("Answer: %lld\n", result );
//     return 0;
// }
