#include <iostream>
using namespace std;

int main(){
    int cnt{0};
    string s;
    cin >> s;

    for(auto& chr : s){
        if(chr == ',') cnt++;
    }
    cout << cnt + 1 << endl;

    return 0;
}