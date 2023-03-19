#include <iostream>
using namespace std;

int main(){
    int a,b,in;
    while(cin >> a >> b){
        int ary[a*b];
        for(int i=0;i<a*b;i++){
            cin >> in;
            ary[i]=in;
        }
        for(int j=0;j<b;j++){
            for(int i=0;i<a;i++){
                if(i!=a-1){
                    cout << ary[i*b+j] << " ";
                }else{
                    cout << ary[i*b+j];
                }
            }
            cout << endl;
        }
    }
        
}