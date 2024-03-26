#include <iostream>
#include <algorithm>
using namespace std;

struct pp{
    int ms{0};
    int msp{0};
};

bool comppp(pp a, pp b){
    if(a.msp > b.msp) return true;
    else if(a.msp == b.msp){
        if(a.ms < b.ms) return true;
    }

    return false;
}

int ns[100];

pp mms[100];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i{0}; i < n; i++) cin >> ns[i];
    for(int i{0}; i < m; i++){
        cin >> mms[i].ms;

        for(int j{0}; j < n; j++){
            char chr;
            cin >> chr;
            if(chr == 'O') mms[i].msp += ns[j];
        }
    }

    sort(mms, mms + m, comppp);
    cout << mms[0].ms << ' ' <<mms[0].msp << '\n';

    return 0;
}