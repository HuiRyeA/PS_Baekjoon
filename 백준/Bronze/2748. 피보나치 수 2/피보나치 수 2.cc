#include <iostream>
using namespace std;

int main(){
    long long fibo[91];
    fibo[0] = 0;
    fibo[1] = 1;
    
    //최대 피보나치 번째 : 90(max n = 91)
    //미리 계산해두고 출력한다.
    for(int i{2}; i < 91; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    int n;
    cin >> n;

    cout << fibo[n] << endl;
}