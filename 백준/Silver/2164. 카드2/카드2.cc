#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    queue<int> que;
    scanf("%d", &n);
    for(int i{0}; i < n; i++) que.push(i + 1);

    while(que.size() != 1){
        que.pop();
        que.push(que.front());
        que.pop();
    }

    printf("%d", que.front());

    return 0;
}