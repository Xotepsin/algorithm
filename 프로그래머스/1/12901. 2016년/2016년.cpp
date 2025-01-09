#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> days_in_month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week_days = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int days = 0;
    for(int i=0;i<a-1;i++){
        days += days_in_month[i];
    }
    days += b-1;
    
    answer = week_days[days%7];
    return answer;
}