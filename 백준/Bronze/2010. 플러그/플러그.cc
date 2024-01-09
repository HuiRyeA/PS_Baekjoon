#include <iostream>
using namespace std;

int main(){
    int n; // 멀티탭 수
    int result{1}; // 총 연결가능 대수, 집 플러그 하나 = 초기값 1

    cin >> n;
    
    while(n--){
        int tap; //멀티탭의 콘센트 수
        cin >> tap;

        result += tap - 1; //새로 연결하며 콘센트 하나 점유
    }

    cout << result << endl;

    return 0;
}