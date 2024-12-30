#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size()-i-1;j++){
            if(s[j]<s[j+1]){
                char temp;
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    answer = s;
    return answer;
}