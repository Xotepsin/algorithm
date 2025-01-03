#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (char c : s) {
        if (c >= 'a' && c <= 'z') { // 소문자 처리
            c = 'a' + (c - 'a' + n) % 26;
        } else if (c >= 'A' && c <= 'Z') { // 대문자 처리
            c = 'A' + (c - 'A' + n) % 26;
        }
        answer += c; // 변환된 문자 추가
    }
    return answer;
}