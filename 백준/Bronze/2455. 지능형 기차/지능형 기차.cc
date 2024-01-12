#include<iostream>
using namespace std;

int main(){
    int people{0}, max{0};

    for(int i{0}; i < 4; i++){
        int p, m;
        cin >> m >> p;

        people += p - m;
        if(people > max){
            max = people;
        }
    }
    cout << max << endl;

    return 0;
}