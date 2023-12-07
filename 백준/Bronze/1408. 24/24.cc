#include <iostream>
using namespace std;

int main(){
    //현재 시각과 임무를 시작한 시각에 대한 문자열형, 초단위 저장을 위한 int형 2가지
    string current, start; 
    int cur{0}, sta{0}, result;
    cin >> current >> start;
    //문자열에 int로 전환
    int temp;
    temp = current[0] * 10 + current[1];
    cur += temp * 60 * 60;

    temp = current[3] * 10 + current[4];
    cur += temp * 60;

    temp = current[6] * 10 + current[7];
    cur += temp;

    temp = start[0] * 10 + start[1];
    sta += temp * 60 * 60;

    temp = start[3] * 10 + start[4];
    sta += temp * 60;

    temp = start[6] * 10 + start[7];
    sta += temp;

    if(cur < sta){ // 임무시간이 더 크다면 날이 바뀐 것임
        result = sta - cur;
    } else if(cur > sta){ // 임무시간이 더 작다면 아직 날이 바뀌지 않았음
        result = 24 * 60 * 60 - (cur - sta); // 24시간에서 지금까지 지난 시간만큼 빼기
    }
    cout.fill('0'); // 00 표기를 위한 설정
    cout.width(2);
    cout << result / 3600 << ':';
    
    cout.fill('0');
    cout.width(2);
    cout << (result % 3600) / 60 << ':';
    
    cout.fill('0');
    cout.width(2);
    cout << (result % 3600) % 60 << '\n';
    return 0;
}