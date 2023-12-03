#include <iostream>
using namespace std;


int main(){
    int n; // 테스트 케이스
    cin >> n;
    while(n--){
        int p;// 선수 수
        long max{0}; // 최고가
        string mname; // 최고가 선수의 이름

        cin >> p;
        for(int i{0}; i < p; i++){
            long c; // 현재 비교할 선수의 가격
            string name;
            cin >> c >> name;
            if(c > max){ // 기록된 최고가보다 크다면 갈아치우기
                max = c;
                mname = name;
            }
        }
        cout << mname << '\n';
    }

    return 0;
}