#include <iostream>
#include <string>
using namespace std;

int fibo(int num) {
    if (num == 1) {
        return 0;
    } else if(num == 2) {
        return 1;
    }

    return fibo(num -1) + fibo(num -2);
}

int main() {
    int num{0};
    cin >> num;

    cout << fibo(num + 1);
    return 0;
}

