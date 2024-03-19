#include <iostream>
using namespace std;
string s;
bool fun(int i, int j){
    if (i >= j) return true;
    if(s[i] == s[j]) return fun(i + 1, j - 1);
    else return false;
}

int main(){
    cin >> s;

    bool flag = fun(0, s.length() - 1);
    if(flag) cout << "true\n";
    else cout << "false\n";
}