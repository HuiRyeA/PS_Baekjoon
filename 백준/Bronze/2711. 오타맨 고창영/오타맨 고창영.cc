#include <iostream>
using namespace std;

int main(){
    int cycle, miss; // 반복횟수, 오타 위치
    string str;
    cin >> cycle;

    while(cycle--){
        cin >> miss >> str;

        for(int i{0}; i < str.length(); i++){
            if(i + 1 != miss){ // 오타 위치가 아니라면
                cout << str[i]; // 출력
            }
        }
        cout << '\n';
    }

    return 0;
}