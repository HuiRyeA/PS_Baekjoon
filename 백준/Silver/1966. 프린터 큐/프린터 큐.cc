#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int c;
    cin >> c;
    while(c--){
        int n, m, *max, cnt{0};
        cin >> n >> m;
        int arr[100];

        for(int i{0}; i < n; i++){
            cin >> arr[i];
        }
        
        cnt++;
        max = max_element(arr, arr + n);
        while(max - arr != m){
            arr[max - arr] = 0;
           
            if(max == arr){
                max = max_element(arr + 1, arr + n);
            } else if(max == arr + n - 1){
                max = max_element(arr, arr + n - 1);
            } else{
                int *left, *right;
                left = max_element(arr, max);
                right = max_element(max + 1, arr + n);

                if(*left > *right){
                    max = left;
                } else {
                    max = right;
                }  
            }
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}