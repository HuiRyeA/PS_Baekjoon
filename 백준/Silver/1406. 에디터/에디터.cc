#include <iostream>
#include <list>
using namespace std;

list<char> lt;

int main(){
    list<char>::iterator iter;
    int m;
    char chr;
    string str;
    cin >> str;

    for(int i{0}; i < str.length(); i++){
        lt.push_back(str[i]);
    }
    chr = cin.get();
    cin >> m;
    iter = lt.end();

    while(m--){
        cin >> chr;
        if(chr == 'L' && iter != lt.begin()){
            iter--;
        } else if(chr == 'D' && iter != lt.end()){
            iter++;

        } else if(chr == 'B' && iter != lt.begin()){
            iter = lt.erase(--iter);
        } else if(chr == 'P'){
            char ch;
            cin >> ch;
            lt.insert(iter, ch);
        }
    }

    for(const auto& cr : lt){
        cout << cr;
    }
    cout << '\n';
    
    return 0;
}