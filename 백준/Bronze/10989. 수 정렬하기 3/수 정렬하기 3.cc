#include <iostream>
using namespace std;

int n, max{-1};
int ns[10000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for(int i{0}; i < n; i++){
        int cur;
        cin >> cur;
        if(cur > ::max) ::max = cur;
        ns[cur - 1]++;
    }

    for(int i{0}; i < ::max; i++){
        for(int j{0}; j < ns[i]; j++) cout << i + 1 << '\n';
    }

    return 0;
}