#include <iostream>
#include <queue>
using namespace std;

vector<int> tree[100001];
int visited[100001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, v, e;
    cin >> n;

    for(int i{1}; i < n; i++){
        cin >> v >> e;
        tree[v].push_back(e);
        tree[e].push_back(v);
    }

    queue<int> que;
    que.push(1);
    visited[1] = 1;
    while(!que.empty()){
        int cur = que.front();
        que.pop();

        for(int& chr : tree[cur]){
            if(visited[chr] == 0){
                que.push(chr);
                visited[chr] = cur;
            }
        }
    }

    for(int i{2}; i < n + 1; i++) cout << visited[i] << '\n';

    return 0;
}