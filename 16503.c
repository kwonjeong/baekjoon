#include <stdio.h>
// 백준 16503번 괄호 없는 사칙연산
int result(int x, int y, char a); // result 함수

int main() {
    int x, y, z; // 숫자 3개
    char a, b; // 연산기호 2개
    int c1, c2; // c1 : 오른쪽의 두개 숫자 선계산, c2 : 왼쪽 두개 숫자 선계산
    scanf("%d %c %d %c %d", &x, &a, &y, &b, &z); // 식 받기

    c1 = result(x, y, a);  // x와 y의 값 먼저 계산해 c1 저장
    c1 = result(c1, z, b); // c1에 저장되어 있는 값과 z값을 계산해 다시 저장
    c2 = result(y, z, b); // y와 z값 먼저 계산해 c2 저장
    c2 = result(x, c2, a); // c2에 저장되어 있는 값과 x값을 계산해 다시 저장
    // 이때 x,연산기호, c2순으로 계산이 이루어져야 하므로 순서대로 작성

    if (c1 > c2) // c1이 c2보다 크면 c2 먼저 출력
        printf("%d\n%d\n", c2, c1);
    else // 아닐경우 c1 먼저 출력
        printf("%d\n%d\n", c1, c2);

    return 0;
}

int result(int x, int y, char a){ // x와 y값을 연산기호에 맞게 계산한 값을 출력
    int result = 0;
    if (a == '+')
        result += x + y;
    else if(a == '-')
        result += x - y;
    else if(a == '*')
        result += x * y;
    else if(a == '/')
        result += x / y;
    return result;
}
