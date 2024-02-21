#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    vector<long long> vt;
    //vector<long long> dp;
    long long all{0};
    int n, m, k;
    cin >> n >> m >> k;

    vt.resize(n); //dp.resize(n, 0);

    cin >> vt[0];
    all += vt[0];
    //dp[0] = vt[0];

    for(int i{1}; i < n; i++){
        cin >> vt[i];
        //dp[i] = vt[i] + dp[i - 1];
        all += vt[i];
    }   

    for(int i{0}; i < m + k; i++){
        int a;
        cin >> a;
        if(a == 1){
            int idx;
            long long nw, dif;
            cin >> idx >> nw;
            dif = nw - vt[idx - 1];
            vt[idx - 1] = nw;

            //for(int j{idx - 1}; j < n; j++) dp[j] += dif;
            all += dif;
        } else if(a == 2){
            int idx1, idx2;
            cin >> idx1 >> idx2;

            long long ts{0};
            if(idx2 - idx1 + 1 < n / 2) {
                for(int j{idx1 - 1}; j < idx2; j++) ts += vt[j];
                cout << ts << '\n';
            } else {
                ts = all;
                for(int j{0}; j < idx1 - 1; j++) ts -= vt[j];
                for(int j{idx2}; j < n; j++) ts -= vt[j];
                cout << ts << '\n';
            }

            //cout << dp[idx2 - 1] - dp[idx1 - 2] << '\n';
        }
    }


    return 0;
}