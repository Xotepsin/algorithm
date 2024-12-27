#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int temp = x;
    int count = 0;
    int sum = 0;
    while(temp > 0){
        count++;
        sum += temp%10;
        temp /= 10;
    }
    if(x % sum == 0){
        answer = true;
    }
    else
        answer = false;
      
    return answer;
}