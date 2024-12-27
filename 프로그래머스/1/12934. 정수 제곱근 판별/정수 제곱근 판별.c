#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    
    long long sqrt_n = (long long)sqrt(n);

    // 제곱근이 정수인지 확인
    if (sqrt_n * sqrt_n == n) {
        // n이 어떤 정수 x의 제곱이면, (x + 1)의 제곱 반환
        return (sqrt_n + 1) * (sqrt_n + 1);
    } else {
        // 그렇지 않으면 -1 반환
        return -1;
    }
}
