#include <iostream>
#include <map>
using namespace std;
map<string, string> dic;

int main(){
    int n;
    cin >> n;

    for(int i{0}; i < n; i++){
        string str, lstr;
        cin >> str;
        if(str.length() < 10) lstr = "00" + to_string(str.length()) + str;
        else if(str.length() < 100 ) lstr = "0" + to_string(str.length()) + str;
        

        dic.insert(make_pair(lstr, str));
    }

    for(pair<string, string> p: dic){
        cout << p.second << endl;
    }
    return 0;
}