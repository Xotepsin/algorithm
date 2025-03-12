#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, set<string>> reports;
    for(const auto& rep : report) {
        istringstream iss(rep);
        string reporter, reported;
        iss >> reporter >> reported;
        reports[reported].insert(reporter);
    }
    
    map<string, int> results;
    for(const auto& id : id_list) {
        results[id] = 0;
    }
    
    for(const auto& p : reports) {
        if(p.second.size() >= k) {
            for(const auto& reporter : p.second) {
                results[reporter]++;
            }
        }
    }
    
    for(const auto& id : id_list) {
        answer.push_back(results[id]);
    }
    
    
    return answer;
}