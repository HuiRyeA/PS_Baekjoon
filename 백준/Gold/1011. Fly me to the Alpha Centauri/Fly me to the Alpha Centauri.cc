#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 2^31 : 최대 수행 거리
// 거리마다 작동 횟수는 +1씩 늘어나는 규칙으로
// 11223344... 이런 식으로 점유해나감
// 작동 횟수가 31일 때가 최대
// (2를 시작으로 했을 때 기준이므로 각 케이스당 계산횟수는 최대 62회?)

int main(){
    int t;
    cin >> t;
    while(t--){
        long x, y, d, addition{0}; // x y d : 거리, addtion : 지금까지 횟수에 점유당한 거리
        int cnt{1}, active{0}; // cnt : 기준이 되는 증가량, active : 현재 작동 횟수
        cin >> x >> y;
        d = y - x; // 항상 y > x 이므로

        while(addition < d){ // 점유한 거리보다 실 거리가 작으면 종료
            active++; // 점유거리가 늘어날 때마다 1씩 증가. 조건문 통과시 존재함
            addition += cnt; // 기준 증가량만큼 점유한 후 조건문으로 검사
            if(addition >= d) break;
            active++;
            addition += cnt++; // 2번마다 기준 증가량이 1씩 증가
        }
        cout << active << endl;
    }
    return 0;
}