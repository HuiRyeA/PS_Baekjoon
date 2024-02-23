#include<iostream>
#include<algorithm>
using namespace std;


int n, m, base[8], idx[8];

void tracking(int cnt){
    if(cnt == m){
        for(int i{0}; i < cnt; i++){
            cout << base[idx[i]] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i{0}; i < n; i++){
        if(cnt != 0 && idx[cnt - 1] > i) continue;
        idx[cnt] = i;
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