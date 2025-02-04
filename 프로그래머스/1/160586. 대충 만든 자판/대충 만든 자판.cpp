#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(string s : targets)
    {
        int count=0;
        bool found_all = true;
        for(char c : s)
        {
            size_t pos;
            size_t temp;
            for(size_t i=0;i<keymap.size();i++)
            {
                temp = keymap[i].find(c);
                if (i == 0) {
                    pos = (temp != string::npos) ? temp + 1 : 999;
                } else {
                    if (temp != string::npos) {
                        pos = std::min(pos, temp + 1);
                    }
                }
            }
            if(pos==999)
            {
                found_all = false;
                break;
            }
            else
            {
                count += pos;
            }
        }
        if(found_all)
        {
            answer.push_back(count);
        }
        else
        {
            answer.push_back(-1);
        }
    }
    return answer;
}