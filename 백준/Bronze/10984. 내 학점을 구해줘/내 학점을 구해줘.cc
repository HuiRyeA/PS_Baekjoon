#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t; //전체 학기수
    cin >> t;

    while(t--){
        int credit{0}; //학기당 총 학점
        double gpa{0}; //학기당 총 평점

        int classes; // 강의 수
        cin >> classes;
        for(int i{0}; i < classes; i++){
            int a;
            double b;
            cin >> a >> b;

            credit += a;
            gpa += a * b;
        }
        // 소수점 아래 1자리로 고정, 총 평점 / 총 학점 = 평균 평점 출력
        cout << setprecision(1) << fixed << credit << '\n' << gpa / credit << '\n';
    }

    return 0;
}