#include <iostream>
using namespace std;

int n, m;

void pp(int arr[], int cnt){
    if(cnt == m){
        for(int i{0}; i < cnt; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    } else if(cnt < m){
        for(int i{1}; i < n + 1; i++){
            arr[cnt] = i;
            pp(arr, cnt + 1);
        }
    }
}

int main(){
    int arr[8];
    cin >> n >> m;
    for(int i{1}; i < n + 1; i++){
        arr[0] = i;
        pp(arr, 1);
    }

    return 0;
}