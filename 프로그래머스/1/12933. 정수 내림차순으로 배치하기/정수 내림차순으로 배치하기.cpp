#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string str = to_string(n);
    
    // 2. 문자열을 내림차순으로 정렬
    sort(str.begin(), str.end(), greater<char>());
    
    // 3. 정렬된 문자열을 다시 long long으로 변환
    long long answer = stoll(str);
    
    return answer;
}