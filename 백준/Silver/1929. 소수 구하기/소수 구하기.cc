#include <iostream>
#include <cmath>
using namespace std;

int arr[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, mid;

    cin >> m >> n;
    mid = sqrt(n);

    for(int i{2}; i < mid + 1; i++){
        if(arr[i] == 0){
            arr[i] == -1;
            int current = i + i;
            while(current < n + 1){
                arr[current] = 1;
                current += i;
            }

            if(i > m - 1) cout << i << '\n';
        }
    }

    for(int i{mid + 1}; i < n + 1; i++){
        if(i > m - 1 && arr[i] == 0) cout << i << '\n';
    }


    return 0;
}