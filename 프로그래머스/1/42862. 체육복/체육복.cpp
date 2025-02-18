#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n, 1);

    for (int l : lost) {
        students[l - 1]--;
    }

    for (int r : reserve) {
        students[r - 1]++;
    }

    for (int i = 0; i < n; i++) {
        if (students[i] == 0) {
            if (i > 0 && students[i - 1] == 2) {
                students[i]++;
                students[i - 1]--;
            } else if (i < n - 1 && students[i + 1] == 2) {
                students[i]++;
                students[i + 1]--;
            }
        }
    }

    for (int s : students) {
        if (s > 0) {
            answer++;
        }
    }
    
    return answer;
}