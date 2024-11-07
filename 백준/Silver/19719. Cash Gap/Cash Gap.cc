#include <iostream>
using namespace std;

int main(){
    int cyc, p, acc;
    int *record[2];

    cin >> cyc >> p >> acc;
    record[0] = new int[p];
    record[1] = new int[p];

    fill_n(record[0], p, 0);
    fill_n(record[1], p, 0);

    while(cyc--){
        int change, from, to;
        cin >> change >> from >> to;
        if(change > 0){
            record[1][to - 1] += change;
        } else {
            record[0][from - 1] += change;
        }
    }

    for(int i{0}; i < p; i++){
        acc += record[0][i];
        if(acc < 0) {
            cout << "YES" << endl;
            break;
        }
        acc += record[1][i];
    }
    if(acc >= 0){
        cout << "NO" << endl;
    }

    delete[] record[0];
    delete[] record[1];
    return 0;
}
