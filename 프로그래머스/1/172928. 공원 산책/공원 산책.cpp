#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int height = park.size();
    int weight = park[0].size();
    for(int i=0;i<height;i++)
    {
        auto it = find(park[i].begin(), park[i].end(), 'S');
        
        if(it != park[i].end())
        {
            answer.push_back(i);
            int dist =distance(park[i].begin(), it);
            answer.push_back(dist);
            break;
        }
        
    }

    
    for(int i=0; i<routes.size();i++)
    {
        int num = stoi(routes[i].substr(2));
        bool isExcute = true;
        char direction = routes[i][0];
        switch(direction)
        {
            case 'N':
                if(answer[0] - num < 0)
                    break;
                else
                {
                    for(int j=1;j<=num;j++)
                    {
                        if(park[answer[0]-j][answer[1]] == 'X')
                        {
                            isExcute = false;
                            break;
                        }
                            
                    }
                    if(isExcute)
                    {
                        answer[0] -= num;
                        break;
                    }
                    
                }
                
            case 'S':
                if(answer[0] + num >= height)
                    break;
                else
                {
                    for(int j=1;j<=num;j++)
                    {
                        if(park[answer[0]+j][answer[1]] == 'X')
                        {
                            isExcute = false;
                            break;
                        }
                            
                    }
                    if(isExcute)
                    {
                        answer[0] += num;
                        break;
                    }
                }
            case 'E':
                if(answer[1] + num >= weight)
                    break;
                else
                {
                    for(int j=1;j<=num;j++)
                    {
                        if(park[answer[0]][answer[1]+j] == 'X')
                        {
                            isExcute = false;
                            continue;
                        }
                            
                    }
                    if(isExcute)
                    {
                        answer[1] += num;
                        break;
                    }
                    
                }
            case 'W':
                if(answer[1] - num < 0)
                    break;
                else
                {
                    for(int j=1;j<=num;j++)
                    {
                        if(park[answer[0]][answer[1]-j] == 'X')
                        {
                            isExcute = false;
                            break;
                        }

                    }
                    if(isExcute)
                    {
                        answer[1] -= num;
                        break;
                    }
                }
        }     
    }
    
    return answer;
}