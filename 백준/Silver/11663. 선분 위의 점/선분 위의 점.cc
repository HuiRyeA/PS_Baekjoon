#include <iostream>
#include <algorithm>
using namespace std;

int line[100000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for(int i{0}; i < n; i++) cin >> line[i];

    sort(line, line + n);

    while(m--){
        int s, e;
        cin >> s >> e;

        cout << upper_bound(line, line + n, e) - lower_bound(line, line + n, s) << '\n';
    }

    return 0;
}