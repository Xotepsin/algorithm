using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    if(!(price>=1 && price<=2500 && money>=1 && money<=1000000000&& count>=1 && count<=2500))
        return answer;
    
    long long sum=0;
    for(int i=1;i<=count;i++){
        sum += price*i;
    }
    answer = sum - money;
    if(answer > 0)
        return answer;
    else
        return 0;
}