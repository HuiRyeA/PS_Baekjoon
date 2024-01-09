#include <iostream>
#include <tuple>
using namespace std;

int main(){
    int student; // 학생수
    cin >> student;
    
    tuple<string, int, int, int> top, bottom; // top:최고령 bottom:최연소
    cin >> get<0>(top) >> get<1>(top) >> get<2>(top) >> get<3>(top); // 초기값
    bottom = top;
    student--; // 초기값을 실 학생값으로 했으므로 학생수-1

    while(student--){
        tuple<string, int, int, int> temp;
        cin >> get<0>(temp) >> get<1>(temp) >> get<2>(temp) >> get<3>(temp);

        // 년도 > 달 >> 일 순으로 차례차례 비교하여 값 대입
        if(get<3>(temp) < get<3>(top)){
            top = temp;
        } else if(get<3>(temp) == get<3>(top)){
            if(get<2>(temp) < get<2>(top)){
                top = temp;
            } else if(get<2>(temp) == get<2>(top)){
                if(get<1>(temp) < get<1>(top)){
                    top = temp;
                }
            }
        }

        if(get<3>(temp) > get<3>(bottom)){
            bottom = temp;
        } else if(get<3>(temp) == get<3>(bottom)){
            if(get<2>(temp) > get<2>(bottom)){
                bottom = temp;
            } else if(get<2>(temp) == get<2>(bottom)){
                if(get<1>(temp) > get<1>(bottom)){
                    bottom = temp;
                }
            }
        }
    }

    cout << get<0>(bottom) << '\n' << get<0>(top) << '\n';

    return 0;
}