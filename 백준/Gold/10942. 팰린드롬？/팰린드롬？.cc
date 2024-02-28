#include <iostream>
using namespace std;

int dp[2001][2001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, arr[2001], m;
    cin >> n;
    for(int i{1}; i < n + 1; i++) cin >> arr[i];

    for(int i{1}; i < n + 1; i++){
        for(int j{0}; i + j < n + 1 && i - j > 0; j++){
            if(j == 0 || arr[i + j] == arr[i - j]){
                dp[i + j][i - j] = 1;
                dp[i - j][i + j] =1 ;
            } else break;
        }

        if(i < n){
            for(int j{0}; i + 1 + j < n + 1 && i - j > 0; j++){
                if(arr[i + 1 + j] == arr[i - j]){
                    dp[i + 1 + j][i - j] = 1;
                    dp[i - j][i + 1 + j] = 1;
                } else break;
            }
        }
    }

    cin >> m;
    while(m--){
        int s, e;
        cin >> s >> e;
        if(dp[s][e] == 1) cout << "1\n";
        else cout << "0\n";
    }

}