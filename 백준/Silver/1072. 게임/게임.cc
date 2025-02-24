#include <iostream>
using namespace std;

int main(){
    long long x, y, z;
    long long y_l, y_r, y_m, x_cur, z_new;
    cin >> x >> y;

    z = y * 100 / x;
    if(z < 99){
        y_l = y; y_r = y;
        do{
            y_r += x;
            y_m = (y_l + y_r) / 2;

            z_new = y_m * 100 / (x + (y_m - y));
        }while(z_new == z);

        while(y_l != y_m){
            if(z_new == z){
                y_l = y_m;
            } else if(z_new > z){
                y_r = y_m;
            }
            y_m = (y_l + y_r) / 2;
            z_new = y_m * 100 / (x + (y_m - y));
        }
        cout << y_m - y + 1 << '\n';

    } else cout << -1 << '\n';
    
    return 0;
}