#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int table[50][50], visited[50][50], n, m, min{64};
    cin >> n >> m;

    for(int i{0}; i < n; i++){
        for(int j{0}; j < m; j++){
            char chr;
            cin.get(chr);
            if(chr == '\n') j--;
            else{
                if(chr == 'B') table[i][j] = 0;
                else if(chr == 'W') table[i][j] = 1;
            }
        }
    }
    for(int i{0}; i <= n - 8; i++){
        for(int j{0}; j <= m - 8; j++){
            queue<pair<int, int>> que;
            fill(&visited[0][0], &visited[49][50], 0);
            int cntW{0}, cntB{0};
            que.push(make_pair(i, j));
            visited[i][j] = 1;
            while(!que.empty()){
                pair<int, int> current = que.front();
                que.pop();

                if(visited[current.first][current.second] % 2 == 1){
                    if(table[current.first][current.second] == 1) cntB++;
                    else cntW++;
                } else{
                    if(table[current.first][current.second] == 1) cntW++;
                    else cntB++;
                }

                if(current.first + 1 < n &&
                    current.first + 1 - i < 8 &&
                    visited[current.first + 1][current.second] == 0){
                    visited[current.first + 1][current.second] = visited[current.first][current.second] + 1;
                    que.push(make_pair(current.first + 1, current.second));
                }

                if(current.second + 1 < m &&
                    current.second + 1 - j < 8 &&
                    visited[current.first][current.second + 1] == 0){
                    visited[current.first][current.second + 1] = visited[current.first][current.second] + 1;
                    que.push(make_pair(current.first, current.second + 1));
                }
            }

            int cM = cntB > cntW ? cntW : cntB;
            if(cM < min){
                min = cM;
            }
        }
    }
    cout << min << endl;
    return 0;
}