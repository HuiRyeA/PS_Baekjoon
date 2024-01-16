#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int i{0};
    for(auto& chr : str){
        cout << chr;
        if(++i % 10 == 0) cout << endl;
    }
    return 0;
}