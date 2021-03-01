#include <stdio.h>

int self_number(int n);

int main(void){
    int num[10001] = { 0, };
    int n;
    for(int i = 1; i <= 10000; i++){
        n = self_number(i);
        if(n <= 10000)
            num[n] = 1;
    }

    for(int i = 1; i <= 10000; i++) {
        if(num[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}

int self_number(int n){
    int num = n;
    while(1){
        num = num + (n % 10);
        n /= 10;
        if (n == 0) break;
    }
    return num;
}