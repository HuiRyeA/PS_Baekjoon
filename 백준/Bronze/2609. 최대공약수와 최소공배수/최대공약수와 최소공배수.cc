#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a > b){
    //최대공약수
    //b~1의 순서로 a를 나눌 수 있는지 검사
        for(int i{b}; i > 0; i--){ 
            if(a % i == 0 && b % i == 0){
                cout << i << endl;
                break;
            }
        }
    //최소공배수
    //a에 1~b까지 곱하여 b에 나눠지는지 검사
        for(int i{1}; i < b + 1; i++){
            if(a * i % b == 0){
                cout << a * i << endl;
                break;
            }
        }
    } else if(a == b){
        cout << a << '\n' << a << '\n';
    } else{
        for(int i{a}; i > 0; i--){
            if(b % i == 0 && a % i == 0){
                cout << i << endl;
                break;
            }
        }

        for(int i{1}; i < a + 1; i++){
            if(b * i % a == 0){
                cout << b * i << endl;
                break;
            }
        }
    }

    return 0;
}