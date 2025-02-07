#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    
    for(size_t i=0;i<s.size();i++)
    {
        size_t pos = alphabet.find(s[i]);
        int count = 0;
        while(true)
        {
            if(count == index)
            {
                answer += alphabet[pos];
                break;
            }
            pos = (pos+1)%26;
            size_t temp = skip.find(alphabet[pos]);
            if(temp != string::npos)
            {
                continue;
            }
            else
            {
                count++;
            }
            
        }
    }
    
    return answer;
}