#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<int> ternary;
    int answer = 0;
    while(n!=0){
        ternary.push_back(n%3);
        n /= 3;
    }
    
    int exponent = 0;
    for (int i = ternary.size()-1; i >= 0; i--) {
        answer += ternary[i] * pow(3, exponent++);
    }
    
    return answer;

}
