#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int x){
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    for(int i=0;i<nums.size()-2;i++)
    {
        int sum=0;
        bool prime;
        for(int j=i+1;j<nums.size()-1;j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                sum=nums[i]+nums[j]+nums[k];
                prime = isPrime(sum);
                if(prime == true)
                {
                    answer++;
                }
            }
        }

    }


    return answer;
}