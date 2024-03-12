#include <iostream>
#include <queue>
using namespace std;

queue<int> que;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;

    int num;
    cin >> num;
    while(num != -1){
        if(num == 0) que.pop();
        else if(que.size() < n){
            que.push(num);
        }
        cin >> num;
    }
    if(que.empty()) cout << "empty\n";
    while(!que.empty()){
        cout << que.front() << '\n';
        que.pop();
    }
    return 0;
}