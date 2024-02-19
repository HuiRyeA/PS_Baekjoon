#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, r, c;
    cin >> n >> r >> c;

    int len = n;
    long long sum{0};

    while(len > 0){
        long long cur = pow(2, len - 1);
        int d1, d2;

        if(r < cur) d1 = 0;
        else d1 = 1;

        if(c < cur) d2 = 0;
        else d2 = 1;

        if(d1 == 0 && d2 == 0){
        } else if(d1 == 1 && d2 == 0){
            r -= cur;
            sum += pow(cur, 2) * 2;
        } else if(d1 == 0 && d2 == 1){
            c -= cur;
            sum += pow(cur, 2) * 1;
        } else{
            r -= cur;
            c -= cur;
            sum += pow(cur, 2) * 3;
        }

        len--;
    }

    cout << sum << '\n';

    return 0;
}