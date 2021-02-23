#include <stdio.h>
// 10869 사칙연산

int main() {
    int A, B;
    scanf("%d %d", &A, &B); // A와 B 입력받기

    if (1 <= A && B < 10000){
        printf("%d\n", A + B); // A + B
        printf("%d\n", A - B); // A - B
        printf("%d\n", A * B); // A x B
        printf("%d\n", A / B); // A / B
        printf("%d\n", A % B); // A / B의 나머지
    }

    return 0;
}
