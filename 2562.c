#include <stdio.h>
// 백준 2562 최댓값

int main() {
    int num[9] = {0, }; // 숫자 9개를 담을 배열
    int maxi = 0; // 최댓값 배열 인덱스
    int max = 0; // 최댓값

    for(int i = 0; i < 9; i++) // 숫자 9개 입력받음
        scanf("%d", &num[i]);

    for(int i = 0; i < 9; i++){ // 최댓값 구하는 반복문
        if (num[i] > max){ // num의 i번째 배열이 max보다 크다면
            max = num[i]; // max엔 i번째 배열(최댓값)이 갱신되고
            maxi = i; // maxi에는 i값 저장
        }
        else
            continue;
    }
    printf("%d\n%d\n", num[maxi], maxi + 1);
    // num에서 maxi번째 값과 배열은 0부터 시작하므로 maxi에 1을 더한 값 출력
    return 0;
}
