#include <iostream>
using namespace std;

void cal(int, int, int, int, int, int);

int max{-1000000000}, min{1000000000}; // 연산 최대, 최소치
int arr[11]{0}; // 연산대상 수의 개수 2~11개(n), 수의 범위 1~100
int symbol[4]{0}; // 연산자 4가지의 각 개수
int n{0}; // 실제 범위

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);   
    cin >> n;
    // 기저 입력
    for(int i{0}; i < n; i++){ 
        cin >> arr[i];
    }

    for(int i{0}; i < 4; i++){
        cin >> symbol[i];
    }

    cal(0, 0, 0, 0, 0, arr[0]);
    cout << ::max << '\n' << ::min <<'\n';
    return 0;
}
// 다음 번째 숫자로 진행할때마다 가능한 사용횟수 내에서 연산기호를 전부 활용.
void cal(int p, int m, int mu, int di, int depth, int current){
    if(p < symbol[0]){
        int temp = current + arr[depth + 1];
        if(depth + 1 == n - 1){
            if(temp > ::max){
                ::max = temp;
            }
            if(temp < ::min){
                ::min = temp;
            }
        } else{
            cal(p + 1, m, mu, di, depth + 1, temp);
        }
    }

    if(m < symbol[1]){
        int temp = current - arr[depth + 1];
        if(depth + 1 == n - 1){
            if(temp > ::max){
                ::max = temp;
            }
            if(temp < ::min){
                ::min = temp;
            }
        } else{
            cal(p, m + 1, mu, di, depth + 1, temp);
        }
    }
    if(mu < symbol[2]){
        int temp = current * arr[depth + 1];
        if(depth + 1 == n - 1){
            if(temp > ::max){
                ::max = temp;
            }
            if(temp < ::min){
                ::min = temp;
            }
        } else{
            cal(p, m, mu + 1, di, depth + 1, temp);
        }
    }
    if(di < symbol[3]){
        int temp = current / arr[depth + 1];
        if(depth + 1 == n - 1){
            if(temp > ::max){
                ::max = temp;
            }
            if(temp < ::min){
                ::min = temp;
            }
        } else{
            cal(p, m, mu, di + 1, depth + 1, temp);
        }
    }
    return;
}