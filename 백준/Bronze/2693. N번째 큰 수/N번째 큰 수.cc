#define SIZE 10
#include <iostream>
using namespace std;


int arr[SIZE], tarr[SIZE];

void divide(int, int);
void conquer(int, int, int);

int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i{0}; i < SIZE; i++){
            scanf("%d", &arr[i]);
        }

        divide(0, SIZE - 1);
        printf("%d\n", arr[2]);
    }
    return 0;
}

void divide(int left, int right){
    if(left < right){
        int mid = (left + right) / 2;

        divide(left, mid);
        divide(mid + 1, right);
        conquer(left, mid, right);
    }
    return;
}

void conquer(int left, int mid, int right){
    int i{left}, j{mid + 1}, k{left};

    while(i <= mid && j <= right){
        if(arr[i] >= arr[j]){
            tarr[k++] = arr[i++];
        } else{
            tarr[k++] = arr[j++];
        }
    }

    int lidx{i > mid ? j : i};

    while(lidx <= right){
        tarr[k++] = arr[lidx++];
    }

    for(int idx{left}; idx <= right; idx++){
        arr[idx] = tarr[idx];
    }

    return;
}