#include <iostream>
#include <stack>
using namespace std;

int board[20][20], visited[20][20], alphbet[26];
int r, c, max{0};

void tracking(int y, int x, int cnt){
    bool up, down, left, right;

    alphbet[board[y][x]] = 1;
    visited[y][x] = 1;

    up = visited[y - 1][x] == 0 && y > 0 && alphbet[board[y - 1][x]] == 0 ? true : false;
    down = visited[y + 1][x] == 0 && y < r - 1 && alphbet[board[y + 1][x]] == 0 ? true : false;
    left = visited[y][x - 1] == 0 && x > 0 && alphbet[board[y][x - 1]] == 0 ? true : false;
    right = visited[y][x + 1] == 0 && x < c - 1 && alphbet[board[y][x + 1]] == 0 ? true : false;

    if(!up && !down && !left && !right){
        if(cnt > ::max) ::max = cnt;
    } else{
        if(up) tracking(y - 1, x, cnt + 1);
        if(down) tracking(y + 1, x, cnt + 1);
        if(left) tracking(y, x - 1, cnt + 1);
        if(right) tracking(y, x + 1, cnt + 1);
    }

    alphbet[board[y][x]] = 0;
    visited[y][x] = 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> r >> c;
    for(int i{0}; i < r; i++){
        for(int j{0}; j < c; j++){
            char t;
            cin >> t;
            board[i][j] = t - 'A';
        }
    }

    tracking(0, 0, 1);
    cout << ::max << '\n';
    return 0;
}