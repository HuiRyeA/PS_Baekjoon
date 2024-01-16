#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, cnt{0};
        cin >> n >> m;

        for(int i{n}; i < m + 1; i++){
            string str{to_string(i)};

            for(auto& chr : str){
                if(chr == '0') cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}