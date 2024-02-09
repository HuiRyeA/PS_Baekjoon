#include <iostream>
using namespace std;

int main(){
    int arr[1000], n, k;
    cin >> n >> k;

    for(int i{0}; i < n; i++){
        arr[i] = i + 1;
    }

    int idx{-1};
    cout << '<';
    for(int i{0}; i < n; i++){
        for(int j{0}; j < k; j++){
            idx++;
            if(idx == n) idx = 0;
            if(arr[idx] == -1) j--;
        }

        cout << arr[idx];
        if(i != n - 1) cout << ", ";
        arr[idx] = -1; 
    }
    cout << '>' << endl;
    return 0;
}