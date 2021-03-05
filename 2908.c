#include <stdio.h>
// 백준 2908번 상수
int reverse(int r); // 숫자를 뒤집는 함수

int main() {
    int n1; // 첫번째 숫자
    int n2; // 두번째 숫자
    int r1, r2 = 0; // 뒤집은 숫자
    scanf("%d %d", &n1, &n2); // 수 입력받음

    r1 = reverse(n1);
    r2 = reverse(n2);

    if (r1 > r2)
        printf("%d\n", r1);
    else
        printf("%d\n", r2);

    return 0;
}

int reverse(int r){ // 입력받은 숫자
    int n = 0; // 뒤집은 숫자 결과값 저장
    while(r != 0){ // r이 0이 될 때까지
        n += r % 10; // 입력받은 숫자의 끝자리를 n에 저장
        n *= 10; // 자릿수를 위해 10을 곱함
        r /= 10; // n에 옮겨줬으니 10으로 나눔
    }
    return n / 10; // r이 0이 되었을 때 10이 더 곱해지므로 나눠줌
}
