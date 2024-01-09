#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i{1}; i < n + 1; i++){
        string star{""};
        for(int j{0}; j < (i - 1) * 2 + 1; j++) star += "*";
        cout << right << setw(n + i - 1) << star << '\n'; 
    }

    for(int i{2*n - 3}; i > 0; i -= 2){
        string star{""};
        for(int j{0}; j < i; j++) star += "*";
        cout << right << setw(n + (i / 2)) << star << '\n';
    }

    //2442, 2443번 문제 더하는 문제.
}