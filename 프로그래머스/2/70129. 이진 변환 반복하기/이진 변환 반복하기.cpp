#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    int transformCount = 0;
    int totalZeroRemoved = 0;

    while (s != "1") {
        int zeros = 0;
        int ones = 0;

        for (char c : s) {
            if (c == '0') ++zeros;
            else ++ones;
        }
        totalZeroRemoved += zeros;
        ++transformCount;


        string next;
        while (ones > 0) {
            next += char('0' + (ones % 2));
            ones /= 2;
        }

        reverse(next.begin(), next.end());

        s = next;
    }

    return { transformCount, totalZeroRemoved };
}