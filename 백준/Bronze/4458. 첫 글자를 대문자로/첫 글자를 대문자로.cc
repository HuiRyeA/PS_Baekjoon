#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string str;
        getline(cin, str, '\n');

        for(int i{0}; i < str.length(); i++){
            if(i == 0){
                if(str.at(i) > 96 && str.at(i) < 123) 
                    cout << static_cast<char>(str.at(i) - 32);
                else cout << str.at(i);
            } else cout << str.at(i);  
        }
        cout << endl;
    }
    

}