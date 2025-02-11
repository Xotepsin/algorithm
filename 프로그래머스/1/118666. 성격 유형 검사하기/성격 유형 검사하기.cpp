#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<string, int> mbti =
    {
        {"R",0},{"T",0},{"C",0},{"F",0},
        {"J",0},{"M",0},{"A",0},{"N",0}
    };
    for(size_t i=0;i<survey.size();i++)
    {
        string temp = survey[i];
        switch(choices[i])
        {
            case 1:
                mbti[string(1,temp[0])] +=3;
                break;
            case 2:
                mbti[string(1,temp[0])] +=2;
                break;
            case 3:
                mbti[string(1,temp[0])] +=1;
                break;
            case 4:
                break;
            case 5:
                mbti[string(1,temp[1])] +=1;
                break;
            case 6:
                mbti[string(1,temp[1])] +=2;
                break;
            case 7:
                mbti[string(1,temp[1])] +=3;
                break;
                
        }
    }
    
    if(mbti["R"]>=mbti["T"])
        answer += "R";
    else
        answer += "T";
    
    if(mbti["C"]>=mbti["F"])
        answer += "C";
    else
        answer += "F";
    
    if(mbti["J"]>=mbti["M"])
        answer += "J";
    else
        answer += "M";
    
    if(mbti["A"]>=mbti["N"])
        answer += "A";
    else
        answer += "N";
    
    
    return answer;
}