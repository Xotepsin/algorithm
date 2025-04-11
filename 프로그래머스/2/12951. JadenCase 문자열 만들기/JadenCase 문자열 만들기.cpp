#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool newWord = true;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            newWord = true; // 공백을 만나면 다음 문자가 새 단어의 시작
        } else {
            if (newWord) {
                // 알파벳이면 대문자로, 아니면 그대로 두고 newWord만 false로 설정
                if (isalpha(s[i])) {
                    s[i] = toupper(s[i]);
                }
                newWord = false;
            } else {
                s[i] = tolower(s[i]); // 단어의 중간이면 무조건 소문자
            }
        }
    }
    
    answer = s;
    
    return answer;
}