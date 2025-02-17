#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
        int lux = numeric_limits<int>::max(); // 최소 세로 좌표
    int luy = numeric_limits<int>::max(); // 최소 가로 좌표
    int rdx = numeric_limits<int>::min(); // 최대 세로 좌표
    int rdy = numeric_limits<int>::min(); // 최대 가로 좌표

    for (int i = 0; i < wallpaper.size(); ++i) {
        for (int j = 0; j < wallpaper[i].size(); ++j) {
            if (wallpaper[i][j] == '#') {
                lux = min(lux, i);
                luy = min(luy, j);
                rdx = max(rdx, i + 1);
                rdy = max(rdy, j + 1);
            }
        }
    }
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    return answer;
}