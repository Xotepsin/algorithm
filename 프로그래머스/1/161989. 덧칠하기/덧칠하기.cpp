#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    int current_position = 0; // 현재 롤러가 커버할 수 있는 끝 위치

    for (int sec : section) {
        if (sec > current_position) {
            // 현재 롤러가 커버할 수 없는 구역 발견 -> 새로운 롤러 작업 필요
            answer++;
            current_position = sec + m - 1; // 롤러로 커버할 수 있는 끝 위치 갱신
        }
    }


        
    return answer;
}