#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    vector<int> amount;
    for (size_t i = 0; i < food.size(); i++) {
        amount.push_back(food[i] / 2);
    }
    for (size_t i = 1; i < food.size(); i++) { 
        for (int j = 0; j < amount[i]; j++) {
            answer += to_string(i);
        }
    }

    answer += "0";

    for (size_t i = food.size() - 1; i > 0; i--) { 
        for (int j = 0; j < amount[i]; j++) {
            answer += to_string(i);
        }
    }
    
    return answer;
}