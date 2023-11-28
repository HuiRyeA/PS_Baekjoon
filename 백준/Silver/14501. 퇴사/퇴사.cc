#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    // 15 : 최대 15일 근무 / 계산의 편의상 money는 16일로 배열 확장
    int schedule[15]; // 각 일자별 상담에 걸리는 시간
    int pay[15]; // 각 일자별 상담 보수
    int money[16]{0, }; // 그 일자 전날까지 벌 수 있는 최대보수

    int n; // 근무일수, n + 1일자 퇴사.
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> schedule[i] >> pay[i]; // 기저 입력
    }

    // i - 1일차까지 진행했을 때, 벌 수 있는 최대보수
    for(int i{1}; i < n + 1; i++){
        int max{0};
        for(int j{0}; j < i; j++){
            if(schedule[j] + j - 1 < i && money[j] + pay[j] > max){
                max = money[j] + pay[j];
            }
        }
        money[i] = max;
    }

    // 1~N일차까지의 합산보수 중 최대치 출력
    int resultMax{0};
    for(int i{0}; i < n + 1; i++){
        if(money[i] > resultMax){
            resultMax = money[i];
        }
    }
    cout << resultMax << endl;

    return 0;
}