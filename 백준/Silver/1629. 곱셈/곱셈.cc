#include <iostream>
using namespace std;

long long a, b, c;

long long divide(long long cur){
    if(cur == 1) return a % c;
    
    if(cur % 2 == 0) return (divide(cur / 2) * divide(cur / 2)) % c;
    else return ((divide(cur / 2) * divide(cur / 2) % c) * (a % c)) % c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b >> c;

    cout << divide(b) << '\n';
    return 0;
}