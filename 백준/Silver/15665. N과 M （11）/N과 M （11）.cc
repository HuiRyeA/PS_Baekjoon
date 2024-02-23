#include <iostream>
#include <algorithm>
using namespace std;

int n, m, base[7], idx[7];

void tracking(int cnt){
    if(cnt == m){
        for(int i{0}; i < cnt; i++){
            cout << base[idx[i]] << ' ';
        }
        cout << '\n';
        return;
    }

    int pre = -1;
    for(int i{0}; i < n; i++){ // 0 1 2
        if(pre == base[i]) continue;
        idx[cnt] = i;
        pre = base[idx[cnt]];
        tracking(cnt + 1);
    }
}

int main(){
    cin >> n >> m;
    for(int i{0}; i < n; i++) cin >> base[i];
    sort(base, base + n);

    tracking(0);

    return 0;
}