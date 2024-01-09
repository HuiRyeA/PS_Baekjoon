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
        star += "*";
        que.push(star);
        stk.push(star);
    }

    for(int i{0}; i < n; i++){
        cout << left << setw(n) << que.front(); 
        cout << right << setw(n) << que.front() << '\n';
        que.pop();
    }

    stk.pop();

    for(int i{0}; i < n - 1; i++){
        cout << left << setw(n) << stk.top(); 
        cout << right << setw(n) << stk.top() << '\n';
        stk.pop();
    }


    return 0;
}