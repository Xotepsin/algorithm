#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> ingredient) {
    stack<int> s;
    int answer = 0;
    
    for (int item : ingredient) {
        s.push(item);
        if (s.size() >= 4) {
            vector<int> topItems(4);
            for (int i = 0; i < 4; ++i) {
                topItems[3 - i] = s.top();
                s.pop();
            }

            if (topItems == vector<int>{1, 2, 3, 1}) {
                answer++;
            } else {
                for (int i = 0; i < 4; ++i) {
                    s.push(topItems[i]);
                }
            }
        }
    }
    
    return answer;
}