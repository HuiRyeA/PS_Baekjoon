#include <iostream>
#include <algorithm>
using namespace std;

int kg[100001];

int main(){
    int w[100], v[100], n, k, max{0};
    cin >> n >> k;
    
    for(int i{0}; i < n; i++){
        scanf("%d %d", &w[i], &v[i]);
        
        for(int j{k}; j > 0; j--){
            if(j - w[i] > 0 && kg[j - w[i]] != 0) 
                kg[j] = kg[j - w[i]] + v[i] > kg[j] ?
                        kg[j - w[i]] + v[i] : kg[j];
        }
        kg[w[i]] = v[i] > kg[w[i]] ? v[i] : kg[w[i]];
    }

    cout << *max_element(kg, kg + k + 1) << endl;
    return 0;
}