#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;
    
    while(answer < 500){
        if(num == 1){
            return answer;
        }
        if(num % 2 == 0){
            num /= 2;
            answer++;
        }
        else{
            num = num * 3 + 1;
            answer++;
        }
        if(answer == 500)
            return -1;
    }
}