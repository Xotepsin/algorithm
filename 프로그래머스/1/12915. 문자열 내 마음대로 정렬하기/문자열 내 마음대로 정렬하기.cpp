#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    for (size_t i = 0; i < strings.size() - 1; i++) {
        for (size_t j = 0; j < strings.size() - i - 1; j++) {
            if (strings[j][n] > strings[j + 1][n]) {
                swap(strings[j], strings[j + 1]);
            } else if (strings[j][n] == strings[j + 1][n]) {
                if (strings[j] > strings[j + 1]) {
                    swap(strings[j], strings[j + 1]);
                }
            }
        }
    }
    answer = strings;
    return answer;
}