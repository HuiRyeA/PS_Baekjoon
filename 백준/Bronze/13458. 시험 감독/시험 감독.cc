#include <iostream>
using namespace std;

int main(){
    int n, b, c; //시험장, 주감독관, 부감독관 관리인원
    long long result{0}; //결과합
    int a[1000000]; // 최대 시험장 수
    cin >> n;

    for(int i{0}; i < n; i++){ // 기저 입력
        cin >> a[i];
    }
    cin >> b >> c;
    // 주감독관은 최대 1명이므로 시험장 인원에 주감독관 관리 인원을 빼고
    // 난 후 나머지 인원에 부감독관 인원을 생각하자.
    for(int i{0}; i < n; i++){
        if(a[i] - b > 0){
            if((a[i] - b) % c == 0){
                result += (a[i] - b) / c;
            } else{
                result += (a[i] - b) / c;
                result++;
            }
            result++;
        } else{
            result++;
        }
    }

    cout << result << '\n';

    return 0;
}