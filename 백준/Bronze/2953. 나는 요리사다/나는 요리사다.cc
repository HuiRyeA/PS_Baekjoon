#include <iostream>
using namespace std;

int main(){
    int maxScore{0}; // 우승자의 점수
    int idx{0}; // 그 때의 인덱스

    for(int i{0}; i < 5; i++){ // 5명의 참가자
        int sum{0}; // i+1번 선수의 점수
        for(int j{0}; j < 4; j++){
            int temp;
            cin >> temp;
            sum += temp; 
        }

        if(sum > maxScore){ // 현재 우승후보자의 점수보다 i+1번의 점수가 더 크다면
            maxScore = sum; // 바꿔주기
            idx = i;
        }
    }

    cout << idx + 1 << ' ' << maxScore << '\n';
    return 0;
}