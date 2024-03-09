#include <iostream>
#include <queue>
using namespace std;

int building[1000], route[1000], now[1000];
int prebuild[1000][1000];
int ridx;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k, w;
        cin >> n >> k;

        for(int i{0}; i < n; i++){
            cin >> building[i];
            now[i] = building[i];
        }
        fill(&prebuild[0][0], &prebuild[n - 1][n], 0);
        ridx = 0;
        for(int i{0}; i < k; i++){
            int x, y;
            cin >> x >> y;
            prebuild[y - 1][x - 1] = 1;
            prebuild[y - 1][y - 1]++;
        }

        cin >> w;

        queue<pair<int, int>> que;
        for(int i{0}; i < n; i++){
            que.push({i, prebuild[i][i]});
        }
        //cout << "FK" << endl;
        while(!que.empty()){
            int curb = que.front().first, curc = que.front().second;
            que.pop();
            // cout << curb << ' ' << curc << endl;
            if(curc == 0){
                route[ridx++] = curb;

                for(int i{que.size()}; i > 0; i--){
                    int tb = que.front().first, tc = que.front().second;
                    que.pop();
                    if(prebuild[tb][curb] == 1) {tc -= 1;}
                    que.push({tb, tc});
                }
            } else{
                que.push({curb, curc});
            }
        }
        
        for(int i{0}; i < ridx; i++){
            int cur = route[i];
            if(cur == w - 1){
                cout << now[cur] << "\n";
                break;
            }
            for(int j{0}; j < n; j++){
                if(cur == j) continue;
                if(prebuild[j][cur] == 1){
                    //cout  << building[j] + now[cur] << "A" << cur<< endl;

                    now[j] = max(building[j] + now[cur], now[j]);
                }
            }
        }

        // for(int i{0}; i < n; i++){
        //     cout << route[i] << ' ';
        // }
        // cout << endl;
    }
    return 0;
}