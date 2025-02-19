#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> player_index;
    for(int i=0;i<players.size();i++)
    {
        player_index[players[i]] = i;
    }
    
    for(auto iter : callings)
    {
        int ranking = player_index[iter];
        
        swap(players[ranking], players[ranking-1]);
        
        player_index[players[ranking]] = ranking;
        player_index[players[ranking-1]] = ranking-1;
    }
    
    for(auto iter : players)
    {
        answer.push_back(iter);
    }
    
    
    return answer;
}