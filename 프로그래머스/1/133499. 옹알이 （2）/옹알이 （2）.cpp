#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> babbling) {

    vector<string> possible_syllables = {"aya", "ye", "woo", "ma"};

    int answer = 0;

    for (const string& word : babbling) {
        string temp_word = word;
        string prev_syllable = "";
        bool is_valid = true;

        while (!temp_word.empty()) {
            bool found = false;
            for (const string& syllable : possible_syllables) {
                if (temp_word.find(syllable) == 0) { // 음절이 맨 앞에 위치
                    if (syllable == prev_syllable) {
                        is_valid = false; // 같은 음절이 연속되면 유효하지 않음
                        break;
                    }
                    prev_syllable = syllable;
                    temp_word = temp_word.substr(syllable.length());
                    found = true;
                    break;
                }
            }
            if (!found) {
                is_valid = false; // 더 이상 발음할 수 없는 부분이 있으면 유효하지 않음
                break;
            }
        }

        if (is_valid) {
            answer++;
        }
    }
    
    
    return answer;
}