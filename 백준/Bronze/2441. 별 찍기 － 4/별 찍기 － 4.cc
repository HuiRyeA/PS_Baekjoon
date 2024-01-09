#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i{n}; i > 0; i--){
        string star = "";
        for(int j{0}; j < i; j++){
            star += "*";
        }
        cout << std::right; // 우측정렬. 한번만 해도 이후 재설정 전까지 유지
        cout << setw(n) << star << '\n'; // setw() 칸설정
    }
    return 0;
}