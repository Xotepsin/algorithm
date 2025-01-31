#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;  // 분해된 문자열 개수
    int i = 0;      // 문자열의 현재 위치

    while (i < s.size()) {
        char x = s[i];
        int countX = 0;
        int countOther = 0;

        // 분해 가능한 문자열 찾기
        while (i < s.size()) {
            if (s[i] == x) {
                countX++;
            } else {
                countOther++;
            }

            i++;

            if (countX == countOther) {
                break;
            }
        }

        answer++;
    }
    return answer;
}