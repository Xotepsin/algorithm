#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    // 수포자들의 답안 패턴
    vector<int> person1 = {1, 2, 3, 4, 5};
    vector<int> person2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> person3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    // 점수 카운팅
    vector<int> scores(3, 0);

    for (size_t i = 0; i < answers.size(); ++i) {
        if (answers[i] == person1[i % person1.size()]) scores[0]++;
        if (answers[i] == person2[i % person2.size()]) scores[1]++;
        if (answers[i] == person3[i % person3.size()]) scores[2]++;
    }

    // 최고 점수 찾기
    int maxScore = *max_element(scores.begin(), scores.end());

    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i] == maxScore) {
            answer.push_back(i + 1);
        }
    }

    // 오름차순 정렬 (이미 자연적으로 정렬된 상태일 가능성이 높지만 명시적으로 처리)
    sort(answer.begin(), answer.end());
    
    return answer;
}