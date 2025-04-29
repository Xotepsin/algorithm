#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer;
    int Mod = 1234567;
    
    int a = 0;
    int b = 1;
    int c;
    
    for(int i=2;i<=n;++i)
    {
        c = (a+b) % Mod;
        a = b;
        b = c;
    }
    
    answer = b;
    return answer;
}