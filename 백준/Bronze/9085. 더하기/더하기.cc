#include <iostream>
using namespace std;

int main(){
    int cycle;
    cin >> cycle;

    while(cycle--){
        int n, sum{0};
        cin >> n;
        for(int i{0}; i < n; i++){
            int num;
            cin >> num;
            sum += num;
        }
        cout << sum <<'\n';
    }
    return 0;
}