#include <iostream>
using namespace std;

int n, l, r, min, ns[100000];
long s, cur{0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> s;
    ::min =  n + 1;
    for(int i{0}; i < n; i++) cin >> ns[i];

    l = r = 0;
    cur = ns[0];
    while(1){
        if(cur > s - 1){
            if(::min > r - l + 1){
                ::min = r - l + 1;
            }
            l++;
            if(l > r && l < n){r = l; cur = ns[l];}
            else if(l > n - 1) break;
            else cur -= ns[l - 1];
        } else{
            r++;
            if(r > n - 1) break;
            else cur += ns[r];
        }
    }

    if(::min == n + 1) cout << "0\n";
    else cout << ::min << '\n';

    return 0;
}