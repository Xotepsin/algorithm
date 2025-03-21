#include <string>
#include <sstream>
#include <limits>

using namespace std;

string solution(string s) {
    string answer = "";
    istringstream iss(s);
    int num;
    int minVal = numeric_limits<int>::max();
    int maxVal = numeric_limits<int>::min();

    while (iss >> num) {
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }
    
    answer = to_string(minVal) + " " + std::to_string(maxVal);
    
    return answer;
}