#include <iostream>
#include <algorithm>
using namespace std;

int base[8];
int n, m;

void pp(int arr[], int cnt){
    if(cnt == m){
        for(int i{0}; i < cnt; i++){
            cout << base[arr[i]] << ' ';
        }
        cout << '\n';
    } else if(cnt < m){
        for(int j{arr[cnt - 1] + 1}; j < n; j++){
            arr[cnt] = j;
            pp(arr, cnt + 1);
            
        }
    }
}

int main(){
    int arr[8];
    cin >> n >> m;
    for(int i{0}; i < n; i++) cin >> base[i];
    sort(base, base + n);
    for(int i{0}; i < n; i++){
        arr[0] = i;
        pp(arr, 1);
    }

    return 0;
}