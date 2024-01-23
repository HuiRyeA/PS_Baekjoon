#include <iostream>
using namespace std;

// 1011번 문제하고 동일한 문제

int main(){
    long x, y, d, addition{0}; // x y d : 키차이, addtion : 지금까지 횟수에 점유당한 키차이
    int cnt{1}, active{0}; // cnt : 기준이 되는 증가량, active : 현재 일수
    cin >> x >> y;
    d = y - x; // 항상 y > x 이므로

    while(addition < d){ // 점유한 거리보다 실 거리가 작으면 종료
        addition += cnt; // 기준 증가량만큼 점유한 후 조건문으로 검사
        active++; // 하루가 지나갈 때마다 증가
        if(addition >= d) break;
        addition += cnt++; // 2번마다 기준 증가량이 1씩 증가
        active++;
    }
    cout << active << endl;
    return 0;
}