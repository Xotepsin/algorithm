#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

int convertToDays(const string& date) {
    int y, m, d;
    sscanf(date.c_str(), "%d.%d.%d", &y, &m, &d);
    return y * 12 * 28 + m * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
     unordered_map<char, int> termMap;
    vector<int> answer;
    
        for (const string& term : terms) {
        char type;
        int months;
        sscanf(term.c_str(), "%c %d", &type, &months);
        termMap[type] = months;
    }
    
        int todayDays = convertToDays(today);

    // 2. 개인정보 확인
    for (int i = 0; i < privacies.size(); i++) {
        string date = privacies[i].substr(0, 10);
        char type = privacies[i].back(); 

        int expireDate = convertToDays(date) + termMap[type] * 28 - 1; 
        if (expireDate < todayDays) {
            answer.push_back(i + 1);
        }
    }
    
    
    return answer;
}