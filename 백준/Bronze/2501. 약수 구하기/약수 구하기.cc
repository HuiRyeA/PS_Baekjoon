#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    queue<int> que;
    que.push(1);
    for(int i{2}; i < n + 1; i++){
        if(n % i == 0) que.push(i);
    }
    
    k--;
    while(k--){
        que.pop();
        if(que.empty()){
            cout << 0 << '\n';
            return 0;
        }
    }

    cout << que.front() << '\n';
    return 0;
}