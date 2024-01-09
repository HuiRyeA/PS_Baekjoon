#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i{2*n - 1}; i > 0; i -= 2){
        string star{""};
        for(int j{0}; j < i; j++) star += "*";

        cout << right << setw(n + (i / 2)) << star << '\n';
        // 총 공간의 확보방법
        // 가장 아래 1개의 별을 기준으로 하면 거기까지가 N개(n-1 / 1 / n - 1)
        // 이후 그 너머 공간은 출력한 별과 1개의 별을 비교하면 그 오른편의 개수가
        // i(현재 개수) / 2 (내림계산) 이다.
    }
    return 0;
}