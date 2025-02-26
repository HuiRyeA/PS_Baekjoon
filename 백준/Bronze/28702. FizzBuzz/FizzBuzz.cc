#include <iostream>
#include <string>

using namespace std;

int main(){
    string arr[3];
    int base;
    cin >> arr[0] >> arr[1] >> arr[2];

    int i;
    for(i = 0; i < 3; i++){
        if(arr[i][0] >= '0' && arr[i][0] <= '9') break;
    }
    base = stoi(arr[i]) + (3 - i);
    if(base % 15 == 0) cout << "FizzBuzz\n";
    else if(base % 3 == 0) cout << "Fizz\n";
    else if(base % 5 == 0) cout << "Buzz\n";
    else cout << base << '\n';

    return 0;
}