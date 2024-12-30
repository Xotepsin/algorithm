#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int index = 0;
    int min = arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }   
    }
    
    arr.erase(arr.begin()+index);
    answer = arr;
    if(answer.empty())
        answer.push_back(-1);
    
    return answer;
}