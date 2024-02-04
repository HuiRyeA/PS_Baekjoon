#include <iostream>
using namespace std;

int main(){
    int n, tcnt{0}, fcnt{0};
    cin >> n;

    for(int i{1}; i < n + 1; i++){
        int current = i;
        while(current % 2 == 0){
            current /= 2; tcnt++;
        }
        while(current % 5 == 0){
            current /= 5; fcnt++;
        }
    }

    cout << min(tcnt, fcnt) << endl;
    return 0;
}