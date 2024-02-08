#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    while(str.compare(".") != 0){
        stack<char> stk;
        stack<char> stkk;
        for(int i{0}; i < str.length(); i++){
            if(str[i] == '(' ||
                str[i] == ')' ||
                str[i] == '[' ||
                str[i] == ']') stk.push(str[i]);
        }

        while(!stk.empty()){
            if(stkk.empty()){
                stkk.push(stk.top());
                stk.pop();
            } else{
                if(stk.top() == '(' && stkk.top() == ')'){
                    stk.pop();
                    stkk.pop();
                } else if(stk.top() == '[' && stkk.top() == ']'){
                    stk.pop();
                    stkk.pop();
                } else{
                    stkk.push(stk.top());
                    stk.pop();
                }
            }
        }

        if(stkk.empty()) cout << "yes\n";
        else cout << "no\n";

        getline(cin, str);
    }
    return 0;
}