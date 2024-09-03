#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> basket;
    basket.reserve(n);

    for(int i{1}; i <= n; i++){
        basket.push_back(i);
    }

    while(m--){
        int a, b, temp;
        cin >> a >> b;

        temp = basket.at(a - 1);
        basket.at(a - 1) = basket.at(b - 1);
        basket.at(b - 1) = temp; 
    }

    for(const auto& elm : basket){
        cout << elm << ' ';
    }
    cout << endl;
    return 0;
}