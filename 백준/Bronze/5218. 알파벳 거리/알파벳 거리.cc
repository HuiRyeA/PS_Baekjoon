#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str1, str2;
        cin >> str1 >> str2;

        cout << "Distances: ";
        for(int i{0}; i < str1.length(); i++){
            if(str1.at(i) <= str2.at(i)) cout << str2.at(i) - str1.at(i) << ' ';
            else cout << (str2.at(i) + 26) - str1.at(i) << ' ';
        }
        cout << endl;
    }

    return 0;
}