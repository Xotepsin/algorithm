#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int index_1=0;
    int index_2=0;
    int index_goal=0;
    while(true){
        if(index_goal==goal.size())
        {
            answer = "Yes";
            break;
        }
        
        if(cards1[index_1]==goal[index_goal])
        {
            index_1++;
            index_goal++;
        }
        else
        {
            if(cards2[index_2]==goal[index_goal])
            {
                index_2++;
                index_goal++;
            }
            else
            {
                answer = "No";
                break;
            }
        }

    }
    return answer;
}