#include <iostream>
using namespace std;

int main(){
    int n, score{0}, addition{0};
    cin >> n;

    while(n--){
        int chk;
        cin >> chk;
        if(chk == 1){
            score += chk + addition++;
        } else{
            addition = 0;
        }
    }

    cout << score << '\n';
    return 0;
}