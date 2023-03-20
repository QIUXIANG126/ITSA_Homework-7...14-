#include <iostream>
#include <string>
using namespace std;

int main(){
    int con;
    string ins,a,b,c,outs;
    char word[13][3]={"1","2","3","4","5","6","7","8","9","10","11","12","13"};
    a="SHDC";
    cin>>con;
    cin.get();
    for(int y=1;y<=con;y++){
        getline(cin,ins);
        while(!ins.empty()){
            for(int n=0;n<4;n++){
                if(ins[ins.find(a[n])]==a[n]){
                    b=ins.substr(ins.find_first_of(a[n]),3);
                    if(stoi(ins.substr(ins.find_first_of(a[n])+1,2))>9){
                        ins.erase(ins.find_first_of(a[n]),4);
                    }else{
                        ins.erase(ins.find_first_of(a[n]),3);
                    }
                    if(b[b.find(" ")]==' ')b.erase(b.find(" "),1);
                    c+=b+" ";
                }
            }
        }
        if(c[c.find_last_of(" ")]==' ')c.erase(c.find_last_of(" "),1);
        ins=c;
        c.clear();
        while(!ins.empty()){
            for(int n=0;n<4;n++){
                for(int i=13;i>=1;i--){
                    if(ins[ins.find(word[i-1])-1]==a[n]){
                        b=ins.substr(ins.find(word[i-1])-1,3);
                        if(stoi(ins.substr(ins.find(word[i-1]),2))>9){
                            ins.erase(ins.find(word[i-1])-1,4);
                        }else{
                            ins.erase(ins.find(word[i-1])-1,3);
                        }
                        if(b[b.find(" ")]==' ')b.erase(b.find(" "),1);
                        outs+=b+" ";
                    }
                }
            }
        }
    outs.replace(outs.find_last_of(" "),1,"\n");
    }
    if(outs[outs.find_last_of("\n")]=='\n')outs.erase(outs.find_last_of("\n"),2);
    cout<<outs;
}
