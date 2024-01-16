#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        cout << str.at(0) << str.at(str.length() - 1) << endl;
    }

    return 0;
}