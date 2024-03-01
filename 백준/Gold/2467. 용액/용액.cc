#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n, mF{-1}, pF{-1}, minS, minE;
    long ns[100000], min{2000000001};

    cin >> n;
    for(int i{0}; i < n; i++){
        cin >> ns[i];
        if(ns[i] < 0) mF = i;
        else if(pF == -1) pF = i;
    }

    if(pF == -1) {pF = mF--; cout << ns[mF] << ' ' << ns[pF] << '\n'; return 0;}
    else if(mF == -1) {mF = pF++; cout << ns[mF] << ' ' << ns[pF] << '\n'; return 0;}

    int s{mF}, e{pF};
    while(s < e && e < n && s > -1){
        //cout << s << ' ' << e << endl;
        long cur = ns[s] + ns[e];
        if(abs(cur) < min){
            min = abs(cur);
            minS = s;
            minE = e;
        }

        if(cur < 0) e++;
        else if(cur > 0) s--;
        else break;
    }

    if(mF > 0 && abs(ns[mF] + ns[mF - 1]) < min){
        minS = mF - 1; minE = mF;
    }

    if(pF < n - 1 && ns[pF] + ns[pF + 1] < min){
        minS = pF; minE = pF + 1;
    }

    cout << ns[minS] << ' ' << ns[minE] << '\n';
    return 0;
}