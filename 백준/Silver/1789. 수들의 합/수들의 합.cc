#include <iostream>
using namespace std;

int main(){
    long long s, n{1};
    cin >> s;

    do {
        long long sum = n * (n + 1) / 2;

        if(sum > s){
            cout << n - 1 << endl;
            break;
        } else if(sum == s){
            cout << n << endl;
            break;
        }
    } while(n++);

    return 0;
}