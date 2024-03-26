#include <iostream>
#include <algorithm>
using namespace std;

int grains[100000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    for(int i{0}; i < n; i++) cin >> grains[i];

    sort(grains, grains + n);

    while(q--){
        int a, b, baseIdx, boundIdx;
        cin >> a >> b;

        baseIdx = lower_bound(grains, grains + n, a) - grains;
        boundIdx = upper_bound(grains, grains + n, b) - grains;

        cout << boundIdx - baseIdx << '\n';
    }
    return 0;
}