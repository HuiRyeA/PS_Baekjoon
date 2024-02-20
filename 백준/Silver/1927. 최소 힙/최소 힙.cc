#include <iostream>
#include <algorithm>
using namespace std;

    long long harr[100001];
    long hsize;

    void hadd(long long num){
        harr[++hsize] = num;

        if(hsize != 1){
            int cur = hsize;

            while(cur != 1){
                if(harr[cur / 2] > harr[cur]){
                    long long temp{harr[cur / 2]};
                    harr[cur / 2] = harr[cur];
                    harr[cur] = temp;
                    cur /= 2;
                } else break;
            }
        }
    }

    void hdel(){
        if(hsize == 0){
            cout << 0 << '\n';
            return;
        }
        cout << harr[1] << '\n';
        harr[1] = harr[hsize--];

        if(hsize > 1){
            int cur = 1;
            while(2 * cur < hsize + 1){
                long long *min{nullptr};
                if(harr[2 * cur] < harr[cur]){
                    min = harr + 2 * cur;
                }

                if(2 * cur + 1 < hsize + 1 && harr[2 * cur + 1] < harr[cur]){
                    if (min == nullptr) min = harr + 2 * cur + 1;
                    else{
                        if(harr[2 * cur] > harr[2 * cur + 1]) min = harr + 2 * cur + 1;
                    }
                }
                if(min == nullptr) break;
                long long temp{*min};
                *min = harr[cur];
                harr[cur] = temp;
                cur = min - harr;
            }
        }
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        long long x;
        cin >> x;
        if(x == 0) hdel();
        else hadd(x);
    }

    return 0;
}