#include <iostream>
using namespace std;

int main(){
    int date, err{0};
    cin >> date;

    for(int i{0}; i < 5; i++){
        int car;
        cin >> car;

        if(car == date){
            err++;
        }
    }
    cout << err << endl;

    return 0;
}