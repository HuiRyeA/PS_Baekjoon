#include <iostream>
#include <algorithm>
using namespace std;

int n, m, idx[8], base[8], visited[8], limits[8];

void tracking(int cnt){
    if(cnt == m){
        for(int i{0}; i < cnt; i++){
            cout << base[idx[i]] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i{0}; i < n; i++){
        if(visited[i] >= limits[i]) continue;
        visited[i] += 1;
        idx[cnt] = i;
        tracking(cnt + 1);
        visited[i] -= 1;
    }

}

int main(){
    cin >> n >> m;
    for(int i{0}; i < n; i++) cin >> base[i];
    sort(base, base + n);

    for(int i{0}; i < n; i++){
        if(i == 0) limits[i] += 1;
        else{
            if(base[i] == base[i - 1]){
                int baseN{i - 1};
                for(baseN; limits[baseN] == -1 && baseN > -1; baseN--);
                limits[baseN] += 1;
                limits[i] = -1;
            } else{
                limits[i] += 1;
            }
        }
    }

    tracking(0);
    return 0;
}