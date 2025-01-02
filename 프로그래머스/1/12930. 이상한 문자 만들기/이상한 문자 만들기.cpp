#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> word;
    int index = 0;
    
    // 문자열을 공백 기준으로 나누기
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            word.push_back(s.substr(index, i - index)); // 단어 저장
            index = i + 1; // 새로운 단어의 시작 위치
        }
    }
    
    // 마지막 단어 추가
    word.push_back(s.substr(index, s.size() - index));
    
    // 각 단어를 변환하여 결과 문자열에 추가
    for (int i = 0; i < word.size(); i++) {
        string temp = word[i];
        for (int j = 0; j < temp.size(); j++) {
            if (j % 2 == 0)
                temp[j] = toupper(temp[j]);
            else
                temp[j] = tolower(temp[j]);
        }
        answer += temp; // 단어 뒤에 공백 추가하지 않음
        if (i != word.size() - 1) {
            answer += " "; // 마지막 단어 뒤에는 공백을 추가하지 않음
        }
    }
    return answer;
}