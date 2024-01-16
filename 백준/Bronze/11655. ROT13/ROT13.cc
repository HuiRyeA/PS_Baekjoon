#include <iostream>
using namespace std;

char rot13(char chr){
    char result{chr};
    if(chr > 64 && chr < 91){
        if(chr + 13 > 90) result += 13 - 90 + 64;
        else result += 13;
    } else if(chr > 96 && chr < 123){
        if(chr + 13 > 122) result += 13 - 122 + 96;
        else result += 13;
    }
    return result;
}

int main(){
    string str;
    getline(cin, str, '\n');

    for(char chr : str){
        cout << rot13(chr);
    }
    cout << endl;
    return 0;
}