#include <iostream>
using namespace std;

int main(){
    int a, b;
    int dif, predif;
    cin >> a;
    
    for(int i{1}; i < 8; i++){
        cin >> b;
        dif = a - b;
        if(i == 1) predif = dif;
        if((dif == 1 || dif == -1) && dif == predif){
            a = b;
            predif = dif;
        } else{
            cout << "mixed" << endl;
            return 0;
        }
    }

    if(dif == -1) cout << "ascending" << endl;
    else cout << "descending" << endl;

    return 0;
}