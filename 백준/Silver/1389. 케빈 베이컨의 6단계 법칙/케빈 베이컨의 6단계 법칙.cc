#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int tag[100][100], visited[100], kb[100];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, v, e;
    cin >> n >> m;

    for(int i{0}; i < m; i++){
        cin >> v >> e;

        tag[v - 1][e - 1] = 1;
        tag[e - 1][v - 1] = 1;
    }

    for(int i{0}; i < n; i++){
        queue<int> que;
        que.push(i);
        fill(visited, visited + n, -1);
        visited[i] = 0;
        while(!que.empty()){
            int cur = que.front();
            que.pop();

            for(int j{0}; j < n; j++){
                if(tag[cur][j] == 1 && visited[j] == -1){
                    que.push(j);
                    visited[j] = visited[cur] + 1;
                }
            }
        }

        for(int j{0}; j < n; j++){
            kb[i] += visited[j];
        }
    }

    cout << min_element(kb, kb + n) - kb + 1 << '\n';
    return 0;
}