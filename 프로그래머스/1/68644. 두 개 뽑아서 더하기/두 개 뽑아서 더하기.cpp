#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int sum=0;
    for(size_t i=0;i<numbers.size()-1;i++){
        for(size_t j=i+1;j<numbers.size();j++){ 
            sum = numbers[i] + numbers[j];
            if(answer.empty())
                answer.push_back(sum);
            else{
                auto it = find(answer.begin(), answer.end(), sum);
                if(it == answer.end())
                    answer.push_back(sum);
            }
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}