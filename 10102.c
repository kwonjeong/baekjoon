#include <stdio.h>
// 백준 10102번 개표

int main() {
    int n = 0; // 심사위원 수
    char vote; // 투표
    int a = 0, b = 0; // 각 투표 수

    scanf("%d", &n); // 심사위원 수 입력받음
    getchar();
    for (int i = 0; i < n; i++){
        if (n == 0)
            break;
        scanf("%c", &vote);
        if (vote == 'A')
            a++;
        else if (vote == 'B')
            b++;
    }

    if (a > b)
        printf("A\n");
    else if (a < b)
        printf("B\n");
    else
        printf("Tie\n");

    return 0;
}
