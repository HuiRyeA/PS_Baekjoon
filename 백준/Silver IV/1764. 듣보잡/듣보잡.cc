#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string nh[500000];
string mh[500000];
int cn[500000];

bool SortCompare(string a, string b)
{
    return a.compare(b) < 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, cnt{0};
    cin >> n >> m;
    for(int i{0}; i < n; i++){
        cin >> nh[i];
    }
    for(int i{0}; i < m; i++){
        cin >> mh[i];
    }
    sort(nh, nh + n, SortCompare);
    sort(mh, mh + n, SortCompare);
    for(int i{0}; i < m; i++){
        int left{0}, right{n - 1}, mid{n / 2};

        while(left <= right){
            int cur{nh[mid].compare(mh[i])};
            if(cur == 0){
                cn[cnt++] = i;
                break;
            } else if(cur < 0){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            mid = (left + right) / 2;
        }
    }
    cout << cnt << '\n';
    for(int i{0}; i < cnt; i++){
        cout << mh[cn[i]] << '\n';
    }

    return 0;
}