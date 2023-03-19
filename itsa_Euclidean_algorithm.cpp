#include <iostream>
using namespace std;

int fn(int a,int b){
    if(b==0){
        return a;
    }
    return fn(b,a%b);
}
int main(){
    int a,b,c;
    cin >> a >> b;
    cout << fn(a,b)<< endl;
    //cout<< lam(a,b);
}