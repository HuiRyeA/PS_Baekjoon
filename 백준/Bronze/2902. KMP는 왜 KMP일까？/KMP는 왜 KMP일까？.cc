#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    for(auto& chr : str){
        if(chr > 64 && chr < 91) cout << chr;
    }

    return 0;
}