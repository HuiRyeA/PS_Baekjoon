#include <iostream>
#include <algorithm>
using namespace std;

unsigned int coins[2][10001];
int coin[99];

int main(){
    int n, k;
    cin >> n >> k;

    for(int i{0}; i < n; i++){
        int num;
        cin >> num;
        coin[i] = num;
    }

    sort(coin, coin + n);
    coins[0][0] = coins[1][0] = 1;
    for(int i{0}; i < n; i++){
        if(i == 0){
            for(int j{1}; j <= k; j++){
                if(j % coin[i] == 0) coins[0][j] = 1;
            }
        } else if(i % 2 == 1){
            for(int j{1}; j <= k; j++){
                if(j >= coin[i]) 
                coins[1][j] = coins[1][j - coin[i]] + coins[0][j];
                else coins[1][j] = coins[0][j];
            }
        } else{
            for(int j{1}; j <= k; j++){
                if(j >= coin[i]) 
                coins[0][j] = coins[0][j - coin[i]] + coins[1][j];
                else coins[0][j] = coins[1][j];
            }
        }
    }
    
    cout << coins[(n - 1) % 2][k] << endl;
    return 0;
}