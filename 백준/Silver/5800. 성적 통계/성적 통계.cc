#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int k;
    cin >> k;

    for(int j{0}; j < k; j++){
        int *arr, n, mgap{0};
        cin >> n;
        arr = new int[n];

        for(int i{0}; i < n; i++){
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + n);
        
        for(int i{1}; i < n; i++){
            if(arr[i] - arr[i - 1] > mgap) mgap = arr[i] - arr[i - 1];
        }
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n"
        , j + 1, arr[n - 1], arr[0], mgap);
        delete[] arr;
    }
    return 0;}