#include <iostream>
using namespace std;

int main(){
    long long n, m, sum{0}, min{10001};
    cin >> m >> n;

    for(int i{m}; i < n + 1; i++){
        if(i == 2){
            sum += 2;
            min = 2;
        }

        for(int j{2}; j < i; j++){
            if(i % j == 0){
                break;
            }
            if(j == i - 1){
                sum += i;
                if(i < min) min = i;
            }
        }
    }

    if(sum == 0){
        cout << -1 << '\n';
        return 0;
    }

    cout << sum << '\n' << min << '\n';
    return 0;
}