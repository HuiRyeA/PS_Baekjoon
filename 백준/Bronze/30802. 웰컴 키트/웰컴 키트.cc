#include <iostream>
using namespace std;

int main(){
    int n, t, p, orderT, orderP, pSingle;
    int sizes[6];
    cin >> n >> sizes[0] >> sizes[1] >> sizes[2] >> sizes[3] >> sizes[4] >> sizes[5] >> t >> p;

    orderT = 0;
    for(int i{0}; i < 6; i++){
        orderT += sizes[i] / t + (sizes[i] % t == 0 ? 0 : 1);
    }

    cout << orderT << '\n';
    cout << n / p << ' ' << n % p << '\n';

    return 0;
}