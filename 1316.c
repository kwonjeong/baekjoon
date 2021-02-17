#include <stdio.h>
#include <string.h>
// 1316 그룹 단어 체커
int check(char arr[], int n);

int main() {
    int n = 0; // 단어의 개수
    char word[100]; // 단어를 받을 배열
    int length = 0; // 단어의 길이
    int sum = 0; // 그룹 단어의 개수

    scanf("%d", &n); // 단어의 개수 n을 입력받음

    for (int i = 0; i < n; i++){ // 단어 수만큼 반복
        scanf("%s", word); // 단어 입력받음
        length = strlen(word); // 단어의 길이
        sum += check(word, length); // check 함수에서 sum 나온 값의 합
    }
    printf("%d\n", sum); // 그룹 단어의 개수 출력

    return 0;
}

int check(char arr[], int n){ // 단어배열, 단어길이
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){ // i번째와 j번째의 값이 같을 경우
                if (j - i > 1) // i번째와 j번째의 떨어져 있는 값이 1보다 크고
                    if (arr[j] != arr[j - 1]) // j번째 배열과 그 바로 뒤의 배열이 같지 않다면
                        return 0; // 0 리턴
            }
        }
    }
    return 1; // 통과하면 1 리턴
}
