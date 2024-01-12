#include <iostream>
using namespace std;

int main(){
    int min{101}, sum{0};

    for(int i{0}; i < 7; i++){
        int m;
        cin >> m;

        if(m % 2 != 0){
            sum += m;
            if(min > m){
                min = m;
            }
        }
    }
    if(sum == 0){
        cout << -1 << endl;
        return 0;
    }
    cout << sum << '\n' << min << '\n';
    return 0;
}