#include <iostream>
using namespace std;

int main(){
    int n, leftap{0}; // 학교 수, 남는 사과 수
    cin >> n;

    for(int i{0}; i < n; i++){
        int students, apple;
        cin >> students >> apple;

        leftap += apple % students; // 동일개수로 나눠줬을 때의 남은 사과 수
    }

    cout << leftap << endl;

    return 0;
}