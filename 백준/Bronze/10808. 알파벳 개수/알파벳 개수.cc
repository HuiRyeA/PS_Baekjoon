#include <iostream>
using namespace std;

int main(){
    int arr[26];
    fill(arr, arr + 26, 0);

    string s;
    cin >> s;

    for(const auto& chr : s){
        arr[chr - 97]++;
    }

    for(int i{0}; i < 26; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}