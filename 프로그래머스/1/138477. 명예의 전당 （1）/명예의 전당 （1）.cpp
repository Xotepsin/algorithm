#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> arr;
    for(size_t i=0;i<score.size();i++){
        if(arr.size()<k)
            arr.push_back(score[i]);
        else{
            auto it = min_element(arr.begin(),arr.end());
            int index = distance(arr.begin(),it);
            if(score[i] > arr[index])
                arr[index] = score[i];
        }
        auto it = min_element(arr.begin(), arr.end());
        answer.push_back(*it);
    }
    return answer;
}