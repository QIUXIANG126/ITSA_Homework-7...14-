#include <iostream>
using namespace std;

int main(){
    int N,memory=0;
    while(cin >> N){
        memory=0;
        for(int first=1;first<=N; first++){
            if(first%3 == 0){
                memory += first;
            }
        }
    cout << memory <<endl;
}
}
    