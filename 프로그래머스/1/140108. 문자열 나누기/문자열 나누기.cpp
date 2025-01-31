#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i = 0;

    while (i < s.size()) {
        char x = s[i];
        int countX = 0;
        int countOther = 0;

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
