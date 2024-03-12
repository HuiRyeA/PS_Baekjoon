#include <iostream>
#include <stack>
using namespace std;

stack<char> stk;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        for(auto& ch : str) {
            if(stk.empty()) stk.push(ch);
            else{
                if(stk.top() == '(' && ch == ')') stk.pop();
                else if(stk.top() == '(' && ch == '(') stk.push(ch);
                else if(stk.top() == ')') stk.push(ch);
            }
        }
        if(stk.empty()) cout << "YES\n";
        else cout << "NO\n";
        stk = stack<char>();
    } 
    return 0;
}