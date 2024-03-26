
#include <iostream>
#include <algorithm>
using namespace std;

string guitars[50];

bool gcomp(string a, string b){
    if(a.length() < b.length()) return true;
    else if(a.length() > b.length()) return false;
    else{
        int sumA{0}, sumB{0};

        for(const auto& chr: a){
            if(chr - '0' > 0 && chr - '0' < 10) sumA += chr - '0';
        }
        for(const auto& chr: b){
            if(chr - '0' > 0 && chr - '0' < 10) sumB += chr - '0';
        }
        
        if(sumA < sumB) return true;
        else if(sumA > sumB) return false;
        else{
            for(int j{0}; j < a.length(); j++){
                if(a[j] < b[j]) return true;
                else if(a[j] == b[j]) continue;
                else return false;
                
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    for(int i{0}; i < n; i++) cin >> guitars[i];

    sort(guitars, guitars + n, gcomp);

    for(int i{0}; i < n; i++) cout << guitars[i] << '\n';
    return 0;
}