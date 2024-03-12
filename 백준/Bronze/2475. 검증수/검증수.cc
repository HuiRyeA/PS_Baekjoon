#include <iostream>
using namespace std;

int main(){
    int sum{0};

    for(int i{0}; i < 5; i++){
        int temp{0};
        cin >> temp;

        sum += temp * temp % 10;
    }

    cout << sum % 10 << endl;

    return 0;
}