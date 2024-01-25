#include <iostream>
using namespace std;

int main(){
    long long x, y, w, s, cross, side2;
    cin >> x >> y >> w >> s;

    if(w * 2 > s) cross = s;
    else cross = w * 2;

    if(w * 2 > s * 2) side2 = s * 2;
    else side2 = w * 2;

    cout << (x > y ? y : x) * cross +
            (x > y ? x - y : y - x) / 2 * side2 +
            (x > y ? x - y : y - x) % 2 * w
            << endl;

    return 0;
}