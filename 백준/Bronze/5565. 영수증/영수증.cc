#include <iostream>
using namespace std;

int main(){
    int allPrice; // 총 가격
    cin >> allPrice;


    //총 가격에서 9권의 가격을 모두 빼주자
    for(int i{0}; i < 9; i++){
        int book;
        cin >> book;

        allPrice -= book;
    }

    cout << allPrice << endl;

    return 0;
}