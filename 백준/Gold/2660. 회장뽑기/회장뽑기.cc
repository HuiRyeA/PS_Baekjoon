#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int table[51][51]{0, }, visited[51], score[51]{0, }, n;
    cin >> n;

    int a, b;
    cin >> a >> b;
    do{
        table[a][b] = 1;
        table[b][a] = 1;

        cin >> a >> b;
    }while(a != -1 && b != -1);

    queue<int> que;
    for(int i{1}; i < n + 1; i++){
        fill(visited, visited + 51, 0);
        que.push(i);
        while(!que.empty()){
            int current = que.front();
            que.pop();

            for(int j{1}; j < n + 1; j++){
                if(table[current][j] == 1 && visited[j] == 0){
                    que.push(j);
                    visited[j] = visited[current] + 1;
                }
            }
        }
        visited[0] = visited[i] = -1;
        int max{0};
        for(int j{1}; j < n + 1; j++){
            if(visited[j] == 0){
                max = -1;
                break;
            } else if(visited[j] > max){
                max = visited[j];
            }
        }

        score[i] = max;
    }
    int min{50};
    for(int i{1}; i < n + 1; i++){
        if(score[i] > 0 && score[i] < min){
            min = score[i];
        }
    }
    vector<int> vt;
    for(int i{1}; i < n + 1; i++){
        // cout << score[i] << ' ';
        if(min == score[i]) vt.push_back(i);
    }
    //cout << endl;

    cout << min << ' ' << vt.size() << endl;
    for(auto& v : vt) cout << v << ' ';
    cout << endl;

    return 0;
}