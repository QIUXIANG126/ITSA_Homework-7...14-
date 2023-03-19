#include <iostream>
using namespace std;

int fn(int k);
int main(){
    int k;
    while(cin >> k){
        cout << fn(k) << endl;
    }
}

int fn(int n){
    if(n<=1){
        return n+1;
    }else{
        return fn(n-1)+fn(n/2);
    }
}
/*
time: 2023/3/5 30:55.37
    第一次上傳不知道要能連續執行
    剛開始創檔打錯檔案名稱結果不能編譯找問題找很久
*/