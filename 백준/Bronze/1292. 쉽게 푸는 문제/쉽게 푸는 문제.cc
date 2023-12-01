#include <iostream>
using namespace std;

int main(){
    long long sum[1001]{0}; // B번째 숫자까지의 합, 0번째는 0
    int count{1}, sub{0}; // 현재 더해야 하는 숫자, 숫자가 더해진 횟수
    for(int i{1}; i < 1001; i++){
        if(count == sub){ // 같을 경우 count를 1 올리고 sub를 0으로 최기화
            count++;
            sub = 0;
        }

        sum[i] += sum[i - 1] + count; // 전단계 합과 더해야 하는 숫자의 합을 저장
        sub++;
    }

    int a, b;
    cin >> a >> b;

    cout << sum[b] - sum[a - 1];

    return 0;
}