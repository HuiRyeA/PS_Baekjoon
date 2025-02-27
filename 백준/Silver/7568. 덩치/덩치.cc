#include <iostream>
#include <vector>
using namespace std;

bool compar(pair<int, int> a, pair<int, int> b){
    if(a.first > b.first && a.second > b.second) return true;
    else return false;
}

int main(){
    int n;
    vector<pair<int, int>> v;
    
    cin >> n;
    v.resize(n);
    for(int i{0}; i < n; i++){
        cin >> v.at(i).first >> v.at(i).second;
    }

    for(int i{0}; i < n; i++){
        int rank{1};
        for(int j{0}; j < n; j++){
            if(i == j) continue;
            if(compar(v.at(j), v.at(i))) rank++;
        }
        cout << rank << ' ';
    }
}