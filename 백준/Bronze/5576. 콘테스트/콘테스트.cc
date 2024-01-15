#include <iostream>
#define MAX_SIZE 10
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

int partition(int list[], int left, int right){
    int pivot, temp;
    int low, high;

    low = left;
    high = right + 1;
    pivot = list[left];

    do{
        do{
            low++;
        } while(low <= right && list[low] < pivot);

        do{
            high--;
        } while(high >= left && list[high] > pivot);

        if(low < high){
            SWAP(list[low], list[high], temp);
        }
    } while(low < high);

    SWAP(list[left], list[high], temp);

    return high;
}

void quick_sort(int list[], int left, int right){
    if(left < right){
        int q = partition(list, left, right);

        quick_sort(list, left, q - 1);
        quick_sort(list, q + 1, right);
    }
    return;
}

int main(){
    int uni1[MAX_SIZE], uni2[MAX_SIZE];

    for(int i{0}; i < MAX_SIZE; i++){
        std::cin >> uni1[i];
    }

    for(int i{0}; i < MAX_SIZE; i++){
        std::cin >> uni2[i];
    }

    quick_sort(uni1, 0, MAX_SIZE - 1);
    quick_sort(uni2, 0, MAX_SIZE - 1);

    std:: cout << uni1[MAX_SIZE - 1] + uni1[MAX_SIZE - 2] + uni1[MAX_SIZE - 3]
        << ' '
        << uni2[MAX_SIZE - 1] + uni2[MAX_SIZE - 2] + uni2[MAX_SIZE - 3]
        << std::endl;

    return 0;
}