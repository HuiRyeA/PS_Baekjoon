#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str, '\n');

    while(str.compare("END") != 0){
        for(int i{str.length() - 1}; i > -1; i--){
            cout << str.at(i);
        }
        cout << endl;
        getline(cin, str, '\n');
    }
    return 0;
}