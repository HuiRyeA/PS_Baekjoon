#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i{1}; i < n + 1; i++){
        string star{""};
        for(int j{0}; j < (i - 1) * 2 + 1; j++) star += "*";
        cout << right << setw(n + i - 1) << star << '\n'; 
        // 좌측 공백까지 포함한 공간에서 우측 정렬
    }   
}