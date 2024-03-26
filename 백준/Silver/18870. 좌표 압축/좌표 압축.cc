#include <iostream>
#include <algorithm>
using namespace std;

long long xs[1000000], dupli[1000000], sum[1000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i{0}; i < n; i++) {cin >> xs[i]; dupli[i] = xs[i];}

    sort(dupli, dupli + n);

    for(int i{1}; i < n; i++){
        if(dupli[i] != dupli[i - 1]) sum[i] = sum[i - 1] + 1;
        else sum[i] = sum[i - 1];
    }

    for(int i{0}; i < n; i++){
        cout << sum[lower_bound(dupli, dupli + n, xs[i]) - dupli] << ' ';
    }
    return 0;
}