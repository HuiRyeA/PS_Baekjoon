#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string ,string> mp;
    for(int i{0}; i < n; i++){
        string str1, str2;
        cin >> str1 >> str2;

        mp.insert(make_pair(str1, str2));
    }

    for(int i{0}; i < m; i++){
        string str1;
        cin >> str1;
        cout << mp.find(str1)->second << endl;
    }
    return 0;
}