#include <string>
#include <vector>

using namespace std;

int get_count_divisor(int n)
{
    if( n == 1 )
    	return 1;
    int divisorCount = 2;
    for( int i=2 ; i <= n/2 ; i++ ) {
    	if( n % i == 0 ){
        	divisorCount++;
     	}
    }
    return divisorCount;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i=1; i<=number;i++)
    {
        int count=get_count_divisor(i);
        if(count > limit)
        {
            answer += power;
        }
        else
        {
            answer += count;
        }
    }
    
    return answer;
}