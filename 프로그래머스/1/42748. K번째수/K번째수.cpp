#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> first;
    vector<int> end;
    vector<int> index;
    for(size_t i=0;i<commands.size();i++){
        first.push_back(commands[i][0]);
        end.push_back(commands[i][1]);
        index.push_back(commands[i][2]);
    }
    for(size_t i=0;i<commands.size();i++){
        vector<int> temp = array;
        sort(temp.begin()+first[i]-1,temp.begin()+end[i]);
        answer.push_back(temp[first[i]+index[i]-2]);
    }
    
    return answer;
}