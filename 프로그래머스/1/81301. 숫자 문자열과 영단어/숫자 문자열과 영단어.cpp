#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string temp = "";
    string answer_temp = "";
    vector<string> arr = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (char c : s) {
        if (isdigit(c)) { 
            answer_temp += c;
        } else {
            temp += c;
            for (int i = 0; i < arr.size(); i++) {
                if (temp == arr[i]) {
                    answer_temp += to_string(i);
                    temp = ""; //
                    break;
                }
            }
        }
    }
    answer = stoi(answer_temp);
    return answer;
}