#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[9];
    int sum{-100};

    for(int i{0}; i < 9; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    sort(arr, arr + 9);

    for(int i{0}; i < 9; i++){
        for(int j{0}; j < 9; j++){
            if(i == j) continue;

            if(arr[i] + arr[j] == sum){
                arr[i] = arr[j] = -1;
                
                for(int k{0}; k < 9; k++){
                    if(arr[k] == -1) continue;

                    printf("%d\n", arr[k]);
                }
                return 0;
            }
        }
    }
    return 0;
}