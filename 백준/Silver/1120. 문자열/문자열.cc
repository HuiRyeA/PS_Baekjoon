#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max{0};
    string a, b;
    cin >> a >> b;

    for(int i{0}; i < b.length() - a.length() + 1; i++){
        int cmp{0};
        for(int j{0}; j < a.length(); j++){
            if(a[j] == b[i + j]){
               cmp++;
            }
        }
        if(max < cmp) max = cmp;
    }
    cout << a.length() - max << endl;
}