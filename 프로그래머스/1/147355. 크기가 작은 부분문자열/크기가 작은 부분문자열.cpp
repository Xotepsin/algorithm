#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = p.size();
    vector<int> vec;
    for (size_t i = 0; i <= t.size() - size; i++) {
        string sub = t.substr(i, size);
        
        // 문자열로 비교 (숫자로 변환하지 않음)
        if (sub <= p) {
            answer++;
        }
    }
    
    return answer;
}