#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, arr[1000], visited[1000];
    cin >> n;

    fill(visited, visited + n, 1);
    for(int i{0}; i < n; i++){
        cin >> arr[i];

        int max{0};
        for(int j{0}; j < i; j++){
            if(arr[j] < arr[i] && max < visited[j]) max = visited[j];
        }

        visited[i] += max;
    }

    cout << *max_element(visited, visited + n) << '\n';
    return 0;
}