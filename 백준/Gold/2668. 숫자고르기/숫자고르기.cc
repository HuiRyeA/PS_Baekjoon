#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vt;
    int table[101]{0, }, visited[101]{0, }, curcuit[101]{0, };
    int n;
    cin >> n;

    for(int i{1}; i < n + 1; i++){
        int temp;
        cin >> temp;
        table[i] = temp;
    }

    stack<int> stk;
    for(int i{1}; i < n + 1; i++){
        if(visited[i] == 0){
            stk.push(table[i]);
            visited[i] = i + 100;
        }

        while(!stk.empty()){
            int current = stk.top();
            stk.pop();

            if(visited[current] == 0){
                stk.push(table[current]);
                visited[current] = i + 100;
            } else if(visited[current] == i + 100){
                visited[current] += 1000;
            }
        }
    }

    // for(int i{1}; i < n + 1; i++){
    //     cout << visited[i] << endl;
    // }

    
    for(int i{1}; i < n + 1; i++){
        if(visited[i] > 1000){
            vt.push_back(i);
            stk.push(table[i]);
            while(!stk.empty()){
                int current = stk.top();
                stk.pop();

                if(current != i){
                    vt.push_back(current);
                    stk.push(table[current]);
                }
            }
        }
    }
    sort(vt.begin(), vt.end());
    cout << vt.size() << endl;
    for(auto& v : vt){
        cout << v << endl;
    }

return 0;
}