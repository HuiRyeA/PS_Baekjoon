#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, cur{0}, obj;
    int visited[100001]{0};
    int stk;
    string inout{""};

    cin >> n;
    while(n--){
        cin >> obj;
        if(obj > cur){
            for(int i{cur + 1}; i <= obj; i++){
                    if(visited[i] != 0) continue;
                    visited[i] = 1;
                    inout += "+";
            }
            visited[obj] = 2;
            inout += "-";
            cur = obj - 1;
            while(!(visited[cur] == 1 || cur < 1)) cur--;
        } else if(obj == cur){
            cur = obj - 1;
            visited[obj] = 2;
            inout += "-";
            while(!(visited[cur] == 1 || cur < 1)) cur--;
        } else{
            break;
        }
    }

    if(n != -1){
        while(n--) {cin >> obj;}
        cout << "NO\n";
    } else{
        for(auto& elm : inout) cout << elm << '\n';
    }

    return 0;
}