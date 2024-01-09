#include <iostream>
#include <iomanip>
#include <stack>
#include <queue>
using namespace std;

string make_star(int n){
    string star{""};
    for(int i{0}; i < n; i++){
        star += "*";
    }
    return star;
} // 별 문자열 생성기

int main(){
    int n;
    cin >> n;
    
    queue<string> que; // 오름차순으로 출력용
    stack<string> stk; // 내림차순으로 출력용

    for(int i{0}; i < n; i++){
        que.push(make_star(i + 1));
        stk.push(make_star(i + 1));
    }

    cout << right;
    while(!que.empty()){
        cout << setw(n) << que.front() << '\n';
        que.pop();
    }

    stk.pop(); // 개수가 n개일때가 겹치므로 제거
    while(!stk.empty()){
        cout << setw(n) << stk.top() << '\n';
        stk.pop();
    }
    return 0;
}