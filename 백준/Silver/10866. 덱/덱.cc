#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    deque<int> dq;
    int n;
    cin >> n;

    while(n--){
        string cmd;
        cin >> cmd;

        if(cmd.compare("push_front") == 0){
            int num;
            cin >> num;
            dq.push_front(num);
            
        } else if(cmd.compare("push_back") == 0){
            int num;
            cin >> num;
            dq.push_back(num);
        } else if(cmd.compare("pop_front") == 0){
            if(dq.empty()){
                cout << -1 << '\n';
            } else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }

        } else if(cmd.compare("pop_back") == 0){
            if(dq.empty()){
                cout << -1 << '\n';
            } else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if(cmd.compare("size") == 0){
            cout << dq.size() << '\n';
        } else if(cmd.compare("empty") == 0){
            cout << dq.empty() ? 1 : 0;
            cout << '\n';
        } else if(cmd.compare("front") == 0){
            if(dq.empty()){
                cout << -1 << '\n';
            } else{
                cout << dq.front() << '\n';
            }
        } else if(cmd.compare("back") == 0){
            if(dq.empty()){
                cout << -1 << '\n';
            } else{
                cout << dq.back() << '\n';
            }
        }

    }
    return 0;
}