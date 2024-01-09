#include <iostream>
using namespace std;

int main(){
    int ts; // 시행 횟수
    cin >> ts;

    while(ts--){
        int result; // 결과
        cin >> result; // 초기값을 자동차의 가격으로

        int option; // 옵션 종류
        cin >> option;
        for(int i{0}; i < option; i++){
            int a, b; // 옵션의 개수와 가격
            cin >> a >> b; 
            
            result += a * b; // 곱하여 결과에 합산
        }
        cout << result << endl;
    }

    return 0;
}