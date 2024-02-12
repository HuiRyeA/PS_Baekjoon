#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    while(!(str.compare("0") == 0)){
        for(int i{0}; i < str.length() / 2; i++){
            if(str.at(i) != str.at(str.length() - 1 - i)){
                cout << "no" << endl;
                break;
            }
            if(i == str.length() / 2 - 1){
                cout << "yes" << endl;
            }
        }
        if(str.length() == 1) cout << "yes" << endl;
        cin >> str;
    }

    return 0;
}