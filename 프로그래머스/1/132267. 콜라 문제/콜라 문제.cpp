#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int rest = 0;
    while(n!=0){
        if(n%a != 0){
            if(n/a==0){
                break;
            }
            rest += n%a;
            n /= a;
            n *= b;
            answer += n;
            n += rest;
            rest=0;
        }
        else{
            n /= a;
            n*=b;
            answer += n;
            
        } 
    }
    return answer;
}