#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int n, m, ch{0}, del{0};
int cheese[100][100], visited[100][100];

int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    cin >> n >> m;
    for(int i{0}; i < n; i++){
        for(int j{0}; j < m; j++){
            cin >> cheese[i][j];
            if(cheese[i][j] == 1) ch++;
        }  
    }

    queue<pair<int, int>> que, melt;
    stack<pair<int, int>> air;
    que.push({0, 0});
    cheese[0][0] = -1;
    visited[0][0] = 1;
    while(!que.empty()){
        int cx = que.front().first, cy = que.front().second;
        que.pop();
        for(int i{0}; i < 4; i++){
            if(cx + dx[i] > -1 && cy + dy[i] > -1 && cx + dx[i] < n && cy + dy[i] < m &&
            cheese[cx + dx[i]][cy + dy[i]] == 0 &&
            visited[cx + dx[i]][cy + dy[i]] == 0
            ){
                visited[cx + dx[i]][cy + dy[i]] = 1;
                cheese[cx + dx[i]][cy + dy[i]] = -1;
                que.push({cx + dx[i], cy + dy[i]});
            }
        }
    }
    int k;
    for(k = {1}; del < ch; k++){
        fill(&visited[0][0], &visited[n - 1][m], 0);
        for(int i{0}; i < n; i++){
            for(int j{0}; j < m; j++){
                if(cheese[i][j] == 1 && visited[i][j] == 0){
                    visited[i][j] = 1;
                    que.push({i, j});
                    while(!que.empty()){
                        int cx = que.front().first, cy = que.front().second;
                        que.pop();

                        int cnt{0};

                        for(int i{0}; i < 4; i++){
                            if(cx + dx[i] > -1 && cy + dy[i] > -1 && cx + dx[i] < n && cy + dy[i] < m){  
                                if(cheese[cx + dx[i]][cy + dy[i]] == 1 && visited[cx + dx[i]][cy + dy[i]] == 0){
                                    visited[cx + dx[i]][cy + dy[i]] = 1;
                                    que.push({cx + dx[i], cy + dy[i]});
                                }
                                if(cheese[cx + dx[i]][cy + dy[i]] == -1){
                                    cnt++;
                                }
                            }
                        }
                        if(cnt > 1) melt.push({cx, cy});
                    }
                }
            }
        }
        while(!melt.empty()){
            int cx = melt.front().first, cy = melt.front().second;
            del++;
            air.push(melt.front());
            melt.pop();
            cheese[cx][cy] = -1;
        }
        while(!air.empty()){
            int cx = air.top().first, cy = air.top().second;
            air.pop();
            for(int i{0}; i < 4; i++){
                if(cx + dx[i] > -1 && cy + dy[i] > -1 && cx + dx[i] < n && cy + dy[i] < m){  
                    if(cheese[cx + dx[i]][cy + dy[i]] == 0){
                        cheese[cx + dx[i]][cy + dy[i]] = -1;
                        air.push({cx + dx[i], cy + dy[i]});
                    }
                }
                
            }
        }
    }

    cout << k - 1 << '\n';

    return 0;
}