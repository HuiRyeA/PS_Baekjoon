#include <iostream>
#include <stack>
using namespace std;

int main(){
    int tbit[64]{0, }, idx{0};
    long long a, b, c, result{1};
    stack<long long> stk;

    cin >> a >> b >> c;
    a %= c;

    while(b > 1){
        tbit[idx++] = b % 2;
        b /= 2;
    }
    tbit[idx++] = b;
    
    stk.push(a);
    for(int i{1}; i < idx; i++){
        stk.push((stk.top() * stk.top()) % c);
        
    }
    
    for(int i{idx - 1}; i > -1; i--){
        if(tbit[i] == 1) result = (result * stk.top()) % c;
        stk.pop();
    }

    cout << result << '\n';
    return 0;
}