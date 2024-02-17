#include <iostream>
#include <map>
using namespace std;

int n, m;
string str1, str2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m;
    map<string ,string> mp;
    for(int i{0}; i < n; i++){
        cin >> str1 >> str2;
        mp.insert(make_pair(str1, str2));
    }

    for(int i{0}; i < m; i++){
        cin >> str1;
        cout << mp.find(str1)->second << endl;
    }
    return 0;
}