#include <iostream>
using namespace std;

int main(){
    int m, n; // 조건. m 이상 n 이하의 자연수
    long long sum{0}; // 총합
    int min{10000}; // 그 중 최소값

    cin >> m >> n;

    for(int i{0}; i < 100; i++){ //가능한 제곱수 1~10000이므로 
        int current{(i + 1) * (i + 1)}; 
        if(current > m - 1 && current < n + 1){ // i를 100까지 하여 제곱수가 m n 범위 내에 있는지
            sum += current;
            if(current < min){
                min = current;
            }
        }
    }
    if(sum == 0){
        cout << -1 << '\n';
        return 0;
    }

    cout << sum << '\n' << min << '\n'; 
    return 0;
}