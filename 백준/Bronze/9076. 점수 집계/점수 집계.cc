#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int arr[5];
        for(int i{0}; i < 5; i++){
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + 5);
        
        if(arr[3] - arr[1] > 3){
            printf("KIN\n");
            continue;
        }

        int sum{0};
        sum += arr[1] + arr[2] + arr[3];

        printf("%d\n", sum);
    }

    return 0;
}