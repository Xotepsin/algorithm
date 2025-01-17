#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    size_t size = lottos.size();
    int match = 0;
    int unknown = 0;
    for(size_t i=0;i<size;i++)
    {
        if(lottos[i]==0)
        {
            unknown++;
            continue;
        }
        for(size_t j=0;j<size;j++)
        {
            if(lottos[i]==win_nums[j])
                match++;
        }
    }
    
    if(match+unknown>=6)
        match = 6;
    else
        match += unknown;
    
    switch(match){
        case 2:
            answer.push_back(5);
            break;
        case 3:
            answer.push_back(4);
            break;
        case 4:
            answer.push_back(3);
            break;
        case 5:
            answer.push_back(2);
            break;
        case 6:
            answer.push_back(1);
            break;
        default:
            answer.push_back(6);
    }
    
    match -= unknown;
    switch(match){
        case 2:
            answer.push_back(5);
            break;
        case 3:
            answer.push_back(4);
            break;
        case 4:
            answer.push_back(3);
            break;
        case 5:
            answer.push_back(2);
            break;
        case 6:
            answer.push_back(1);
            break;
        default:
            answer.push_back(6);
    }
    
    
    return answer;
}