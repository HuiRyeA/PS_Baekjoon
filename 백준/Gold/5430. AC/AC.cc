#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string p, arr;
        char a;
        int n, ns[100000], st, end, vacum{0};
        cin >> p >> n;
        cin.get(a); cin.get(a);
        for(int i{0}; i < n; i++){
            cin >> ns[i];
            if(i != n - 1) cin.get(a);
        }
        cin.get(a); cin.get(a);
        if(n == 0){
            for(int i{0}; i < p.length(); i++){
                if(p[i] == 'D'){
                    cout << "error" << endl;
                    break;
                }
                if(i == p.length() - 1) cout << "[]" << endl;
            }
          continue;  
        }
        st = 0; end = n - 1;
        for(char &chr : p){
            if(chr == 'R'){
                int temp{end};
                end = st;
                st = temp;
            } else if(chr == 'D'){
                if(vacum == 1) vacum = 2;
                else if(vacum == 2) break;
                else if(st < end) st += 1;
                else if(st > end) st -= 1;
                else if(st == end) vacum = 1;
            }
        }
        if(vacum == 2) cout << "error" << endl;
        else if(vacum == 1) cout << "[]" << endl;
        else if(st == end) cout << '[' << ns[st] << "]" << endl;
        else if(st < end){
            cout << '[';
            for(int k{st}; k < end + 1; k++){
                cout << ns[k];
                if(k != end) cout << ',';
            }
            cout << ']' << endl;
        } else if(st > end){
            cout << '[';
            for(int k{st}; k > end - 1; k--){
                cout << ns[k];
                if(k != end) cout << ',';
            }
            cout << ']' << endl;
        } 
    }
    return 0;
}