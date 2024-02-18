#include <iostream>
#include <stack>
using namespace std;

int field[50][50];
int visited[50][50];
pair<int, int> direct[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        fill(&field[0][0], &field[49][50], 0);
        fill(&visited[0][0], &visited[49][50], -1);

        int m, n, k, cnt{0};
        cin >> m >> n >> k;

        for(int i{0}; i < k; i++){
            int x, y;
            cin >> x >> y;

            field[x][y] = 1;
        }
        stack<pair<int, int>> stk;
        for(int i{0}; i < m; i++){
            for(int j{0}; j < n; j++){
                if(field[i][j] == 1 && visited[i][j] == -1){
                    stk.push(make_pair(i, j));
                    visited[i][j] = 1;
                    cnt++;

                    while(!stk.empty()){
                        pair<int, int> cur = stk.top();
                        stk.pop();

                        for(int di{0}; di < 4; di++){
                            if(field[cur.first + direct[di].first][cur.second + direct[di].second] == 1 &&
                            cur.first + direct[di].first > -1 &&
                            cur.first + direct[di].first < m &&
                            cur.second + direct[di].second > -1 &&
                            cur.second + direct[di].second < n &&
                            visited[cur.first + direct[di].first][cur.second + direct[di].second] == -1){
                                stk.push({cur.first + direct[di].first, cur.second + direct[di].second});
                                visited[cur.first + direct[di].first][cur.second + direct[di].second] = 1;
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}