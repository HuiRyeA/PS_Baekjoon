#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt(vector<int> &t, long cur){
    int val{0};

    for(vector<int>::iterator iter{t.begin()}; iter != t.end(); iter++){
        val += *iter / cur;
    }
    return val;
}

int main(){
    int k, n;
    cin >> k >> n;

    vector<int> cable(k);
    for(int i{0}; i < k; i++){
        cin >> cable[i];
    }

    //sort(cable.begin(), cable.end());
    int ccnt{0};

    long low{1}, high{*max_element(cable.begin(), cable.end())}, mid;

    while(low <= high){
        mid = (low + high) / 2;
        ccnt = cnt(cable, mid);

        if(ccnt >= n){
            low = mid + 1;
        } 
        else{
            high = mid - 1;
        } 
    }

    cout << low - 1<< endl;

    return 0;
}