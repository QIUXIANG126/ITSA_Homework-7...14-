#include <iostream>
using namespace std;

int main(){
    int in;
    while(cin >> in){
        if(in ==1) cout << "YES" << endl;
        for(int com=2;com<=in;com++){
        if(in%com==0 && com !=in){
            cout << "NO" << endl;
            break;
        }else if(com == in){
            cout << "YES" << endl;
            break;
        }
    }
    }
    
}