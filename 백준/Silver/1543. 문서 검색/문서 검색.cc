#include <iostream>
#include <queue>
using namespace std;

int main(){
    int cnt{0};
    string str, key;
    getline(cin, str);
    getline(cin, key);

    queue<char> que;
    for(int i{0}; i < str.length(); i++){
        que.push(str[i]);
        if(que.size() != key.length()) continue;
        else{
            for(int j{0}; j < key.length(); j++){
                if(que.front() == key[j]){
                    que.push(que.front());
                    que.pop();
                }
                else{
                    for(j; j < key.length(); j++){
                        que.push(que.front());
                        que.pop();
                    }
                    que.pop();
                    break;
                }
                if(j + 1 == key.length()){
                    cnt++;
                    que = queue<char>();
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}