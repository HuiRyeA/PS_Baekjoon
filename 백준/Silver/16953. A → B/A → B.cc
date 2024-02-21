#include <iostream>
#include <limits.h>
using namespace std;

long a, b;
long trans(long, long);
long non = LONG_MAX;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b;

    long result = trans(a, 0);

    cout << (result == non ? -1 : result + 1) << '\n';
    return 0;
}


long trans(long cur, long cnt){
    if(cur == b) return cnt;
    else if(cur > b) return non;

    return min(trans(cur * 2, cnt + 1), trans(cur * 10 + 1, cnt + 1));
}