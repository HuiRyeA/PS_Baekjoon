#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, min;
bool wall{false};
vector<string> map;
int visited[1000][1000];
int visitedR[1000][1000];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    map.resize(n);
    for(int i{0}; i < n; i++) cin >> map[i];

    queue<pair<int, int>> que;
    que.push({n - 1, m - 1});
    visited[n - 1][m - 1] = 1;
    while(!que.empty()){
        int x{que.front().first}, y{que.front().second};
        que.pop();
        if(map[x][y] == '1') continue;
        for(int i{0}; i < 4; i++){
            if(x + dx[i] > -1 &&
             x + dx[i] < n &&
             y + dy[i] > -1 &&
             y + dy[i] < m &&
             visited[x + dx[i]][y + dy[i]] == 0){
                visited[x + dx[i]][y + dy[i]] += visited[x][y] + 1;
                que.push({x + dx[i], y + dy[i]});
            }
        }

    }
    ::min = visited[0][0] == 0 ? 1000001 : visited[0][0];
    que.push({0, 0});
    visitedR[0][0] = 1;

    while(!que.empty()){
        int x{que.front().first}, y{que.front().second};
        que.pop();
        if(map[x][y] == '1'){
            if(visited[x][y] != 0 && ::min > visited[x][y] + visitedR[x][y] - 1){
                ::min = visited[x][y] + visitedR[x][y] - 1;
            }
            continue;
        }

        for(int i{0}; i < 4; i++){
            if(x + dx[i] > -1 &&
             x + dx[i] < n &&
             y + dy[i] > -1 &&
             y + dy[i] < m &&
             visitedR[x + dx[i]][y + dy[i]] == 0){
                visitedR[x + dx[i]][y + dy[i]] += visitedR[x][y] + 1;
                que.push({x + dx[i], y + dy[i]});
             }
        }
    }

    if(::min == 1000001) cout << -1 << '\n';
    else cout << ::min << '\n';

    return 0;
}