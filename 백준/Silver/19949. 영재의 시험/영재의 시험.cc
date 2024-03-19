#include <iostream>
#include <vector>
using namespace std;

int snow[10], cnt;
vector<int> marking;

void bt(int rank){
    // if(5 - rank > 10 - marking.size()){
    //     return;
    // }

    if(marking.size() == 10){
        if(rank > 4) cnt++;
        return;
    }

    for(int i{1}; i < 6; i++){
        if(marking.size() > 1 && *(marking.end() - 1) == i && *(marking.end() - 2) == i) continue;

        if(snow[marking.size()] == i){
            marking.push_back(i);
            bt(rank + 1);
        } else{
            marking.push_back(i);
            bt(rank);
        }
        marking.pop_back();
    }

}

int main(){
    for(int i{0}; i < 10; i++) cin >> snow[i];
    
    bt(0);
    cout << cnt << '\n';
}