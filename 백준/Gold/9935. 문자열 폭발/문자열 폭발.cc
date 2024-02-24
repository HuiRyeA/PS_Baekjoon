#include <iostream>
#include <stack>
using namespace std;

string str, target;
char stk[1000000];
stack<int> keys;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> str >> target;
    int slen{str.length()}, tlen{target.length()}, top{-1};
    
    for(int i{0}; i < slen; i++){
        stk[++top] = str[i];
        //cout << (keys.empty() ? -1 : keys.top()) << "A" << endl;
        if(!keys.empty() && stk[top] == target[keys.top()]){
            keys.top()++;
        } else if(stk[top] == target[0]){
            keys.push(1);
        } else if(!keys.empty()){
             keys = stack<int>();
         }

        if(!keys.empty()){
            if(keys.top() == tlen){
                keys.pop();
                top -= tlen;
            }
        }
    }

    if(top == -1) cout << "FRULA";
    else for(int i{0}; i < top + 1; i++) cout << stk[i];
    cout << '\n';
    return 0;
}