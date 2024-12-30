#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.size()==4 || s.size()==6){
        for(int i=0;i<s.size();i++){
            if(s[i]<47 || s[i]>58) // 1,2,3,4,5,6,7,8,9의 아스키코드는 48~57이다
                answer = false;
        }
    }
    else
        answer = false;
    
    return answer;
    
}