#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    bool c;
    cin >>a;
        for(int i=0,j=a.size()-1;i<a.size()/2;i++,j--){
            if(a[i]==a[j]){
                c=1;
            }else{
                c=0;
            }
        }
        if(c==1){
            cout << "YES"<< endl;
        }else{
            cout << "NO" << endl;
        }
}