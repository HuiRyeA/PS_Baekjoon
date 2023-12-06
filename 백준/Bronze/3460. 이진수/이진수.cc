#include <iostream>
using namespace std;

int main(){
    int cycle;
    cin >> cycle;

    while(cycle--){
        int num;
        cin >> num;

        for(int i{0}; num != 0; i++){ // 10진수를 2진수로 변환하는 방법
            if(num % 2 == 1){ // 2로 나누기를 반복하기
                cout << i << ' '; // 그 때의 idx가 위치이다
            }
            num /= 2;
        }
    }

    return 0;
}