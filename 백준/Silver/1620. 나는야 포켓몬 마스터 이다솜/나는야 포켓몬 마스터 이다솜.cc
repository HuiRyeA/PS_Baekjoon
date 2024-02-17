#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string dogamI[100000];
vector<pair<string, int>> dogamS;

bool comp(const pair<string, int> &a, const pair<string, int> &b){
    return a.first.compare(b.first) < 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str;
    int n, m;
    cin >> n >> m;

    for(int i{0}; i < n; i++){
        cin >> str;
        dogamI[i] = str;
        dogamS.push_back(make_pair(str, i));
    }

    sort(dogamS.begin(), dogamS.end());

    for(int i{0}; i < m; i++){
        cin >> str;
        if(str.at(0) - '0' >= 0 && str.at(0) - '0' <= 9){
            cout << dogamI[stoi(str) - 1] << '\n';
        } else {
            cout << lower_bound(dogamS.begin(), dogamS.end(), make_pair(str, 1), comp)->second + 1 << '\n';
        }
    }

    return 0;
}