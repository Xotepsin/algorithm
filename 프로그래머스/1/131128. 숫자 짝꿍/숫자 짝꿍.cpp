#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    vector<int> countX(10, 0), countY(10, 0);
    
    // X, Y에서 각 숫자의 개수를 셈
    for (char c : X) countX[c - '0']++;
    for (char c : Y) countY[c - '0']++;
    
    // 공통된 숫자들을 저장할 변수
    string answer = "";
    
    // 공통된 숫자를 찾아 answer에 추가
    for (int i = 9; i >= 0; i--) {
        int commonCount = min(countX[i], countY[i]);
        answer.append(commonCount, '0' + i);  // 해당 숫자를 공통된 개수만큼 추가
    }
    
    // 공통된 숫자가 없다면 "-1"을 반환
    if (answer.empty()) {
        return "-1";
    }
    
    // 공통된 숫자가 모두 0일 경우 "0"을 반환
    if (answer[0] == '0') {
        return "0";
    }
    sort(answer.begin(),answer.end(),greater<char>());
    
    
    return answer;
}