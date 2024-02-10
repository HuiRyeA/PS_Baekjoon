#include <iostream>
#include <algorithm>
using namespace std;

int nn[100000];

int main(){
    int n, m;
    scanf("%d", &n);
    for(int i{0}; i < n; i++){
        scanf("%d", &nn[i]);
    }
    sort(nn, nn + n);
    scanf("%d", &m);
    for(int i{0}; i < m; i++){
        int mm;
        scanf("%d", &mm);

        int lc{0}, rc{n - 1}, cur{n / 2};
        while(1){
            if(nn[cur] == mm){
                printf("1\n");
                break;
            }
            if(lc == rc || rc < lc){
                printf("0\n");
                break;
            }
            if(nn[cur] > mm){
                rc = cur - 1;
            } else{
                lc = cur + 1;

            }
            cur = (rc + lc) / 2;
        }
    }
    return 0;
}