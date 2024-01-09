#include <iostream>
using namespace std;

int main(){    
    int cycle; // 테스트 케이스의 개수
    cin >> cycle;

    while(cycle--){
        int testCase;
        cin >> testCase; // 상점의 개수

        int min{99}, max{-1}; // 상점의 위치 0~99의 최대/최소값
        while(testCase--){
            int shop;
            cin >> shop;

            if(shop > max){
                max = shop;
            }

            if(shop < min){
                min = shop;
            }
        }
/*모든 상점을 방문하고 다시 돌아오는 거리의 최솟값은
직선좌표 위 상점들을 점, 그 사이를 선이라 하면 각 선을 2번씩만 이용했을 때의 거리이므로*/
        cout << (max - min) * 2 << '\n';
    }
    
    return 0;
}   