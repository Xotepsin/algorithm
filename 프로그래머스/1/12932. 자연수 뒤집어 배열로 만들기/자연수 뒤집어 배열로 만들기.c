#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    long long temp = n;
    int count = 0;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    int* answer = (int*)malloc(count * sizeof(int));
    
    for(int i=0;i<count;i++){
        answer[i] = n % 10;
        n /= 10;
    }
    
    return answer;
}