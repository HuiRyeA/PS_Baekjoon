#include <iostream>
#include <algorithm>
using namespace std;

int rgb[3][1000];
long visited[3][1000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    for(int i{0}; i < n; i++){
        cin >> rgb[0][i] >> rgb[1][i] >> rgb[2][i];
    }

    visited[0][0] = rgb[0][0];
    visited[1][0] = rgb[1][0];
    visited[2][0] = rgb[2][0];

    for(int i{1}; i < n; i++){
        visited[0][i] = min(visited[1][i - 1], visited[2][i - 1]) + rgb[0][i];
        visited[1][i] = min(visited[0][i - 1], visited[2][i - 1]) + rgb[1][i];
        visited[2][i] = min(visited[0][i - 1], visited[1][i - 1]) + rgb[2][i];
    }
        long last[3]{visited[0][n - 1], visited[1][n - 1], visited[2][n - 1]};
        cout << *min_element(last, last + 3) << '\n';

    return 0;
}