#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    stack<char> stk;
    int flag = 2; // 2 : init 0 : before ')' 1 : before '('
    long long sum{0};

    cin >> str;

    for(auto ch : str){
        if(ch == '('){
            flag = 1;
            stk.push(ch);
        } else if(ch == ')'){
            if(flag == 0);
            else {
                flag = 0;
                sum += stk.size() - 1;
            }
            stk.pop();
        }
    }
    cout << sum << endl;
    return 0;
}