#include <iostream>
#include <algorithm>
using namespace std;

void merge(int *arr, int first, int mid, int last){
    int *sorted = new int[last - first + 1];
    int i, j, k;
    i = first;
    j = mid + 1;
    k = 0;

    while(i <= mid && j <= last){
        if(arr[i] <= arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }

    if(i > mid){
        while(j <= last){
            sorted[k++] = arr[j++];
        }
    } else{
        while(i <= mid){
            sorted[k++] = arr[i++];
        }
    }

    i = first;
    k = 0;

    for(int i{first}; i < last + 1; i++, k++){
        arr[i] = sorted[k];
    }

    delete[] sorted;
}

void mergeSort(int *arr, int first, int last){
    if(first < last){
        int mid{(first + last) / 2};
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

    int ns[1000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    for(int i{0}; i < n; i++) cin >> ns[i];

    mergeSort(ns, 0, n - 1);

    for(int i{0}; i < n; i++) cout << ns[i] << '\n';

    return 0;
}