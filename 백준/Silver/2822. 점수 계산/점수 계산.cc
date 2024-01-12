#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    int sum{0};
    array<pair<int, int>, 8> arr;

    //문제의 점수와 그 번호를 pair로 저장
    for(int i{0}; i < 8; i++){
        int num;
        cin >> num;
        arr.at(i) = make_pair(num, i + 1);
    }
    
    //그 중 큰 순서대로 5개를 뽑아서 번호의 오름차순으로 정렬하며 저장
    vector<pair<int, int>> carr;
    carr.reserve(5);
    for(int i{0}; i < 5; i++){
        int max = 0;
        for(int j{0}; j < 8; j++){
            if(arr.at(max).first < arr.at(j).first){
                max = j;
            }
        }

        //뽑은 문제들의 합을 저장
        sum += arr.at(max).first;

        if(!carr.empty()){
            size_t sz = carr.size(); // 따로 변수를 만들지 않으면 for 구문 중 size가 변화해서 오류
            for(int k{0}; k < sz; k++){
                //문제 번호가 기존 저장된 것보다 작을때 멈추고 인서트
                if(arr.at(max).second < carr.at(k).second){
                    carr.insert(carr.begin() + k, arr.at(max));
                    break;
                }
                //끝까지 도달했하면 그냥 푸시
                if(k == carr.size() - 1){
                    carr.push_back(arr.at(max));
                }
            }
        } else{
            //벡터가 초기 빈 상태라면
            carr.push_back(arr.at(max));
        }

        //기존 배열의 요소는 다시 뽑히지 않게 점수를 -1로
        arr.at(max).first = -1;
    }

    cout << sum << '\n';
    for(int i{0}; i < 5; i++){
        cout << carr.at(i).second << ' ';
    }
    cout << endl;

    return 0;
}