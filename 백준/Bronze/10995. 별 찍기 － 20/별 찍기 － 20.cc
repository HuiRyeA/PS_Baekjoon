#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool plag{false};

    for(int i{0}; i < n; i++){
        if(!plag){
            for(int j{0}; j < n; j++){
                printf("* ");
            }
            printf("\n");
        } else{
            for(int j{0}; j < n; j++){
                printf(" *");
            }
            printf("\n");
        }

        plag = !plag;
    }

    return 0;
}