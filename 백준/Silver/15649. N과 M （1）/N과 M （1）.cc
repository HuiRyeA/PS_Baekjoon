#include <iostream>
using namespace std;

int n, m;

void pp(int arr[], int cnt){
    if(cnt != m){
        for(int i{1}; i < n + 1; i++){
            for(int j{0}; j < cnt; j++){
                if(i == arr[j]){
                    break;
                }
                if(j == cnt - 1){
                    arr[cnt] = i;
                    pp(arr, cnt + 1);
                }
            }
        }
    } else if(cnt == m){
        for(int j{0}; j < cnt; j++){
            cout << arr[j] << ' ';
        }
        cout << '\n';
    }
}

int main(){
    cin >> n >> m;

    for(int j{1}; j < n + 1; j++){
        int arr[8], cnt{0};
        arr[cnt] = j;
        pp(arr, cnt + 1);
    }

    return 0;
}