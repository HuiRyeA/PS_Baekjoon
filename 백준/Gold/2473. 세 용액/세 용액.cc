#include <iostream>
#include <algorithm>
using namespace std;

int ns[5000], n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long long min{3000000001}, base;
    int minS, minE, minI;

    cin >> n;
    for(int i{0}; i < n; i++) cin >> ns[i];
    sort(ns, ns + n);

    for(int i{1}; i < n - 1; i++){
        int s = i - 1, e = i + 1;
        base = ns[i];

        while(s > -1 && e < n && s < i && e > i){
            long long cur = ns[s] + ns[e] + base;
            if(llabs(cur) < min){
                min = llabs(cur);
                minS = s; minE = e; minI = i;
            }

            if(cur < 0) e++;
            else if(cur > 0) s--;
            else break;
        }
        
        if(min == 0) break;
    }
    // for(int i{0}; i < n; i++) cout << ns[i] << ' ';
    // cout << endl;
    cout << ns[minS] << ' ' << ns[minI] << ' ' << ns[minE] << '\n';
    return 0;
}