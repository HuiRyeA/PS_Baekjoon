#include <iostream>
using namespace std;

int n;
double cake[10];

int fun(int pos, double sum){
    if(pos == n){
        if(0.99 <= sum && sum <= 1.01) return 1;
        return 0;
    }

    int skip = fun(pos + 1, sum + 0);
    int select = fun(pos + 1, sum + cake[pos]);
    return skip + select;
}

int main(){
    cin >> n;
    for(int i{0}; i < n; ++i){
        cin >> cake[i];
        cake[i] = 1 / cake[i];
    }
    cout << fun(0, 0);
}