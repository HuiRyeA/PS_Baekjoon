#include <iostream>
using namespace std;

int main(){
    string str; int cnt{0};
    cin >> str;

    for(const auto& chr : str){
        if((chr == 'a') || (chr == 'i') || (chr == 'e')
        || (chr == 'o') || (chr == 'u')) cnt++;
    }

    cout << cnt << endl;
    return 0;
}