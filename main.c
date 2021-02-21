#include <stdio.h>
// 2869 달팽이는 올라가고 싶다

int main() {
    unsigned long long a, b, v, goal = 0;
    int count = 0;

    scanf("%d %d %d", &a, &b, &v);

    // 달팽이가 정상에 도달한 이후에는 미끄러지지 않으므로 총 거리에서 떨어진 거리를 빼고 나눠 일수를 구해야 최소한의 일수를 구함
    if ((v - b) % (a - b) != 0){ // 정확히 나누어떨어지지 않을 때 달팽이는 한번 더 미끄러지고 올라가므로 하루 더 소요
        count = (v - b) / (a - b);
        count++;
    }
    else
        count = (v - b) / (a - b); // 정확히 나누어 떨어질 때 총 거리 - 떨어진 거리 / 올라간 거리 - 떨어진 거리

    printf("%d\n", count);
    return 0;
}
