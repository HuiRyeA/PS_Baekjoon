#include <iostream>
#include <stack>
using namespace std;

int main(){
    long n, min{30};
    cin >> n;

    stack<pair<long, long>> stk;
    stk.push({n, 0});
    while(!stk.empty()){
        pair<long, long> cur = stk.top();
        stk.pop();
        if(cur.first == 1){
            if(min > cur.second) min = cur.second;
        }

        if(cur.second + 1 > min) continue;
        if(cur.first % 3 == 0) stk.push({cur.first / 3, cur.second + 1});
        if(cur.first % 2 == 0) stk.push({cur.first / 2, cur.second + 1});
        stk.push({cur.first - 1, cur.second + 1});
    }
    cout << min << '\n';
    return 0;
}