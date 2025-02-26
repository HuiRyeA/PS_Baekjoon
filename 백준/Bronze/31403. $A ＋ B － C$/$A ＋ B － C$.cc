#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int i, cnt{0};
    cout << a + b - c << '\n';

    for(i = b; i > 0; i /= 10 ) cnt++;
    for(i = 0; i < cnt; i++ ) a *= 10;

    cout << a  + b - c << '\n';

    return 0;
}