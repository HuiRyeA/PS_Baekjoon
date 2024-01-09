#include <iostream>
using namespace std;

int main(){
    int domino[1001];
    
    domino[0] = 0;
    domino[1] = 3;

    for(int i{2}; i < 1001; i++){
        domino[i] = i * (i + 1) + i * (i + 1) / 2;
    }

    int n;
    long long result{0};

    cin >> n;
    for(int i{1}; i < n + 1; i++){
        result += domino[i];
    }

    cout << result << endl;

    return 0;
}