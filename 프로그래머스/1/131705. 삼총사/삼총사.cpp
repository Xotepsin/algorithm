#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for(int i=0;i<number.size()-2;i++){
        int sum = 0;
        for(int j=i+1;j<number.size()-1;j++){
            for(int k=j+1;k<number.size();k++){
                sum = number[i]+number[j]+number[k];
                if(sum == 0)
                    answer++;
            }
        }
    }
    
    return answer;
}