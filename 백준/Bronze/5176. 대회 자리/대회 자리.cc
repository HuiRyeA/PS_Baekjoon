#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;

    while(k--){
        int p, m, cnt{0}, *arr;
        cin >> p >> m;

        arr = new int[m];
        for(int i{0}; i < m; i++){
            arr[i] = 0;
        }

        for(int i{0}; i < p; i++){
            int n;
            cin >> n;

            if(arr[n - 1] == 0){
                arr[n - 1] = 1;
            } else{
                cnt++;
            }
        }
        delete[] arr;
        cout << cnt << endl;
    }
    return 0;
}