#include <iostream>
using namespace std;

int main(){
    do{
        char chr = cin.get();

        if(chr == '\n') break;
        if(chr > 64 && chr < 91) cout << char(chr + ' ');
        else cout << char(chr - ' ');

    }while(1);

    return 0;
}