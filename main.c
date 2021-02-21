#include <stdio.h>
// 백준 2476 : 주사위 게임

int main(){
    int n = 0; // 사람 수
    int a, b, c = 0; // 던진 주사위 눈
    int m = 0; // 가장 큰 눈
    int max = 0; // 가장 큰 상금

    scanf("%d", &n); // 사람 수 입력받음
    int price[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c); // 주사위 눈 입력받음
        if(a == b && b == c && a == c) // 세 수가 같을 때
            price[i] = 10000 + a * 1000;
        else if (a == b || b == c || c == a){ // 두 수만 같을 때
            if (a == b || a == c) // a가 b와 c와 같을 때
                price[i] = 1000 + a * 100;
            else if (b == c) // b와 c가 같을 때
                price[i] = 1000 + b * 100;
        }
        else { // 다 다를 때
            if(a > b && a > c) // a가 가장 클때
                m = a;
            else if (b > a && b > c) // b가 가장 클 때
                m = b;
            else if (c > a && c > b) // c가 가장 클 때
                m = c;
            price[i] = m * 100;
        }
        if(price[i] > max)
            max = price[i]; // 가장 큰 상금
    }
    printf("%d\n", max);
}
