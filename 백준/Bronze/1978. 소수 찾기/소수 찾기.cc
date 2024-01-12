#include <iostream>
using namespace std;

int main(){
    int n, cnt{0};
    cin >> n;

    while(n--){
        int num;
        cin >> num;

        if(num == 2) cnt++;

        for(int i{2}; i < num; i++){
            if(num % i == 0){
                break;
            }
            if(i == num - 1){
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}