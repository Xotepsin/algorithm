#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> width;
    vector<int> length;
    int w_max=0;
    int l_max=0;
    for(size_t i=0;i<sizes.size();i++){
        width.push_back(sizes[i][0]);
        length.push_back(sizes[i][1]);
    }
    for(size_t i=0;i<sizes.size();i++){

        if(width[i]<length[i]){
            int temp = width[i];
            width[i] = length[i];
            length[i] = temp;
        }
        if(w_max<width[i])
            w_max=width[i];
        if(l_max<length[i])
            l_max=length[i];
    }
    
    answer = w_max * l_max;
    
    return answer;
}