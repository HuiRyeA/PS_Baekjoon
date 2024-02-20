#include <iostream>
#include <algorithm>
using namespace std;

long field[125251];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    for(int i{0}; i < n; i++){
        int floor = i * (i + 1) / 2;
        for(int j{1}; j <= 1 + i; j++){
            cin >> field[floor + j];
            if(i == 0) continue;
            if(j == 1) field[floor + j] += field[floor + j - i];
            else if(j == 1 + i) field[floor + j] += field[floor + j - i - 1];
            else field[floor + j] += max(field[floor + j - i], field[floor + j - i - 1]);
        }
    }

    cout << *max_element(field + (n * (n - 1) / 2) + 1, field + (n * (n + 1) / 2) + 1);

    return 0;
}