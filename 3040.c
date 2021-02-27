#include <stdio.h>
// 백준 3040 백설공주와 일곱 난쟁이

int main() {
    int num[9] = {0, }; // 9개의 수를 받을 배열
    int sum = 0; // 9개의 수를 다 더한 수
    int n; // sum에서 100을 뺀 값
    int w1, w2; // 더해서 100이 되지 않는 수

    for (int i = 0; i < 9; i++) // 9개의 수 받음
        scanf("%d", &num[i]);

    for (int i = 0; i < 9; i++) // 9개의 수를 다 더해 sum에 저장
        sum += num[i];

    n = sum - 100; // sum에서 100을 뺀 나머지를 n에 저장

    for (int i = 0; i < 9; i++){ // 더해서 100이 되지 않는 수를 가려내는 이중 for문
        for (int j = 0; j < 9; j++){
            if (num[i] + num[j] == n){ // num의 i번째 배열과 j번째 배열의 합이 n일때
                if (num[i] == num[j]) // 만약 같은 수라면 넘어가기
                    continue;
                else{ // 서로 다른 수일때
                    w1 = i; // i값 w1에 저장
                    w2 = j; // j값 w2에 저장
                }
            }
        }
    }

    for (int i = 0; i < 9; i++){ // 정답 출력 반복문
        if (i == w1) // i가 w1일때 넘어가기
            continue;
        else if (i == w2) // i가 w2일때 넘어가기
            continue;
        else
            printf("%d\n", num[i]); // 더해서 100이 되는 수만 출력
    }
    return 0;
}
