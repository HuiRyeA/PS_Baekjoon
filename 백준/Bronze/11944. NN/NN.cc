#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    string str = to_string(n);
    
    int i{str.length() * n > m ? m : static_cast<int>(str.length() * n)};

    while(i > 0){
        for(auto& chr : str){
            cout << chr;
            i--;
            if(i == 0) break;
        }
    }



    return 0;
}