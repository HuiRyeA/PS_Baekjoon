#include <iostream>
#include <iomanip>
#include <queue>
#include <stack>
using namespace std;

int main(){
    int n;
    queue<string> que;
    stack<string> stk;

    cin >> n;

    string star = "";
    for(int i{0}; i < n; i++){
        que.push(star);
        stk.push(star);
        star += "*";
    }
    for(int i{0}; i < n; i++){
        cout << right << setw(n - 1) << stk.top();
        cout << '*';
        cout << left << stk.top() << '\n';
        stk.pop();
    }

    que.pop();

    for(int i{0}; i < n - 1; i++){
        cout << right << setw(n - 1) << que.front(); 
        cout << '*';
        cout << left << que.front() << '\n';
        que.pop();
    }

    return 0;
}