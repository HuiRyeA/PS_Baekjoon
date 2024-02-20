#include <iostream>
#include <queue>
#include <stack>
using namespace std;

pair<char, char> tree[26];

void fr(int);
void mid(int);
void rear(int);

int main(){
    int n;
    cin >> n;

    for(int i{0}; i < n; i++){
        char cur, childl, childr;
        cin >> cur >> childl >> childr;
        tree[cur - 'A'] = {childl, childr};
    }

    fr(0);
    cout << '\n';
    mid(0);
    cout << '\n';
    rear(0);
    cout << '\n';

    return 0;
}

void fr(int idx){
    cout << static_cast<char>('A' + idx);
    if(tree[idx].first != '.') fr(tree[idx].first - 'A');
    if(tree[idx].second != '.') fr(tree[idx].second - 'A');
    return;
}

void mid(int idx){
    if(tree[idx].first != '.') mid(tree[idx].first - 'A');
    cout << static_cast<char>('A' + idx);
    if(tree[idx].second != '.') mid(tree[idx].second - 'A');
    return;
}

void rear(int idx){
    if(tree[idx].first != '.') rear(tree[idx].first - 'A');
    if(tree[idx].second != '.') rear(tree[idx].second - 'A');
    cout << static_cast<char>('A' + idx);
    return;
}